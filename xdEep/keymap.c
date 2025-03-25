#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          RGB_VAD,        RGB_VAI,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TG(6),          
    KC_SPACE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EXLM,        
    CW_TOGG,        MT(MOD_LALT, KC_A),MT(MOD_LGUI, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RGUI, KC_L),MT(MOD_RALT, KC_SCLN),ST_MACRO_0,     
    KC_BSPC,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_AT,          
                                                    KC_NO,          LT(1,KC_ENTER),                                 LT(2,KC_ESCAPE),KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_7,           KC_8,           KC_9,           KC_AMPR,                                        KC_LCBR,        KC_UNDS,        KC_ASTR,        KC_DLR,         KC_RCBR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_0,           KC_4,           KC_5,           KC_6,           KC_TAB,                                         KC_LPRN,        KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_RPRN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        KC_1,           KC_2,           KC_3,           KC_PIPE,                                        KC_LBRC,        KC_GRAVE,       ST_MACRO_1,     LSFT(KC_3),     KC_RBRC,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,        KC_DELETE,      KC_BSPC,        KC_DELETE,                                      KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_PAGE_UP,     KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_PGDN,        KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,TO(4),          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F10,         KC_F4,          KC_F5,          KC_F6,          KC_NO,                                          KC_NO,          KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_NO,          
    KC_NO,          KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_NO,                                          KC_NO,          KC_F11,         KC_F12,         KC_F13,         KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_NO,          KC_NO,          
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MS_ACCEL0,   KC_MS_BTN3,     KC_MS_BTN1,     KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_MS_ACCEL2,   KC_MS_ACCEL1,                                   TO(0),          KC_MS_BTN2
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_GRAVE,       LALT(KC_I),     LALT(KC_E),     LALT(KC_U),                                     KC_NO,          ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     KC_NO,          KC_NO,          
    KC_NO,          ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,                                     KC_NO,          KC_RIGHT_SHIFT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          LALT(KC_C),     KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_ENTER,       
    KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_SCLN,        KC_ENTER,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,       
                                                    KC_SPACE,       KC_SPACE,                                       KC_SPACE,       KC_SPACE
  ),
};

const uint16_t PROGMEM combo0[] = { MT(MOD_RSFT, KC_J), KC_SPACE, COMBO_END};
const uint16_t PROGMEM combo1[] = { LT(1,KC_ENTER), MT(MOD_LSFT, KC_F), MT(MOD_LCTL, KC_D), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, OSL(5)),
    COMBO(combo1, OSL(3)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM -50;
        case MT(MOD_RSFT, KC_J):
            return TAPPING_TERM -50;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {187,219,123}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {0,0,0}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123}, {187,219,123} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,184,188}, {40,156,250}, {40,156,250}, {40,156,250}, {215,184,188}, {0,0,0}, {69,156,250}, {69,156,250}, {69,156,250}, {69,156,250}, {0,135,228}, {0,0,0}, {215,184,188}, {99,156,251}, {99,156,251}, {99,156,251}, {163,227,111}, {0,0,0}, {164,186,119}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {0,0,0}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {139,170,255}, {139,170,255}, {139,170,255}, {139,170,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,98}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {118,255,186}, {27,217,255}, {160,204,188}, {28,180,136}, {0,0,0}, {82,255,255}, {118,255,255}, {160,206,255}, {189,255,255}, {28,180,136}, {0,0,0}, {28,180,136}, {28,180,136}, {27,217,255}, {82,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {46,140,255}, {46,140,255}, {46,140,255}, {0,0,0}, {0,0,0}, {46,140,255}, {46,140,255}, {46,140,255}, {46,140,255}, {0,0,0}, {0,0,0}, {0,0,0}, {46,140,255}, {46,140,255}, {46,140,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,170,255}, {139,170,255}, {139,170,255}, {139,170,255}, {0,0,0}, {0,0,0}, {46,140,255}, {46,140,255}, {46,140,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,170,255}, {139,170,255}, {139,170,255}, {139,170,255}, {0,0,0}, {0,0,0}, {0,0,0}, {83,255,125}, {147,255,255}, {83,255,255}, {0,0,0}, {83,255,177}, {83,255,195}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {34,255,195}, {46,255,194}, {61,255,194}, {34,255,195}, {0,0,0}, {0,0,0}, {166,255,255}, {148,255,255}, {131,255,255}, {166,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {133,255,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {90,255,170}, {90,255,170}, {90,255,170}, {90,255,170}, {0,0,0}, {90,255,170}, {90,255,170}, {90,255,170}, {90,255,170}, {90,255,170}, {0,0,0}, {0,0,0}, {0,0,0}, {90,255,170}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {90,255,170}, {90,255,170}, {90,255,170}, {0,0,0}, {0,0,0}, {0,0,0}, {90,255,81}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_N)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6)) SS_DELAY(100) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E)) SS_DELAY(100) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_U)) SS_DELAY(100) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6)) SS_DELAY(100) SS_TAP(X_I));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6)) SS_DELAY(100) SS_TAP(X_O));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



