#include <stdint.h>
#define BUFFERLENGTH 33

#ifndef FILTERCOEFF
#define FLTERCOEFF

// ALL PASS FILTER
const int8_t apf0[BUFFERLENGTH] = {
255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

// LOW PASS FILTER
const int8_t lpf1[BUFFERLENGTH] = {
-1,-1,-1,-1,-1,-1,0,2 ,4  ,6  ,10 ,14 ,17 ,21 ,24 ,26 ,
26 ,26 ,24 ,21 ,17 ,14 ,10 ,6  ,4  ,2 ,0,-1,-1,-1,-1,-1,-1
};

const int8_t lpf2[BUFFERLENGTH] = {
-1,0 ,1 ,1 ,2 ,2 ,0,-3,-6 ,-7 ,-6 ,0  ,11 ,24 ,38 ,48 ,
52 ,48 ,38 ,24 ,11 ,0  ,-6 ,-7 ,-6 ,-3,0,2 ,2 ,1 ,1 ,0 ,-1
};

const int8_t lpf3[BUFFERLENGTH] = {
1 ,1 ,1 ,-1,-2,-2,0,4 ,6  ,3  ,-6 ,-13,-11,8  ,38 ,66 ,
77 ,66 ,38 ,8  ,-11,-13,-6 ,3  ,6  ,4 ,0,-2,-2,-1,1 ,1 ,1 
};

const int8_t lpf4[BUFFERLENGTH] = {
1 ,0 ,-1,-1,1 ,3 ,0,-4,-4 ,5  ,10 ,0  ,-17,-15,24 ,77 ,
103,77 ,24 ,-15,-17,0  ,10 ,5  ,-4 ,-4,0,3 ,1 ,-1,-1,0 ,1 
};

const int8_t lpf5[BUFFERLENGTH] = {
0 ,-1,0 ,1 ,0 ,-3,0,5 ,0  ,-8 ,0  ,13 ,0  ,-26,0  ,81 ,
129,81 ,0  ,-26,0  ,13 ,0  ,-8 ,0  ,5 ,0,-3,0 ,1 ,0 ,-1,0 
};

// HIGH PASS FILTER
const int8_t hpf1[BUFFERLENGTH] = {
1 ,1 ,1 ,1 ,1 ,1 ,0,-2,-4 ,-6 ,-10,-13,-17,-21,-24,-25,
231,-25,-24,-21,-17,-13,-10,-6 ,-4 ,-2,0,1 ,1 ,1 ,1 ,1 ,1 
};

const int8_t hpf2[BUFFERLENGTH] = {
1 ,0 ,-1,-1,-2,-2,0,3 ,6  ,7  ,6  ,0  ,-11,-24,-38,-48,
205,-48,-38,-24,-11,0  ,6  ,7  ,6  ,3 ,0,-2,-2,-1,-1,0 ,1 
};

const int8_t hpf3[BUFFERLENGTH] = {
-1,-1,-1,1 ,2 ,2 ,0,-4,-6 ,-3 ,6  ,13 ,11 ,-8 ,-38,-66,
180,-66,-38,-8 ,11 ,13 ,6  ,-3 ,-6 ,-4,0,2 ,2 ,1 ,-1,-1,-1
};

const int8_t hpf4[BUFFERLENGTH] = {
-1,0 ,1 ,1 ,-1,-3,0,4 ,4  ,-5 ,-10,0  ,17 ,15 ,-24,-77,
154,-77,-24,15 ,17 ,0  ,-10,-5 ,4  ,4 ,0,-3,-1,1 ,1 ,0 ,-1
};

const int8_t hpf5[BUFFERLENGTH] = {
0 ,1 ,0 ,-1,0 ,3 ,0,-5,0  ,8  ,0  ,-13,0  ,26 ,0  ,-81,
129,-81,0  ,26 ,0  ,-13,0  ,8  ,0  ,-5,0,3 ,0 ,-1,0 ,1 ,0 
};

// BAND PASS FILTER
const int8_t bpf1[BUFFERLENGTH] = {
1 ,1 ,2 ,3 ,4 ,3 ,0,-5,-12,-18,-21,-18,-9 ,5  ,20 ,31 ,
35 ,31 ,20 ,5  ,-9 ,-18,-21,-18,-12,-5,0,3 ,4 ,3 ,2 ,1 ,1 
};

const int8_t bpf2[BUFFERLENGTH] = {
1 ,1 ,2 ,1 ,-1,-2,0,3 ,3  ,-4 ,-16,-27,-28,-13,15 ,41 ,
52 ,41 ,15 ,-13,-28,-27,-16,-4 ,3  ,3 ,0,-2,-1,1 ,2 ,1 ,1 
};

const int8_t bpf3[BUFFERLENGTH] = {
1 ,0 ,-2,-2,-1,1 ,0,-2,3  ,12 ,16 ,0  ,-28,-39,-15,30 ,
52 ,30 ,-15,-39,-28,0  ,16 ,12 ,3  ,-2,0,1 ,-1,-2,-2,0 ,1 
};

const int8_t bpf4[BUFFERLENGTH] = {
-1,-1,-1,2 ,2 ,-1,0,1 ,-6 ,-10,6  ,27 ,11 ,-34,-38,16 ,
52 ,16 ,-38,-34,11 ,27 ,6  ,-10,-6 ,1 ,0,-1,2 ,2 ,-1,-1,-1
};

const int8_t bpf5[BUFFERLENGTH] = {
-1,-1,1 ,3 ,-2,-6,0,11,5  ,-16,-13,18 ,23 ,-15,-32,6  ,
35 ,6  ,-32,-15,23 ,18 ,-13,-16,5  ,11,0,-6,-2,3 ,1 ,-1,-1
};

// BAND STOP FILTER
const int8_t bsf1[BUFFERLENGTH] = {
-1,-1,-2,-2,-3,-2,0,4 ,9  ,14 ,16 ,14 ,7  ,-4 ,-15,-23,
233,-23,-15,-4 ,7  ,14 ,16 ,14 ,9  ,4 ,0,-2,-3,-2,-2,-1,-1
};

const int8_t bsf2[BUFFERLENGTH] = {
-1,-1,-2,-1,1 ,2 ,0,-3,-3 ,4  ,16 ,27 ,28 ,13 ,-15,-41,
208,-41,-15,13 ,28 ,27 ,16 ,4  ,-3 ,-3,0,2 ,1 ,-1,-2,-1,-1
};

const int8_t bsf3[BUFFERLENGTH] = {
-1,0 ,2 ,2 ,1 ,-1,0,2 ,-2 ,-12,-15,0  ,28 ,39 ,15 ,-30,
205,-30,15 ,39 ,28 ,0  ,-15,-12,-2 ,2 ,0,-1,1 ,2 ,2 ,0 ,-1
};

const int8_t bsf4[BUFFERLENGTH] = {
1 ,1 ,1 ,-2,-2,1 ,0,-1,6  ,10 ,-6 ,-26,-11,33 ,38 ,-16,
204,-16,38 ,33 ,-11,-26,-6 ,10 ,6  ,-1,0,1 ,-2,-2,1 ,1 ,1 
};

const int8_t bsf5[BUFFERLENGTH] = {
1 ,1 ,-1,-2,1 ,5 ,0,-8,-4 ,12 ,10 ,-13,-17,11 ,24 ,-4 ,
230,-4 ,24 ,11 ,-17,-13,10 ,12 ,-4 ,-8,0,5 ,1 ,-2,-1,1 ,1 
};

#endif