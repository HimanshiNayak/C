// BINARY TO DECIMAL CONVERSION :- 

//1.
//  11010 : 1*2*2*2*2 + 1*2*2*2 + 0*2*2 +1*2*1 + 0*1[(2^0)]

// weight = (base)^position


// 2.
// 0110 = 0*2*2*2 + 1*2*2 + 1*2*1 + 0*1[(2^0)]

// 3.
// 1111 = 1*2*2*2*2 + 1*2*2 + 1*2*1 + 1*1[(2^0)]

// 4.
// 1110110 = 1 *2*2*2*2*2*2 + 1*2*2*2*2*2 + 1*2*2*2*2 + 0*2*2*2 + 1*2*2 + 1*2*1 + 0 *1[(2^0)]


//DECIMAL TO BINARY CONVERSION :- 

// just divide the no. by 2 and the remainders we get , will give us the binary no. ..till the quotient becomes 1
// then starting from 1 move from bottom to top for the answer 

// 1.
// 261 = 261/2  131/2  65/2  32/2  16/2  8/2  4/2  2/2  1 
//     = 0       1      1      0     0    0    0    0
// ans =  100000110
// 261( Base-10) = 100000110(Base-2)

// 2.
// 98 = 98/2 49/2 24/2  12/2   6/2  3/2   1
//    = 0     1    0     0      0    1 
//  ans = 1100010
// 98(Base-10) = 1100010(Base-2)

// 3.
// 550 = 550/2  275/2  137/2  68/2  34/2  17/2  8/2  4/2  2/2  1
//     =   0      1      1     0      0    1     0    0    0    
//     = 1000100110
// 550(Base-10) = 1000100110(Base-2)

// 4.
// 195 = 195/2   97/2   48/2    24/2   12/2   6/2   3/2  1
//     =   1       1      0      0      0      0     1    
// ans =  11000011

// 5.
// 345 = 345/2  172/2  86/2  43/2  21/2  10/2  5/2  2/2  1 
//     =   1      0     0      1    1      0    1    0
// ans =  101011001
// 345(Base-10) = 101011001(Base-2)