// Hexadecimal Digits  = it has 16 options for a digit 
//                     = 0 1 2 3 4 5 6 7 8 9 A B C D E F 
// A-10 , B=11, C=12 , D=13 , E =14 , F=15 

// 0X is the used to identify the hexadecimal


//  Converting hexadecimal to decimal;


// 1.
// 0X2A3 = (we don't count 0X here)  2*16*16 + 10*16 + 3*16^0 = 512+160+3
//                                   =  675

// 2.
// 0X10 = 1*16 + 0*1   [( 1 = 16^0)]\
//      =  16

// 3.
// 0x123 = 1*16*16 + 2*16 + 3*1 
//       =  256 + 32 + 3
//       =  291

// 4.
// 0x2F = 2*16 + 15 *1
//      = 32 +15 
//      =  47

//5.
// 0x000F = 0 + 0 + 0 + 15*1
//        = 15

// 6.
// 0xA2 = 10*16 + 2*1
//      = 160+2
//      =  162

// 7.
// 0xABCD = 10*16*16*16 + 11*16*16 + 12*16 + 13*1
//        = 43981
