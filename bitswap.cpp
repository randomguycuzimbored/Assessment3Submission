#include <iostream>

//
unsigned int* swapBits(unsigned int* value, unsigned int i, unsigned int j, int& popcount){
//kicking back early unsets
if (value==nullptr || i > 31 || j > 31 )
    return nullptr;

//swapping values
if(((*value & (1u << i))!=0)!=((*value & (1u << j))!=0)){
    *value ^= (1u << i);
    *value ^= (1u << j);
}
//count number of 1
popcount=0;
while (*value > 0){
    *value &= (value-1);
    popcount++;
}


return value;
}
