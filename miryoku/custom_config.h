// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none
#define PWD &kp RG(BACKSLASH)
#define RAY &kp LG(SPACE)
#define TBS &kp RG(RA(RC(T)))

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_GAME   1
#define U_EXTRA  2
#define U_TAP    3
#define U_BUTTON 4
#define U_NAV    5
#define U_MOUSE  6
#define U_MEDIA  7
#define U_NUM    8
#define U_SYM    9
#define U_FUN    10

ZMK_MACRO(tmux_sesh,
    wait-ms = <40>;
    tap-ms = <40>;
    bindings = <&kp GRAVE &kp T>;
)

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
  &tmux_sesh  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  TBS \
  &kp CAPS    K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  RAY \
       PWD    K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &tog U_GAME \
                      K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_GAME( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB     K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp ESC \
&kp LCTRL   K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
&kp LSHIFT  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &tog U_GAME \
                      K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYER_GAME \
&kp Q,  &kp W,     &kp E,     &kp R,      &kp T,             &kp Y,    &kp U,    &kp I,      &kp O,    &kp P, \
&kp A,  &kp S,     &kp D,     &kp F,      &kp G,             &kp H,    &kp J,    &kp K,      &kp L,    &kp DQT, \
&kp Z,  &kp X,     &kp C,     &kp V,      &kp B,             &kp N,    &kp M,    &kp COMMA,  &kp DOT,  &kp FSLH, \
  XXX,    XXX,     &kp SPACE, &kp LALT,   &mo U_NUM,    &kp RET,  &kp BSPC, &kp DEL,    XXX,      XXX
