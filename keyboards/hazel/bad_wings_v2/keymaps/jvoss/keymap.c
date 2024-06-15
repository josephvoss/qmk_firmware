#include QMK_KEYBOARD_H
#include "features/layer_lock.h"

enum custom_keycodes {
  LLOCK = SAFE_RANGE
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_layer_lock(keycode, record, LLOCK)) { return false; }
  return true;
}

enum layers {
  BASE,
  MEDIA,
  NAV,
  MOUSE,
  SYMB,
  NUM,
  FUNC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT_split_3x5_3(
    KC_Q             ,  KC_W            ,  KC_E             ,  KC_R            ,  KC_T           ,  KC_Y           ,  KC_U         ,  KC_I         ,  KC_O         ,  KC_P            ,
    LGUI_T(KC_A)     ,  LALT_T(KC_S)    ,  LCTL_T(KC_D)     ,  LSFT_T(KC_F)    ,  KC_G           ,  KC_H           ,  LSFT_T(KC_J) ,  LCTL_T(KC_K) ,  LALT_T(KC_L) ,  LGUI_T(KC_QUOT) ,
    KC_Z             ,  KC_X            ,  KC_C             ,  KC_V            ,  KC_B           ,  KC_N           ,  KC_M         ,  KC_COMM      ,  KC_DOT       ,  KC_SLSH         ,
    LT(MEDIA,KC_ESC) ,  LT(NAV,KC_BSPC)  ,  LT(MOUSE,KC_TAB),  LT(SYMB,KC_ENT) ,  LT(NUM,KC_SPC) ,  LT(FUNC,KC_DEL)
  ),
	[MEDIA] = LAYOUT_split_3x5_3(
    QK_BOOTLOADER   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , RGB_TOG , RGB_MOD , RGB_HUI , RGB_SAI , RGB_VAI ,
    KC_LGUI , KC_LALT , KC_LCTL , KC_LSFT , KC_NO   , KC_MPRV , KC_VOLD , KC_VOLU , KC_MNXT , KC_NO   ,
    KC_NO   , KC_ALGR , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,
    KC_NO   , KC_NO   , KC_NO   , KC_MSTP , KC_MPLY , KC_MUTE
  ),
	[NAV] = LAYOUT_split_3x5_3(
    KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_AGIN ,  KC_PSTE ,  KC_COPY ,  KC_CUT  ,  KC_UNDO,
    KC_LGUI ,  KC_LALT ,  KC_LCTL ,  KC_LSFT ,  KC_NO   ,  KC_LEFT ,  KC_DOWN ,  KC_UP   ,  KC_RGHT ,  KC_CAPS,
    LLOCK   ,  KC_ALGR ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_HOME ,  KC_PGDN ,  KC_PGUP ,  KC_END  ,  KC_INS,
    KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_ENT  ,  KC_BSPC ,  KC_DEL
  ),
	[MOUSE] = LAYOUT_split_3x5_3(
    KC_NO    ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_AGIN ,  KC_PSTE ,  KC_COPY ,  KC_CUT  ,  KC_UNDO,
    KC_LGUI  ,  KC_LALT ,  KC_LCTL ,  KC_LSFT ,  KC_NO   ,  KC_MS_L ,  KC_MS_D ,  KC_MS_U ,  KC_MS_R ,  KC_NO,
    LLOCK    ,  KC_ALGR ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_WH_L ,  KC_WH_D ,  KC_WH_U ,  KC_WH_R ,  KC_NO,
    KC_NO    ,  KC_NO   ,  KC_NO   ,  KC_BTN2 ,  KC_BTN1 ,  KC_BTN3
  ),
	[SYMB] = LAYOUT_split_3x5_3(
    KC_LCBR ,  KC_AMPR ,  KC_ASTR ,  KC_LPRN ,  KC_RCBR ,  KC_NO ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO,
    KC_COLN ,  KC_DLR  ,  KC_PERC ,  KC_CIRC ,  KC_PLUS ,  KC_NO ,  KC_LSFT ,  KC_LCTL ,  KC_LALT ,  KC_LGUI,
    KC_TILD ,  KC_EXLM ,  KC_AT   ,  KC_HASH ,  KC_PIPE ,  KC_NO ,  KC_NO   ,  KC_NO   ,  KC_ALGR ,  KC_NO,
    KC_LPRN ,  KC_RPRN ,  KC_UNDS ,  KC_NO   ,  KC_NO   ,  KC_NO
  ),
	[NUM] = LAYOUT_split_3x5_3(
    KC_LBRC ,  KC_7 ,  KC_8    ,  KC_9  ,  KC_RBRC ,  KC_NO ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO,
    KC_SCLN ,  KC_4 ,  KC_5    ,  KC_6  ,  KC_EQL  ,  KC_NO ,  KC_LSFT ,  KC_LCTL ,  KC_LALT ,  KC_LGUI,
    KC_GRV  ,  KC_1 ,  KC_2    ,  KC_3  ,  KC_BSLS ,  KC_NO ,  KC_NO   ,  KC_NO   ,  KC_ALGR ,  KC_NO,
    KC_DOT  ,  KC_0 ,  KC_MINS ,  KC_NO ,  KC_NO   ,  KC_NO
  ),
	[FUNC] = LAYOUT_split_3x5_3(
    KC_F12 ,  KC_F7  ,  KC_F8  ,  KC_F9 ,  KC_PSCR ,  KC_NO ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO,
    KC_F11 ,  KC_F4  ,  KC_F5  ,  KC_F6 ,  KC_SLCT ,  KC_NO ,  KC_LSFT ,  KC_LCTL ,  KC_LALT ,  KC_LGUI,
    KC_F10 ,  KC_F1  ,  KC_F2  ,  KC_F3 ,  KC_PAUS ,  KC_NO ,  KC_NO   ,  KC_NO   ,  KC_ALGR ,  KC_NO,
    KC_APP ,  KC_SPC ,  KC_TAB ,  KC_NO ,  KC_NO   ,  KC_NO
  )
};
