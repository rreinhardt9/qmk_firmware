#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

#define KC_ KC_TRNS
#define KC_CTRLESC CTL_T(KC_ESC)
#define KC_ALTENT ALT_T(KC_ENT)
#define KC_CMDTAB CMD_T(KC_TAB)
#define KC_RSFTMINS RSFT_T(KC_MINS)
#define KC_LOWER LOWER
#define KC_RAISE RAISE
#define KC_RESET RESET

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_kc(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       GRV   ,   1    ,   2    ,   3    ,   4    ,   5    ,                              6    ,   7    ,   8    ,   9    ,   0    ,   EQL  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       TAB   ,   Q    ,   W    ,   E    ,   R    ,   T    ,                              Y    ,   U    ,   I    ,   O    ,   P    ,  BSLS  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       CAPS  ,   A    ,   S    ,   D    ,   F    ,   G    ,                              H    ,   J    ,   K    ,   L    ,  SCLN  ,  QUOT  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       LSFT  ,   Z    ,   X    ,   C    ,   V    ,   B    , CMDTAB ,          ALTENT ,   N    ,   M    ,  COMM  ,  DOT   ,  SLSH  ,RSFTMINS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    CTRLESC , LOWER  ,  ESC   ,                    SPC   ,  RAISE , CTRLESC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )   ,

  [_LOWER] = LAYOUT_kc(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      TILD   ,  EXLM  ,   AT   ,  HASH  ,  DLR   ,  PERC  ,                             CIRC  ,  AMPR  ,  ASTR  ,  LPRN  ,  RPRN  ,  PGUP  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      RESET  ,        ,  HOME  ,   UP   ,  PGUP  ,  LCBR  ,                             RCBR  ,   P7   ,   P8   ,   P9   ,        ,  PGDN  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       DEL   ,        ,  LEFT  ,  DOWN  ,  RGHT  ,  LPRN  ,                             RPRN  ,   P4   ,   P5   ,   P6   ,  PLUS  ,  HOME  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             ,        ,  END   ,        ,  PGDN  ,  LBRC  ,        ,                 ,  RBRC  ,   P1   ,   P2   ,   P3   ,  MINS  ,  END   ,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            ,        ,        ,                          ,        ,   P0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT_kc(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        F12  ,   F1   ,   F2   ,   F3   ,   F4   ,   F5   ,                              F6   ,   F7   ,   F8   ,   F9   ,   F10   ,  F11  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             ,  EXLM  ,   AT   ,  HASH  ,   DLR  ,  PERC  ,                             CIRC  ,  AMPR  ,  ASTR  ,  LPRN  ,  RPRN  ,        ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             ,  MPRV  ,  MNXT  ,  VOLU  ,  PGUP  ,  UNDS  ,                             EQL  ,   HOME  ,        ,        ,        ,        ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       MUTE  ,  MSTP  ,  MPLY  ,  VOLD  ,  PGDN  ,  MINS  ,  LPRN  ,                 ,  PLUS  ,  END   ,        ,        ,        ,        ,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            ,        ,        ,                          ,        ,
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, _______, _______, _______, _______, _______,                            _______, _______, RGB_HUI, RGB_SAI, RGB_VAI, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, RGB_HUD, RGB_SAD, RGB_VAD, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}
