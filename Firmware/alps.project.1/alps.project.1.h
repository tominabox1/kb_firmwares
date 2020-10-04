#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08,  K09, K0A, K0B, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18,  K19,      K1B, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28,  K29,      K2B,\
       K31, K32,      K34,      K36,      K38,  K39  \
) { \
{K00, K01, K02, K03, K04, K05, K06, K07, K08,  K09, K0A, K0B}, \
{K10, K11, K12, K13, K14, K15, K16, K17, K18,  K19, XXX, K1B}, \
{K20, K21, K22, K23, K24, K25, K26, K27, K28,  K29, XXX, K2B}, \
{XXX, K31, K32, XXX, K34, XXX, K36, XXX,  K38, K39, XXX,  XXX} \
}
