#ifndef QUERTZ_KEYCODES_H
#define QUERTZ_KEYCODES_H


/*
This file converts qmk keycodes to german software layout. 
*/

#define GKC_DOTS RALT(KC_DOT) // …
#define GKC_USC LSFT(KC_SLASH) // _
#define GKC_LSQBR RALT(KC_8) // [
#define GKC_RSQBR RALT(KC_9) // ]
#define GKC_CIRC KC_GRAVE // ^
#define GKC_EXKL LSFT(KC_1) // !
#define GKC_GT LSFT(KC_NONUS_BSLASH) // >
#define GKC_LT KC_NONUS_BSLASH // <  
#define GKC_EQ LSFT(KC_0) // =
#define GKC_AMP LSFT(KC_6) // &
#define GKC_BSLS RALT(KC_MINS) // \ backslash
#define GKC_SLSH LSFT(KC_7) // /
#define GKC_LCUBR RALT(KC_7) // {
#define GKC_RCUBR RALT(KC_0) // }
#define GKC_ASTR LSFT(KC_RBRC) // *
#define GKC_QUES LSFT(KC_MINS) // ?
#define GKC_LPARN LSFT(KC_8) // (
#define GKC_RPARN LSFT(KC_9) // )
#define GKC_MINS KC_SLASH // -
#define GKC_COLN LSFT(KC_DOT) // :
#define GKC_HASH KC_BSLASH // #
#define GKC_DLR LSFT(KC_4) // $
#define GKC_PIPE RALT(KC_NONUS_BSLASH) // |
#define GKC_TILD RALT(KC_RBRC) // ~
#define GKC_GRAVE LSFT(KC_EQUAL) // `
#define GKC_PLUS KC_RBRC // +
#define GKC_PERC LSFT(KC_5) // %
#define GKC_QUOT LSFT(KC_2) // "
#define GKC_SING LSFT(KC_BSLASH) // '
#define GKC_SEMI LSFT(KC_COMM) // ;
#define GKC_EURO RALT(KC_E) // €
#define GKC_AT RALT(KC_Q) // @
#define GKC_Z KC_Y
#define GKC_Y KC_Z
#define GKC_OE KC_SCOLON // ö
#define GKC_AE KC_QUOTE // ä
#define GKC_UE KC_LBRACKET // ü
#define GKC_SS KC_MINS // ß
#define GKC_DEGRE LSFT(KC_GRAVE) // °

#endif
