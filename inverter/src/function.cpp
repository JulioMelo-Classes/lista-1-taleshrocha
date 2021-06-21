#include <iostream>
#include <array>
#include <iterator>
using std::iter_swap;

template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    auto first = arr.begin();
    auto last = arr.end()-1;
    if(!(arr.size()%2)){
        //std::cout<<"Batata"<<std::endl;
        for(int i = 0; i < arr.size()/2; ++i){
            std::iter_swap(first++, last--);
        }
    }
    else{
        while(first != last and first != last-1 and first != 0)
            std::iter_swap(first++, last--);
    }
}
