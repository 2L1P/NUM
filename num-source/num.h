#pragma once

#include "quantum.h"

#define LAYOUT( \
         K01, K02, K03, K04, \
         K11, K12, K13,      \
         K21, K22, K23, K24, \
         K31, K32, K33,      \
              K42, K43, K44  \
) { \
    { K01,   K02,   K03,   K04 },   \
    { K11,   K12,   K13,   KC_NO }, \
    { K21,   K22,   K23,   K24 },   \
    { K31,   K32,   K33,   KC_NO }, \
    { KC_NO, K42,   K43,   K44 }    \
}
