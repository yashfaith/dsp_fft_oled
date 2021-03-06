#include <stdint.h>
#define BUFFERLENGTH 33

#ifndef FILTERCOEFF
#define FLTERCOEFF

// ALL PASS FILTER
const int8_t apf0[BUFFERLENGTH] = {
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

// LOW PASS FILTER
const int8_t lpf1[BUFFERLENGTH] = {
-1, 1, 58, -3, -1, 13, 18, -1, 2, -28, -3, -1, -1, -75, -1, -1,
5, -1, 1, 2, 1, -3, -1, 1, -24, 1, -1, 17, -1, 1, 1, 40, 4
};

const int8_t lpf2[BUFFERLENGTH] = {
-1, -2, 65, -4, -1, 1, -10, 1, 1, 24, -7, 1, -3, 161, -5, 1, 7,
-18, -2, -2, -33, 10, 1, -1, 64, 3, 1, -1, 43, 3, 3, -43, -1
};

const int8_t lpf3[BUFFERLENGTH] = {
-1, -3, 58, 1, -1, -8, -28, 2, -1, -18, -12, 1, -3, -75, -1, -1,
-7, 40, 2, 1, -36, 23, 1, 5, -24, 1, -1, -4, 40, 1, 1, -1, -17
};

const int8_t lpf4[BUFFERLENGTH] = {
-1, -2, 40, 7, -1, -1, 75, -3, 1, 12, -18, 1, -2, -28, 8, -1, -1,
-58, -3, -1, -17, -1, -1, -1, -40, -4, -1, -1, -24, -5, -1, 23, 36
};

const int8_t lpf5[BUFFERLENGTH] = {
-2, -2, 18, 7, -1, 5, 161, 3, -1, -7, -24, -1, -1, 10, -1, 1, 4,
65, 2, 1, -1, -43, -3, -3, 43, 1, 1, 3, 193, 1, 1, -10, -33
};

const int8_t lpf6[BUFFERLENGTH] = {
-2, -1, 1, -5, 1, 1, 75, -1, -1, 3, -28, -2, 1, 18, -13, -1, -3,
-58, -1, -1, 4, -40, -1, -1, 1, 17, -1, -1, -24, -1, -1, -3, -1
};

const int8_t lpf7[BUFFERLENGTH] = {
-3, -1, -10, -18, 1, -3, -28, -6, -1, 1, -31, -3, 1, 5, -1, -1,
-1, 40, -3, -1, 1, 24, 5, 1, -23, -36, -2, -3, 40, 1, -1, -1, 44
};

// HIGH PASS FILTER
const int8_t hpf1[BUFFERLENGTH] = {
-2, -1, -10, -10, -1, -1, -10, 10, -1, -2, 225, -3, 1, -7, 26, 2,
2, -18, 7, -1, -3, 64, -1, 1, 10, 33, -3, -3, 43, 14, -1, 2, 193
};

const int8_t hpf2[BUFFERLENGTH] = {
1, -1, -6, 28, -3, 1, 18, -10, 1, 3, -31, -1, -1, -7, -1, -1, -1,
-1, -12, 1, -1, 24, 1, -1, 3, -1, -3, -2, -1, 0, -1, 3, 44
};

const int8_t hpf3[BUFFERLENGTH] = {
3, -1, -1, 75, 1, 1, -5, 1, -1, -2, -28, 6, -1, -1, -81, -3, -1,
10, 18, 2, 3, -40, -1, -1, -1, -44, -1, -1, -23, -36, 2, -4, -1
};

const int8_t hpf4[BUFFERLENGTH] = {
7, -1, 3, 97, 5, -1, -7, 18, 2, 2, -24, 10, 1, 4, 129, 4, 1,-10,
-24, 3, 3, -43, -14, 1, -2, 64, 3, 1, -10, 1, -1, -1, -33
};

const int8_t hpf5[BUFFERLENGTH] = {
12, -1, 3, 75, -1, -1, 7, -40, -2, -1, -18, 10, 1, 3, -81, -1,
-1, 6, 28, 3, 2, -1, 1, 1, -3, -44, -1, -1, 3, 56, -4, 2, 36

};

const int8_t hpf6[BUFFERLENGTH] = {
18, -1, 2, 28, -8, -1, 1, 58, 3, 1, -12, -1, -1, -1, -1, -7, -1,
-1, -31, -1, 1, 23, 36, -2, 4, -1, -4, -1, -1, 1, 3, -1, -17

};

const int8_t hpf7[BUFFERLENGTH] = {
24, 1, 1, -10, 1, -1, -4, 193, -2, -1, -7, -18, -2, -2, 26, 7, 1,
-3, 32, -3, -1, 10, -1, 1, 1, 33, -1, 1, -2, 193, 2, -1, -1
};

// BAND PASS FILTER
const int8_t bpf1[BUFFERLENGTH] = {
28, 2, -1, -18, 13, 1, 3, 58, 1, -1, -3, -40, -1, -1, -1, 5, -1,
3, -31, 1, -1, -3, -56, 4, -2, -36, 17, -1, 3, 1, -1, -1, 4
};

const int8_t bpf2[BUFFERLENGTH] = {
31, 3, -1, -5, -1, 1, 1, -40, 3, -1, -1, -58, 3, 1, -13, -18, 1,
-2, 28, 4, -1, -1, 0, -3, 1, 17, 36, -2, 4, 56, -3, -1, -1
};

const int8_t bpf3[BUFFERLENGTH] = {
32, 3, -1, 7, -26, -2, -2, 18, -7, 1, 2, 193, 4, 1, -1, 10, -1,
-1, -24, -1, -1, 2, 64, -2, 1, 1, 33, -1, -1, 1, -10, -1, -3
};

const int8_t bpf4[BUFFERLENGTH] = {
31, -1, -1, 7, 1, 1, 1, 1, 12, 1, 3, -58, -1, -1, 8, 28, -2, 1,
18, -17, 1, -3, 0, -1, -1, -4, -1, 4, -2, -36, 23, 1, -1
};

const int8_t bpf5[BUFFERLENGTH] = {
28, -6, -1, 1, 81, 3, 1, -10, -18, 1, 2, -40, -7, -1, -1, -75, 3,
-1, -12, -36, 2, -4, -56, 3, -1, 1, -44, 3, -1, 0, -1, 2, 3
};

// BAND STOP FILTER
const int8_t bsf1[BUFFERLENGTH] = {
24, -10, -1, -4, 129, -4, -1, 10, 24, 2, 2, -18, -7, 1, -5, 97, -3,
1, 7, -33, -1, -1, -1, 10, 1, 3, 191, -2, 1, 14, -43, -3, -3
};

const int8_t bsf2[BUFFERLENGTH] = {
18, -10, -1, -3, 81, 1, -1, -6, -28, 2, 1, -1, 5, -1, -1, -75, -1,
-1, -3, 1, -4, 2, 36, -23, -1, 1, -44, -1, -1, 1, 40, 3, 2
};

const int8_t bsf3[BUFFERLENGTH] = {
12, 1, 1, 1, 1, 7, -1, -1, 31, 3, 1, 10, 18, -1, 3, 28, 6, -1, -1,
44, -3, 1, 1, 1, -2, -3, -1, 3, -1, -1, 24, -1, 1
};

const int8_t bsf4[BUFFERLENGTH] = {
7, 18, 2, 2, -26, -7, -1, 3, 225, 2, 1, 10, 10, -1, -1, 10, -10, 1,
2, 64, 2, -1, -14, 43, 3, 3, 33, -10, 1, 1, 193, -3, -1
};

const int8_t bsf5[BUFFERLENGTH] = {
3, 40, 1, 1, -1, -5, 1, -3, 31, -1, -1, 6, -28, 3, -1, -18, 10, -1,
-3, 44, -1, -1, -1, -40, -3, -2, 36, -23, -1, -5, 24, -1, -1
};

#endif