#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_5x6_5( \
    L00, L01, L02, L03, L04,                          R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14,                          R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24,                          R20, R21, R22, R23, R24, \
    L30, L31, L32, L33, L34,                          R30, R31, R32, R33, R34, \
         L41, L42,      L51, L55, L53,      R52, R50, R54,      R42, R43, \
                             L54, L52,      R53, R51 \
) { \
    { L00, L01, L02, L03, L04, XXX }, \
    { L10, L11, L12, L13, L14, XXX }, \
    { L20, L21, L22, L23, L24, XXX }, \
    { L30, L31, L32, L33, L34, XXX }, \
    { XXX, L41, L42, XXX, XXX, XXX }, \
    { L51, L55, L54, L52, L53, XXX }, \
\
    { R00, R01, R02, R03, R04, XXX }, \
    { R10, R11, R12, R13, R14, XXX }, \
    { R20, R21, R22, R23, R24, XXX }, \
    { R30, R31, R32, R33, R34, XXX }, \
    { XXX, XXX, R42, R43, XXX, XXX }, \
    { R53, R54, R52, R50, R51, XXX } \
}
