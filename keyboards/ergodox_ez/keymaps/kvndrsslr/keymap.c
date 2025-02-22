#include QMK_KEYBOARD_H
#include "version.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum unicode_names {
    AU,
    AAU,
    OU,
    OOU,
    UU,
    UUU,
    SZ,
    SSZ
};

const uint32_t PROGMEM unicode_map[] = {
    [AU]  = 0x00e4,
    [AAU] = 0x00c4,
    [OU]  = 0x00f6,
    [OOU] = 0x00d6,
    [UU]  = 0x00fc,
    [UUU] = 0x00dc,
    [SZ]  = 0x00df,
    [SSZ] = 0x1e9e
};

#define MUC_SZ   XP(SZ, SSZ)
#define MUC_AUML XP(AU, AAU)
#define MUC_OUML XP(OU, OOU)
#define MUC_UUML XP(UU, UUU)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TO(9),                                          _______       , KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           MO(4),                                          MO(4),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_ESCAPE,
    KC_BACKSPACE,      LSFT_T(KC_A),           LALT_T(KC_S),   LCTL_T(KC_D),   LGUI_T(KC_F),   LT(2,KC_G),                                                                     LT(2,KC_H),     RGUI_T(KC_J),   RCTL_T(KC_K),   RALT_T(KC_L),   RSFT_T(KC_SEMICOLON),      KC_DELETE,
    KC_LSFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           MO(1),                                          MO(1),          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSFT,
    OSM(MOD_HYPR),  OSM(MOD_MEH),   KC_BACKSLASH,      KC_GRAVE,       SH_T(KC_QUOTE),                                                                                                       KC_LEFT_BRACKET,    KC_RIGHT_BRACKET,    _______       , OSM(MOD_MEH),   OSM(MOD_HYPR),
                                                                                                    LGUI(KC_SPACE), _______       , _______       , _______       ,
                                                                                                                    _______       , _______       ,
                                                                                    KC_SPACE,       KC_TAB,         _______       ,          QK_BOOT,          KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_MINUS,       _______       ,           _______       ,           _______       ,           _______       ,           _______       ,           _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
    _______       , _______       ,           _______       ,           _______       ,           _______       ,           _______       ,           _______       ,                                 _______       , KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, _______       , _______       ,
    _______       ,      _______       ,      _______       ,   _______       ,  _______       ,   _______       ,                                                                     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_MS_BTN3,     _______       ,
    _______       , _______       , _______       , _______       ,   _______       ,      _______       ,           _______       ,                                 _______       , KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    _______       , _______       ,
    _______       , _______       , _______       , _______       ,    _______       ,                                                                                                    KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_MEDIA_NEXT_TRACK,_______       ,
                                                                                                    _______       , _______       , _______       , _______       ,
                                                                                                                    _______       , _______       ,
                                                                                    _______       , _______       , _______       , QK_MAKE,          KC_MS_BTN2,     KC_MS_BTN1
  ),
  [2] = LAYOUT_ergodox_pretty(
    _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
    _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , MUC_UUML,       _______       , MUC_OUML,       _______       , _______       ,
    _______       , MUC_AUML,       MUC_SZ,         _______       , _______       , _______       ,                                                                 _______       , _______       , _______       , _______       , _______       , _______       ,
    _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
    _______       , _______       , _______       , _______       , _______       ,                                                                                                 _______       , _______       , _______       , _______       , _______       ,
                                                                                                    _______       , _______       , _______       , _______       ,
                                                                                                                    _______       , _______       ,
                                                                                    _______       , _______       , _______       , _______       , _______       , _______
  ),
  [3] = LAYOUT_ergodox_pretty(
    _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
    _______       , _______       , MUC_OUML,       _______       , MUC_UUML,       _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
    _______       , _______       , _______       , _______       , _______       , _______       ,                                                                 _______       , _______       , _______       , _______       , _______       , _______       ,
    _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
    _______       , _______       , _______       , _______       , _______       ,                                                                                                 _______       , _______       , _______       , _______       , _______       ,
                                                                                                    _______       , _______       , _______       , _______       ,
                                                                                                                    _______       , _______       ,
                                                                                    _______       , _______       , _______       , _______       , _______       , _______
  ),
  // disable QGML.. layers for now
  // [4] = LAYOUT_ergodox_pretty(
  //   _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 TO(0),          _______       , _______       , _______       , _______       , _______       , _______       ,
  //   _______       , KC_Q,           KC_G,           KC_M,           KC_L,           KC_W,           _______       ,                                 _______       , KC_Y,           KC_F,           KC_U,           KC_B,           KC_SCOLON,      _______       ,
  //   _______       , LT(6,KC_D),     LALT_T(KC_S),   LCTL_T(KC_T),   LGUI_T(KC_N),   LT(6,KC_R),                                                                     LT(6,KC_I),     RGUI_T(KC_A),   RCTL_T(KC_E),   RALT_T(KC_O),   LT(6,KC_H),     _______       ,
  //   _______       , KC_Z,           KC_X,           KC_C,           KC_V,           KC_J,           MO(5),                                          MO(5),          KC_K,           KC_P,           KC_COMMA,       KC_DOT,         KC_SLASH,       _______       ,
  //   _______       , _______       , _______       , _______       , _______       ,                                                                                                 _______       , _______       , _______       , _______       , _______       ,
  //                                                                                                   _______       , _______       , _______       , _______       ,
  //                                                                                                                   _______       , _______       ,
  //                                                                                   _______       , _______       , _______       , _______       , _______       , _______
  // ),
  // [5] = LAYOUT_ergodox_pretty(
  //   _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
  //   _______       , KC_SCOLON,      KC_B,           KC_U,           KC_F,           KC_Y,           _______       ,                                 _______       , KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, _______       , _______       ,
  //   _______       , LT(7,KC_H),     LALT_T(KC_O),   LCTL_T(KC_E),   LGUI_T(KC_A),   KC_I,                                                                           KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_MS_BTN3,     _______       ,
  //   _______       , KC_SLASH,       KC_DOT,         KC_COMMA,       KC_P,           KC_K,           _______       ,                                 _______       , KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    _______       , _______       ,
  //   _______       , _______       , _______       , _______       , _______       ,                                                                                                 KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_MEDIA_NEXT_TRACK,_______       ,
  //                                                                                                   _______       , _______       , _______       , _______       ,
  //                                                                                                                   _______       , _______       ,
  //                                                                                   _______       , _______       , _______       , RESET,          KC_MS_BTN2,     KC_MS_BTN1
  // ),
  // [6] = LAYOUT_ergodox_pretty(
  //   _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
  //   _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , ST_MACRO_7,     _______       , _______       , _______       ,
  //   _______       , _______       , ST_MACRO_6,     _______       , _______       , _______       ,                                                                 _______       , ST_MACRO_8,     _______       , ST_MACRO_9,     _______       , _______       ,
  //   _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
  //   _______       , _______       , _______       , _______       , _______       ,                                                                                                 _______       , _______       , _______       , _______       , _______       ,
  //                                                                                                   _______       , _______       , _______       , _______       ,
  //                                                                                                                   _______       , _______       ,
  //                                                                                   _______       , _______       , _______       , _______       , _______       , _______
  // ),
  // [7] = LAYOUT_ergodox_pretty(
  //   _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
  //   _______       , _______       , _______       , ST_MACRO_10,    _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
  //   _______       , _______       , ST_MACRO_11,    _______       , ST_MACRO_12,    _______       ,                                                                 _______       , _______       , _______       , _______       , _______       , _______       ,
  //   _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
  //   _______       , _______       , _______       , _______       , _______       ,                                                                                                 _______       , _______       , _______       , _______       , _______       ,
  //                                                                                                   _______       , _______       , _______       , _______       ,
  //                                                                                                                   _______       , _______       ,
  //                                                                                   _______       , _______       , _______       , _______       , _______       , _______
  // ),
  [4] = LAYOUT_ergodox_pretty(
    _______       , KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          _______       ,                                 _______       , KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , KC_7,           KC_8,           KC_9,           _______       , KC_F12,
    _______       , _______       , _______       , _______       , _______       , _______       ,                                                                 _______       , KC_4,           KC_5,           KC_6,           _______       , _______       ,
    _______       , _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , KC_1,           KC_2,           KC_3,           _______       , _______       ,
    _______       , _______       , _______       , _______       , _______       ,                                                                                                 _______       , KC_0,           _______       , _______       , _______       ,
                                                                                                    LED_LEVEL,      _______       , _______       , _______       ,
                                                                                                                    _______       , _______       ,
                                                                                    _______       , _______       , _______       , _______       , _______       , _______
  ),
  [9] = LAYOUT_ergodox_pretty(
    _______       , _______       , _______       , _______       , _______       , _______       , TO(0),                                          _______       , _______       , _______       , _______       , _______       , _______       , _______       ,
    KC_LALT,        _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , KC_RALT,
    KC_LCTL,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SEMICOLON,      KC_RCTL,
    KC_LSFT,      _______       , _______       , _______       , _______       , _______       , _______       ,                                 _______       , _______       , _______       , _______       , _______       , _______       , KC_RSFT,
    KC_LGUI,        _______       , _______       , _______       , _______       ,                                                                                                 _______       , _______       , _______       , _______       , KC_RGUI,
                                                                                                    _______       , _______       , _______       , _______       ,
                                                                                                                    _______       , _______       ,
                                                                                    _______       , _______       , KC_ESCAPE,      KC_ESCAPE,      _______       , _______
  )
};

const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
    /* Left hand, matrix positions */
    {{0, 13}, {1, 13}, {2, 13}, {3, 13}, {4, 13}, {5, 13}},
    {{0, 12}, {1, 12}, {2, 12}, {3, 12}, {4, 12}, {5, 12}},
    {{0, 11}, {1, 11}, {2, 11}, {3, 11}, {4, 11}, {5, 11}},
    {{0, 10}, {1, 10}, {2, 10}, {3, 10}, {4, 10}, {5, 10}},
    {{0, 9}, {1, 9}, {2, 9}, {3, 9}, {4, 9}, {5, 9}},
    {{0, 8}, {1, 8}, {2, 8}, {3, 8}, {4, 8}, {5, 8}},
    {{0, 7}, {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}},
    /* Right hand, matrix positions */
    {{0, 6}, {1, 6}, {2, 6}, {3, 6}, {4, 6}, {5, 6}},
    {{0, 5}, {1, 5}, {2, 5}, {3, 5}, {4, 5}, {5, 5}},
    {{0, 4}, {1, 4}, {2, 4}, {3, 4}, {4, 4}, {5, 4}},
    {{0, 3}, {1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}},
    {{0, 2}, {1, 2}, {2, 2}, {3, 2}, {4, 2}, {5, 2}},
    {{0, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}},
    {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}},
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // case :
    // if (record->event.pressed) {
    //   SEND_STRING(SS_LALT(SS_TAP(X_U)) SS_DELAY(100) SS_TAP(X_A));
    // }
    default:
      break;
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer % 8) {
    case 1:
      ergodox_right_led_3_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      ergodox_right_led_2_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      break;
    case 5:
      ergodox_right_led_3_on();
      ergodox_right_led_1_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_1_on();
      break;
    case 7:
      ergodox_right_led_3_on();
      ergodox_right_led_2_on();
      ergodox_right_led_1_on();
      break;
    default:
      break;
  }
  return state;
};

// void matrix_init_user(void) {
//     set_unicode_input_mode(UC_MAC);
// };
