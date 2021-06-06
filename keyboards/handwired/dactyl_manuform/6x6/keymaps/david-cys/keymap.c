#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 2
#define _RAISE 1

#define RAISE MO(_RAISE)
#define RAISEU DF(_RAISE)
#define RAISED DF(_QWERTY)
#define LOWER MO(_LOWER)

#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

#define HOME_SC RGUI_T(KC_SCLN)
#define HOME_L RALT_T(KC_L)
#define HOME_K RCTL_T(KC_K)
#define HOME_J RSFT_T(KC_J)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_6x6(

     KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,					KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,
     KC_GESC,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                   KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_GRV ,
     KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,               	KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_MINS,
     KC_LCTL,KC_A   ,KC_S   ,HOME_D ,HOME_F ,KC_G   ,               	KC_H   ,HOME_J ,HOME_K ,HOME_L ,HOME_SC,KC_QUOT,
     KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,                   KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,
					 KC_PLUS,KC_EQL ,							                	  	KC_LBRC,KC_RBRC,
							 KC_BSPC,KC_SPC ,           						KC_ENT ,LOWER  ,
									 KC_LAPO,KC_HOME,					KC_END ,KC_RAPC,
									 KC_LGUI,RAISEU,					KC_DEL,KC_RGUI
  ),

  [_LOWER] = LAYOUT_6x6(

     KC_MUTE,KC_VOLU,KC_VOLD,KC_MPLY,KC_MSTP,KC_MPRV,                   KC_MNXT, KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12 ,
     KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                   KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
     _______,_______,_______,KC_MS_U,KC_WH_U,KC_WH_D,                   _______,_______,_______,_______,_______,_______,
     _______,_______,KC_MS_L,KC_MS_D,KC_MS_R,_______,                   KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,_______,
     _______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,
					 RESET  ,KC_PSCR,            										_______,_______,
                             KC_BTN1,KC_BTN2,           						_______,_______,
                                     _______,_______,           		_______,_______,
                                     _______,_______,           		_______,_______
  ),

  [_RAISE] = LAYOUT_6x6(

       _______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,
       _______,_______,_______,KC_D   ,KC_F   ,_______,                 _______,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,_______,
       _______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,
                       _______,_______,            										_______,_______,
                               _______,_______,            						_______,_______,
                                       _______,_______,         		_______,_______,
                                       _______,RAISED,         		_______,_______
  ),

};