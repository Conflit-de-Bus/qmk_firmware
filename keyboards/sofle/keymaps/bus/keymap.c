#include QMK_KEYBOARD_H

enum sofle_layers {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LSHIFT|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|CRTL+D |    |CTRL+E |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  `   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |   [  | LALT | LGUI |LOWER | / SPACE /       \ENTER \  |RAISE | BSPC | DEL  |  ]   |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT( \
        KC_ESC,        KC_1,        KC_2,        KC_3,        KC_4,        KC_5,                                  KC_6,        KC_7,        KC_8,        KC_9,        KC_0,      KC_EQL, \
        KC_TAB,        KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,                                  KC_Y,        KC_U,        KC_I,        KC_O,        KC_P,     KC_MINS, \
        KC_LSFT,       KC_A,        KC_S,        KC_D,        KC_F,        KC_G,                                  KC_H,        KC_J,        KC_K,        KC_L,     KC_SCLN,     KC_QUOT, \
        KC_LCTRL,      KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,  LCTL(KC_D),  LCTL(KC_E),        KC_N,        KC_M,     KC_COMM,      KC_DOT,     KC_SLSH,      KC_GRV, \
                            KC_LBRC,     KC_LALT,     KC_LGUI,  MO(_LOWER),      KC_SPC,                KC_ENT,  MO(_RAISE),     KC_BSPC,      KC_DEL,     KC_RBRC \
),
/*
 * LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   è  |   R  |   T  |                    |   Y  |   ù  |   ï  |   ô  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LSHIFT|   à  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|CRTL+D |    |CTRL+E |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   ç  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  `   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |   [  | LALT | LGUI |      | / SPACE /       \ENTER \  |ADJUST| BSPC | DEL  |  ]   |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT( \
         KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_F6,                                 KC_F7,       KC_F8,       KC_F9,      KC_F10,      KC_F11,      KC_F12, \
       _______,     _______,     _______,  UC(0x00E8),     _______,     _______,                               _______,  UC(0x00F9),  UC(0x00EF),  UC(0x00F4),     _______,     _______, \
       _______,  UC(0x00E0),     _______,     _______,     _______,     _______,                               _______,     _______,       KC_UP,     _______,     _______,     _______, \
       _______,     _______,     _______,  UC(0x00E7),     _______,     _______,     _______,     _______,     _______,     KC_LEFT,     KC_DOWN,     KC_RGHT,     KC_BSLS,     _______, \
                            _______,     _______,     _______,     _______,     _______,               _______, _______,     _______,     _______,     _______ \
),
/*
 * RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   é  |   R  |   T  |                    |   Y  |   û  |   î  |   ô  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LSHIFT|   â  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |  UP  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|CRTL+D |    |CTRL+E |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   ç  |   V  |   B  |-------|    |-------|   N  | LEFT | DOWN |RIGHT |   /  |  `   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |   [  | LALT | LGUI |ADJUST| / SPACE /       \ENTER \  |      | BSPC | DEL  |  ]   |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT( \
         KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_F6,                                 KC_F7,       KC_F8,       KC_F9,      KC_F10,      KC_F11,      KC_F12, \
       _______,     _______,     _______,  UC(0x00E9),     _______,     _______,                               _______,  UC(0x00FB),  UC(0x00EE),  UC(0x00F4),     _______,     _______, \
       _______,  UC(0x00E2),     _______,     _______,     _______,     _______,                               _______,     _______,       KC_UP,     _______,     _______,     _______, \
       _______,     _______,     _______,  UC(0x00E7),     _______,     _______,     _______,     _______,     _______,     KC_LEFT,     KC_DOWN,     KC_RGHT,     KC_BSLS,     _______, \
                            _______,     _______,     _______, _______,     _______,               _______,     _______,     _______,     _______,     _______ \
),
/*
 * RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  | WIN  |   ê  |   ë  |   T  |                    |   Y  |   û  |   î  |   ô  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LSHIFT|   â  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |  UP  |LINUX |   ;  |  '   |
 * |------+------+------+------+------+------|CRTL+D |    |CTRL+E |------+------+------+------+------+------|
 * |LCTRL |   Z  |   X  |   ç  |   V  |   B  |-------|    |-------|   N  | MAC  | DOWN |RIGHT |   /  |  `   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |   [  | LALT | LGUI |      | / SPACE /       \ENTER \  |      | BSPC | DEL  |  ]   |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT( \
         KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_F6,                                 KC_F7,       KC_F8,       KC_F9,      KC_F10,      KC_F11,      KC_F12, \
       _______,     _______,     UC_M_WI,  UC(0x00EA),  UC(0x00EB),     _______,                               _______,  UC(0x00FB),  UC(0x00EE),  UC(0x00F4),     _______,     _______, \
       _______,  UC(0x00E2),     _______,     _______,     _______,     _______,                               _______,     _______,       KC_UP,     UC_M_LN,     _______,     _______, \
       _______,     _______,     _______,  UC(0x00E7),     _______,     _______,     _______,     _______,     _______,     UC_M_MA,     KC_DOWN,     KC_RGHT,     KC_BSLS,     _______, \
                            _______,     _______,     _______,     _______,     _______,               _______,     _______,     _______,     _______,     _______ \
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

static void print_status_narrow(void) {
    oled_write_ln_P(PSTR("BUS"), false);
    oled_write_P(PSTR("\n\n"), false);

    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("BASE\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("RAISE"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("LOWER"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("ADJST"), false);
            break;
        default:
            oled_write_P(PSTR("UNDEF"), false);
    }
    oled_write_P(PSTR("\n\n"), false);

    // Print current unicode mode
    oled_write_ln_P(PSTR("UNICO"), false);
    switch (get_unicode_input_mode()) {
        case UC_LNX:
            oled_write_P(PSTR("LINUX"), false);
            break;
        case UC_MAC:
            oled_write_P(PSTR("MAC\n"), false);
            break;
        case UC_WIN:
            oled_write_P(PSTR("WIN\n"), false);
            break;
        default:
            oled_write_P(PSTR("UNDEF"), false);
    }
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code16(LCTL(LSFT(KC_Z)));
        } else {
            tap_code16(LCTL(KC_Z));
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}

#endif
