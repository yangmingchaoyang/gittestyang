/*
判断一个32位正数是不是2的幂、4的幂
*/
#include <iostream>
//(n & (n - 1)) 是一个位运算操作，
//它用来检查一个整数是否只有一个位是置位（二进制中只有一个1，其余位都是0）。
bool is2Power(int n){
    return (n&(n-1))==0;
}

bool is4Power(int n){//01010101010101010101010101010101
    return (n&(n-1))==0&&(n&0x55555555)!=0;
}