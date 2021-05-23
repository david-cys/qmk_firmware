#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
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
     KC_ESC ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                   KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_BSPC,
     KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,               	KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_MINS,
     KC_LCTL,HOME_A ,HOME_S ,HOME_D ,HOME_F ,KC_G   ,               	KC_H   ,HOME_J ,HOME_K ,HOME_L ,HOME_SC,KC_QUOT,
     KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,                   KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,
					 KC_LBRC,KC_RBRC,							                	  	KC_PLUS,KC_EQL,
							 KC_BSPC,KC_SPC ,           						KC_ENT, LOWER,
									 KC_LALT,KC_HOME,					KC_END ,KC_DEL ,
									 KC_LGUI,RAISE ,					KC_RGUI,KC_RALT
  ),

  [_LOWER] = LAYOUT_6x6(

     KC_MUTE,KC_VOLU,KC_VOLD,KC_MPLY,KC_MSTP,KC_MPRV,                   KC_MNXT, KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12 ,
     KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                   KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
     _______,_______,_______,_______,_______,KC_LBRC,                   KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
     _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                   KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
     _______,_______,_______,_______,_______,_______,                   _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
					 RESET  ,KC_PSCR,            										_______, KC_P0,
                             _______,_______,           						_______,_______,
                                     _______,_______,           		_______,_______,
                                     _______,_______,           		_______,_______
  ),

  [_RAISE] = LAYOUT_6x6(

       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                 KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       _______,_______,_______,_______,_______,_______,                 _______,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,
       _______,_______,_______,_______,_______,KC_LBRC,                 KC_RBRC,_______,_______,_______,_______,KC_VOLU,
       _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                 KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLD,
       _______,_______,_______,_______,_______,_______,                 _______,_______,_______,_______,_______,_______,
                       RESET  ,_______,            										KC_EQL ,_______,
                               _______,_______,            						_______,_______,
                                       _______,_______,         		_______,_______,
                                       _______,_______,         		_______,_______
  ),

};