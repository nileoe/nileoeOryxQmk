#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
};

// BO custom QMK
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
        'L', '*', '*', '*', '*', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 
                            'L', '*',  '*', 'R'
    );

const key_override_t gpb_key_override = 
    ko_make_basic(MOD_MASK_SHIFT, KC_DLR, RSFT(RALT(KC_4)));
const key_override_t euro_key_override = 
    ko_make_basic(MOD_MASK_SHIFT, KC_8, RALT(KC_5));

const key_override_t **key_overrides = (const key_override_t *[]){
	&gpb_key_override,
	&euro_key_override,
	NULL
};
// EO custom QMK

enum tap_dance_codes {
  DANCE_0,
};

#define DUAL_FUNC_0 LT(3, KC_F7)
#define DUAL_FUNC_1 LT(9, KC_M)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          RGB_VAD,        RGB_VAI,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(5),          
    KC_SPACE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EXLM,        
    CW_TOGG,        MT(MOD_LALT, KC_A),MT(MOD_LGUI, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RGUI, KC_L),MT(MOD_LALT, KC_SCLN),RALT(KC_QUOTE), 
    KC_BSPC,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_AT,          
                                                    QK_REPEAT_KEY,  LT(1,KC_ENTER),                                 LT(2,KC_ESCAPE),KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, 	    KC_TRANSPARENT,        KC_TRANSPARENT,        KC_TRANSPARENT,        KC_TRANSPARENT,        KC_TRANSPARENT,                                        KC_TRANSPARENT,        KC_TRANSPARENT,        KC_TRANSPARENT,        KC_TRANSPARENT,        KC_TRANSPARENT,        KC_TRANSPARENT, 
    KC_TRANSPARENT, RALT(KC_GRAVE), KC_7,           KC_8,           KC_9,           KC_AMPR,                                        KC_LCBR,        KC_UNDS,        KC_ASTR,        KC_DLR,         KC_RCBR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, 	    KC_0,           KC_4,           KC_5,           KC_6,           KC_TAB,                                         KC_LPRN,        KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_RPRN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        KC_1,           KC_2,           KC_3,           KC_PIPE,                                        KC_LBRC,        RALT(RSFT(KC_GRAVE)),KC_PERC,        LSFT(KC_3),     KC_RBRC,        KC_DOT,         
                                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                               KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,        RALT(KC_COMMA), KC_DELETE,      KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LGUI, KC_GRAVE),DUAL_FUNC_0,    MT(MOD_LSFT, KC_QUOTE),LSFT(KC_QUOTE),                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_PAGE_UP,     KC_NO,          
    KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     RALT(KC_E),     RALT(KC_F),                                     TO(4),          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_PGDN,        KC_NO,          
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
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(0),          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_ENTER,       
    KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_UP,          KC_ENTER,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_LEFT,        KC_DOWN,        KC_RIGHT,       
                                                    KC_SPACE,       KC_LEFT_ALT,                                    KC_ESCAPE,      KC_SPACE
  ),
  [6] = LAYOUT_voyager(
    KC_Y,           KC_4,           KC_3,           KC_2,           KC_1,           KC_0,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(0),          
    KC_U,           KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_I,           KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_O,           KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_LEFT_CTRL,   TD(DANCE_0),                                    DUAL_FUNC_1,    KC_SPACE
  ),
};


const uint16_t PROGMEM combo0[] = { LT(1, KC_ENTER), MT(MOD_LSFT, KC_F), MT(MOD_LCTL, KC_D), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, OSL(3)),
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

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {163,227,111}, {40,156,250}, {40,156,250}, {40,156,250}, {215,184,188}, {0,0,0}, {69,156,250}, {69,156,250}, {69,156,250}, {69,156,250}, {0,135,228}, {0,0,0}, {215,184,188}, {99,156,251}, {99,156,251}, {99,156,251}, {163,227,111}, {0,0,0}, {164,186,119}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {0,0,0}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {163,227,111}, {215,184,188}, {163,227,111}, {163,227,111}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {90,255,170}, {0,255,255}, {0,0,0}, {0,0,0}, {139,170,255}, {90,255,170}, {90,255,170}, {90,255,170}, {90,255,170}, {0,0,0}, {90,255,170}, {90,255,170}, {90,255,170}, {90,255,170}, {90,255,170}, {0,0,0}, {0,0,98}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {118,255,186}, {27,217,255}, {160,204,188}, {0,0,0}, {0,0,0}, {82,255,255}, {118,255,255}, {160,206,255}, {189,255,255}, {28,180,136}, {0,0,0}, {82,255,255}, {28,180,136}, {27,217,255}, {28,180,136}, {28,180,136}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {46,140,255}, {46,140,255}, {46,140,255}, {0,0,0}, {0,0,0}, {46,140,255}, {46,140,255}, {46,140,255}, {46,140,255}, {0,0,0}, {0,0,0}, {0,0,0}, {46,140,255}, {46,140,255}, {46,140,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,170,255}, {139,170,255}, {139,170,255}, {139,170,255}, {0,0,0}, {0,0,0}, {46,140,255}, {46,140,255}, {46,140,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,170,255}, {139,170,255}, {139,170,255}, {139,170,255}, {0,0,0}, {0,0,0}, {0,0,0}, {83,255,125}, {147,255,255}, {83,255,255}, {0,0,0}, {83,255,177}, {83,255,195}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {34,255,195}, {46,255,194}, {61,255,194}, {34,255,195}, {0,0,0}, {0,0,0}, {166,255,255}, {148,255,255}, {131,255,255}, {166,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {133,255,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
    case 6:
      set_layer_color(6);
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
      SEND_STRING(SS_TAP(X_GRAVE) SS_DELAY(50) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE) SS_DELAY(50) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6)) SS_DELAY(50) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE) SS_DELAY(50) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6)) SS_DELAY(50) SS_TAP(X_I));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6)) SS_DELAY(50) SS_TAP(X_O));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(KC_6));
        } else {
          unregister_code16(LSFT(KC_6));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }
      } else {
        if (record->event.pressed) {
          layer_move(2);
        } else {
          layer_move(2);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_HOLD: register_code16(KC_LEFT_ALT); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
};
