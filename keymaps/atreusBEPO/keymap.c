// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "sendstring_bepo.h"

#include "keymap_french.h"


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BEPO 0
#define _NrPoints 1
#define _AltGr 2
#define _Functions 3
#define _UpperNrPoints 4

#define FR_ECIR 




//Attention !!!! les deux touches du milieu sont branchées à l'envers....
// Il faut les inverser dans la combinaisons de touches 
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BEPO] = LAYOUT( /* Bépo Modifié */
    /*
     * B    É   P   O   V               ||      È   D   L   J   W
     * A    U   I   E   C               ||      T   S   R   N   M
     * Ê    À   Y   K   X               ||      Q   G   H   F   Z
     * Esc  Win Tab Sft Bksp    ctrl    ||  alt Spc L1  L2  Ç   Ent
     */
    FR_B,    FR_EACU,    FR_P,    FR_O,    FR_V,                      FR_EGRV,    FR_D,    FR_L,    FR_J,    FR_W,
    FR_A,    FR_U,      FR_I,    FR_E,    FR_C,                      FR_T,    FR_S,    FR_R,    FR_N,    FR_M ,
    FR_E,    FR_AGRV,    FR_Y,    FR_K,    FR_X,                      FR_Q,    FR_G,    FR_H, FR_F,  FR_Z ,
    KC_ESC, KC_LGUI, KC_TAB,  KC_LSFT, KC_BSPC, KC_LALT,  KC_LCTL, KC_SPC,  MO(_NrPoints), MO(_AltGr), FR_CCED, KC_ENT
  ),

  /*
   *  !       ?     {     }     \        ||       -     7     8     9    *
   *  "       '     (     )     .        ||       ,     4     5     6    +
   *  [       ]     <     >     &        ||       =     1     2     3    \
   *  ESC    Win   Tab   sft bksp   ctrl || alt space   L1    L2    0    Ent
   */
  [_NrPoints] = LAYOUT( /* [> RAISE <] */
    FR_EXLM, FR_QUES,   FR_LCBR,   FR_RCBR, FR_BSLS,               FR_MINS, FR_7,    FR_8,   FR_9, FR_ASTR ,
    FR_DQUO, FR_QUOT, FR_LPRN, FR_RPRN, FR_DOT,                    FR_COMM, FR_4,    FR_5,   FR_6, FR_PLUS ,
    FR_LBRC, FR_RBRC, FR_LABK, FR_RABK, FR_AMPR,                   FR_EQL,  FR_1,    FR_2,   FR_3, FR_SLSH ,
    KC_ESC, KC_LGUI,  KC_TAB, MO(_UpperNrPoints), KC_BSPC, KC_LALT, KC_LCTL, KC_SPC,  MO(_NrPoints), MO(_AltGr), FR_0, KC_ENT  ),
  /*
   *  !       ?     {     }     \        ||       -     7     8     9    *
   *  "       '     (     )     .        ||       ,     4     5     6    +
   *  [       ]     <     >     &        ||       =     1     2     3    \
   *  ESC    Win   Tab   sft bksp   ctrl || alt space   L1    L2    0    Ent
   */
  [_UpperNrPoints] = LAYOUT( /* [> RAISE <] */
    FR_EXLM, FR_QUES,   FR_LCBR,   FR_RCBR, FR_BSLS,               FR_MINS, FR_7,    FR_8,   FR_9, FR_ASTR ,
    FR_DQUO, FR_QUOT, FR_LPRN, FR_RPRN, FR_COLN,                   FR_SCLN, FR_4,    FR_5,   FR_6, FR_PLUS ,
    FR_LBRC, FR_RBRC, FR_LABK, FR_RABK, FR_AMPR,                   FR_EQL,  FR_1,    FR_2,   FR_3, FR_SLSH ,
    KC_ESC, KC_LGUI,  KC_TAB, KC_LSFT, KC_BSPC, KC_LALT, KC_LCTL, KC_SPC,  MO(_NrPoints), MO(_AltGr), FR_0, KC_ENT  ),
  /*
   *  @      ´     up    #     $        ||     `       °     ±      °    ×
   *  æ   left    down right   _        ||     €       ß     %      ~    ÷       
   *  ^   ù        4     5     |        ||     ≠       µ     ¨      ¯    /
   *       voldn  super shift bksp ctrl || alt space   L0  prtsc scroll pause
   */
  [_AltGr] = LAYOUT( /* [> LOWER <] */
    FR_AT,    FR_DEG,  KC_UP,      FR_EURO,      FR_DLR,                   FR_GRV,   KC_F7,  KC_F8,  KC_F9, KC_F10,
    FR_TILD,    KC_LEFT, KC_DOWN,    KC_RGHT,      FR_UNDS,                KC__VOLUP,  KC_F4,  KC_F5,  KC_F6, KC_F11,
    FR_CIRC,  FR_UGRV, FR_PERC,    FR_DIAE,      FR_PIPE,                  KC__VOLDOWN,  KC_F1,  KC_F2 , KC_F3, KC_F12,
    KC_ESC,   KC_LGUI, KC_TAB,     KC_LSFT,      KC_DEL, KC_LALT, KC_LCTL, KC_SPC, MO(_NrPoints), MO(_AltGr), FR_CIRC, KC_ENT
    )
};


