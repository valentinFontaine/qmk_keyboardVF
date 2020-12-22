// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "sendstring_bepo.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BEPO 0
#define _NrPoints 1
#define _AltGr 2
//#define _Functions 3


//Attention !!!! les deux touches du milieu sont branchées à l'envers....
// Il faut les inverser dans la combinaisons de touches 
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BEPO] = LAYOUT( /* Bépo Modifié */
    /*
     * B    É   P   O   V               ||      È   D   L   J   W
     * A    U   I   E   C               ||      T   S   R   N   M
     * Ê    À   Y   K   X               ||      Q   G   H   F   W
     * Esc  Win Tab Sft Bksp    ctrl    ||  alt Spc L1  L2  Ç   Z
     */
    BP_B,    BP_EACU,    BP_P,    BP_O,    BP_V,                      BP_EGRV,    BP_D,    BP_L,    BP_J,    BP_W,
    BP_A,    BP_U,      BP_I,    BP_E,    BP_C,                      BP_T,    BP_S,    BP_R,    BP_N,    BP_M ,
    BP_ECIR,    BP_AGRV,    BP_Y,    BP_K,    BP_X,                      BP_Q,    BP_G,    BP_H, BP_F,  BP_Z ,
    KC_ESC, KC_LGUI, KC_TAB,  KC_LSFT, KC_BSPC, KC_LALT,  KC_LCTL, KC_SPC,  MO(_NrPoints), MO(_AltGr), BP_CCED, KC_ENT
  ),

  /*
   *  !       @     up     {    }        ||     pgup    7     8     9    *
   *  #     left   down  right  $        ||     pgdn    4     5     6    +
   *  [       ]      (     )    &        ||       `     1     2     3    \
   * lower  insert super shift bksp ctrl || alt space   fn    .     0    =
   */
  [_NrPoints] = LAYOUT( /* [> RAISE <] */
    BP_EXLM, BP_QUES,   BP_LCBR,   BP_RCBR, BP_BSLS,               BP_MINS, BP_7,    BP_8,   BP_9, BP_ASTR ,
    BP_DQUO, BP_QUOT, BP_LPRN, BP_RPRN, BP_DOT,                    BP_COMM, BP_4,    BP_5,   BP_6, BP_PLUS ,
    BP_LBRC, BP_RBRC, BP_LABK, BP_RABK, BP_AMPR,                   BP_EQL,  BP_1,    BP_2,   BP_3, BP_SLSH ,
    KC_ESC, KC_INS,  KC_LGUI, KC_LSFT, KC_BSPC, KC_LALT, KC_LCTL, KC_SPC,  MO(_NrPoints), MO(_AltGr), BP_0, KC_ENT  ),
  /*
   * insert home   up  end   pgup       ||      up     F7    F8    F9   F10
   *  del   left  down right pgdn       ||     down    F4    F5    F6   F11
   *       volup             reset      ||             F1    F2    F3   F12
   *       voldn  super shift bksp ctrl || alt space   L0  prtsc scroll pause
   */
  [_AltGr] = LAYOUT( /* [> LOWER <] */
    BP_AT,  BP_ACUT, KC_UP,   BP_OE,  BP_DLR,                   BP_DGRV,   BP_RNGA,   BP_PLMN,   BP_DEG,   BP_MUL  ,
    BP_AE,  KC_LEFT, KC_DOWN, KC_RGHT, BP_UNDS,                   BP_EURO, BP_SS,   BP_PERC,   BP_DTIL,   BP_DIV  ,
    BP_DCIR,   BP_UGRV, S(BP_LPRN),   S(BP_RPRN),   BP_PIPE,                     BP_NEQL,  BP_DGRK ,  BP_DIAE ,   BP_MACR,   BP_DSLS,
    KC_ESC, KC_LGUI, KC_TAB,  KC_LSFT, KC_BSPC, KC_LALT,  KC_LCTL, KC_SPC,  MO(_NrPoints), MO(_AltGr), BP_CIRC, KC_ENT
    )
};


