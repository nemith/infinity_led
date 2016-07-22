#include "keymap_common.h"

/*
 * ,-----------------------------------------------------------.
 * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
 * |-----------------------------------------------------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
 * |-----------------------------------------------------------|
 * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
 * |-----------------------------------------------------------|
 * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
 * |-----------------------------------------------------------'
 * |     |Gui|Alt  |         Space         |Alt |Fn0 |   |     |
 * `-----------------------------------------------------------'
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer */
    [0] =
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, GRV, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,  \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,PSCR, \
           LCTL,LGUI,LALT,          SPC,                RALT,FN0 ,PGUP,PGDN),

    /* Layer 1 */
    [1] =
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           TRNS,TRNS,UP  ,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,HOME,END ,PGDN,PGUP,TRNS,       \
           CAPS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,INS ,DEL ,TRNS,            \
           TRNS,VOLD,VOLU,MUTE,MPLY,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};

