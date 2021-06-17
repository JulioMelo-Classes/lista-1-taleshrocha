#include "function.h"

std::pair<int,int> min_max( int V[], std::size_t n )
{
    int min, max; min = max = 0;
    if(n == 0) return {-1, -1};
    for(int i = 0; i < n; ++i){
       if(V[i] < V[min]) min = i;
       else if(V[i] >= V[max]) max = i;
    }
    return {min, max};
}
