//  Decimal to Hexadecimal:- 

// 1. givemn  number "x" value in decimal
// 2.divide x by 16 and add the remainder to  hexadecimal
// 3.repeat it until x != 0
// 4.read it in reverse

// eg:- 
// 123 = 123/16 7/16  0
//     =   11    7
//     =      0x7B
//  23,54 ,678,700,345,78

// 1.
// 23 = 23/16  1/16
//    =   7     1
//    =    0x17

// 2.
// 54 = 54/16  3/16
//    =   6     3
//    =    0x36

// 3.
// 678 = 678/16  42/16  2/16
//     =   6       10     0
//     =       0x0A6

// 4.
// 700 = 700/16   43/16   2/16
//     =  12        11      0
//     =       0x0BC

// 5.
// 345 = 345/16  21/16  1/16
//     =   9       5      0
//     =   0x059

// 6.
// 78 = 78/16   4/16  
//    =   14      4
//    =     0x4E
