#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
enum layers{
    _WORKMAN = 0,
    _SYM,
    _NUM,
    _MEDIA,
    _NAV
};

// LAYER TAPS
#define MEDIA_PLAY LT(_MEDIA, KC_MPLY)
#define A_NAV      LT(_NAV, KC_A)
#define SPC_SYM    LT(_SYM, KC_SPC)
#define TAB_SYM    LT(_SYM, KC_TAB)
#define BSPC_NUM   LT(_NUM, KC_BSPC)
#define ENTR_NUM   LT(_NUM, KC_ENT)

// MOD TAPS
#define T_CTL      MT(MOD_LCTL, KC_T)
#define N_CTL      MT(MOD_LCTL, KC_N)
#define CTL_RPRN   MT(MOD_LCTL, KC_LPRN)
#define CTL_QUOT   MT(MOD_LCTL, KC_QUOT)

#define H_ALT      MT(MOD_LALT, KC_H)
#define E_ALT      MT(MOD_LALT, KC_E)
#define ALT_LPRN   MT(MOD_LALT, KC_LPRN)
#define ALT_MINS   MT(MOD_LALT, KC_MINS)


#define O_SFT      MT(MOD_LSFT, KC_O)
#define S_SFT      MT(MOD_LSFT, KC_S)
#define SFT_DLR    MT(MOD_LSFT, KC_DLR)
#define SFT_LT     MT(MOD_LSFT, KC_LT)

#define GUI_F      MT(MOD_LGUI, KC_F)
#define GUI_W      MT(MOD_LGUI, KC_W)
#define GUI_UNDS   MT(MOD_LGUI, KC_UNDS)
#define GUI_RCBR   MT(MOD_LGUI, KC_RCBR)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_WORKMAN] =  LAYOUT(KC_NO  , KC_Q   , KC_D   , KC_R   , GUI_W  , KC_B   ,                                         KC_J   , GUI_F  , KC_U   , KC_P   , KC_SCLN, KC_NO  ,
                         KC_NO  , A_NAV  , S_SFT  , H_ALT  , T_CTL  , KC_G   ,                                         KC_Y   , N_CTL  , E_ALT  , O_SFT  , KC_I   , KC_NO  ,
                         KC_NO  , KC_Z   , KC_X   , KC_M   , KC_C   , KC_V   , KC_NO  , MEDIA_PLAY , KC_NO  , KC_NO  , KC_K   , KC_L   , KC_COMM, KC_DOT , KC_SLSH, KC_NO  ,
                                                    KC_NO  , KC_NO  , SPC_SYM,BSPC_NUM, KC_ESC     , KC_DEL ,ENTR_NUM, TAB_SYM, KC_NO    , KC_NO  ),

    [_SYM] = LAYOUT(KC_NO  , KC_EXLM, KC_AT  , KC_LCBR,GUI_RCBR, KC_GRV ,                                     KC_BSLS, KC_DQT  , GUI_UNDS , KC_GT  , KC_ASTR, KC_NO  ,
                    KC_NO  , KC_HASH, SFT_DLR,ALT_LPRN,CTL_RPRN, KC_PIPE,                                     KC_EQL , CTL_QUOT, ALT_MINS, SFT_LT , KC_PLUS, KC_NO  ,
                    KC_NO  , KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_AMPR, KC_NO   , KC_NO   , KC_NO  , KC_NO  , KC_NO  ,
                                               KC_NO  , KC_TRNS, KC_TRNS, KC_TRNS, KC_NO  , KC_NO  , KC_TRNS, KC_TRNS, KC_TRNS , KC_NO  ),

    [_NUM] = LAYOUT(KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                     KC_NO  , KC_7   , KC_8   , KC_9   , KC_ASTR, KC_NO  ,
                    KC_NO  , KC_NO  , KC_LSFT, KC_LALT, KC_LCTL, KC_NO  ,                                     KC_EQL , KC_4   , KC_5   , KC_6   , KC_PLUS, KC_NO  ,
                    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_AMPR, KC_1   , KC_2   , KC_3   , KC_BSLS, KC_NO  ,
                                               KC_NO  , KC_TRNS, KC_TRNS, KC_TRNS, KC_NO  , KC_NO  , KC_TRNS, KC_TRNS, KC_0   , KC_DOT),

    [_MEDIA] = LAYOUT(KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                                KC_VOLU, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO ,
                      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                                                KC_VOLD, KC_MRWD, KC_MFFD, KC_NO  , KC_NO  , KC_NO ,
                      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO ,
                                                 KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_TRNS, KC_NO),

    [_NAV] = LAYOUT(KC_F1  , KC_F2  , KC_F3  , KC_NO  , KC_LGUI, KC_F6  ,                                     KC_F7  , KC_LGUI  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
                    KC_NO  , KC_TRNS, KC_LSFT, KC_LALT, KC_LCTL, KC_NO  ,                                     KC_NO  , KC_LEFT, KC_UP  , KC_DOWN, KC_RGHT, KC_NO  ,
                    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
                                               KC_NO  , KC_NO  , KC_TRNS, KC_TRNS, KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO),
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	return OLED_ROTATION_180;
}

static void render_kyria_logo(void) {
    static const char PROGMEM kyria_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,224,240,112,120, 56, 60, 28, 30, 14, 14, 14,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 14, 14, 14, 30, 28, 60, 56,120,112,240,224,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,192,224,240,124, 62, 31, 15,  7,  3,  1,128,192,224,240,120, 56, 60, 28, 30, 14, 14,  7,  7,135,231,127, 31,255,255, 31,127,231,135,  7,  7, 14, 14, 30, 28, 60, 56,120,240,224,192,128,  1,  3,  7, 15, 31, 62,124,240,224,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,240,252,255, 31,  7,  1,  0,  0,192,240,252,254,255,247,243,177,176, 48, 48, 48, 48, 48, 48, 48,120,254,135,  1,  0,  0,255,255,  0,  0,  1,135,254,120, 48, 48, 48, 48, 48, 48, 48,176,177,243,247,255,254,252,240,192,  0,  0,  1,  7, 31,255,252,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,254,255,255,  1,  1,  7, 30,120,225,129,131,131,134,134,140,140,152,152,177,183,254,248,224,255,255,224,248,254,183,177,152,152,140,140,134,134,131,131,129,225,120, 30,  7,  1,  1,255,255,254,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,255,255,  0,  0,192,192, 48, 48,  0,  0,240,240,  0,  0,  0,  0,  0,  0,240,240,  0,  0,240,240,192,192, 48, 48, 48, 48,192,192,  0,  0, 48, 48,243,243,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48,192,192,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,127,255,255,128,128,224,120, 30,135,129,193,193, 97, 97, 49, 49, 25, 25,141,237,127, 31,  7,255,255,  7, 31,127,237,141, 25, 25, 49, 49, 97, 97,193,193,129,135, 30,120,224,128,128,255,255,127,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0, 63, 63,  3,  3, 12, 12, 48, 48,  0,  0,  0,  0, 51, 51, 51, 51, 51, 51, 15, 15,  0,  0, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48, 63, 63, 48, 48,  0,  0, 12, 12, 51, 51, 51, 51, 51, 51, 63, 63,  0,  0,  0,  0,  0,
        0,  0,  0,  0, 15, 63,255,248,224,128,  0,  0,  3, 15, 63,127,255,239,207,141, 13, 12, 12, 12, 12, 12, 12, 12, 30,127,225,128,  0,  0,255,255,  0,  0,128,225,127, 30, 12, 12, 12, 12, 12, 12, 12, 13,141,207,239,255,127, 63, 15,  3,  0,  0,128,224,248,255, 63, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  3,  7, 15, 62,124,248,240,224,192,128,  1,  3,  7, 15, 30, 28, 60, 56,120,112,112,224,224,225,231,254,248,255,255,248,254,231,225,224,224,112,112,120, 56, 60, 28, 30, 15,  7,  3,  1,128,192,224,240,248,124, 62, 15,  7,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  3,  7, 15, 14, 30, 28, 60, 56,120,112,112,112,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,112,112,112,120, 56, 60, 28, 30, 14, 15,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    };
    oled_write_raw_P(kyria_logo, sizeof(kyria_logo));
}

static void render_qmk_logo(void) {
  static const char PROGMEM qmk_logo[] = {
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};

  oled_write_P(qmk_logo, false);
}
static void render_status(void) {
    // QMK Logo and version information
    render_qmk_logo();
    oled_write_P(PSTR("    Howdy Partner\n\n"), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("ACTIVITY: "), false);
    switch (get_highest_layer(layer_state)) {
        case _WORKMAN:
            oled_write_P(PSTR("WORKIN'\n"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("NAVIGATIN'\n"), false);
            break;
        case _SYM:
            oled_write_P(PSTR("SYMBLIN'\n"), false);
            break;
        case _NUM:
            oled_write_P(PSTR("NUMBERIN'\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined\n"), false);
    }

    // Host Keyboard LED Status
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status(); // Renders the current keyboard state (layer, lock, caps, scroll, etc)
        return false;
    } else {
        render_kyria_logo();
        return false;
    }
}
#endif

