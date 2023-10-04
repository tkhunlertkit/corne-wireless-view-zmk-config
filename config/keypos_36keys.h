/*                              36 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │  1   2   3   4   5 │  6   7   8   9  10 │ │ LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 │
  │ 13  14  15  16  17 │ 18  19  20  21  22 │ │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
  │ 25  26  27  28  29 │ 30  31  32  33  34 │ │ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
  ╰───────╮ 37  38  39 │ 40  41  42 ╭───────╯ ╰───────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────╯
          ╰────────────┴────────────╯                 ╰─────────────┴─────────────╯             */

#pragma once

#define LT0  5  // left-top row
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1

#define RT0  6  // right-top row
#define RT1  7
#define RT2  8
#define RT3  9
#define RT4  10

#define LM0 17  // left-middle row
#define LM1 16
#define LM2 15
#define LM3 14
#define LM4 13

#define RM0 18  // right-middle row
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22

#define LB0 29  // left-bottom row
#define LB1 28
#define LB2 27
#define LB3 26
#define LB4 25

#define RB0 30  // right-bottom row
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34

#define LH0 38  // left thumb keys
#define LH1 37
#define LH2 36

#define RH0 39  // right thumb keys
#define RH1 40
#define RH2 41
