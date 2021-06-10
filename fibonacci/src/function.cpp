#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n ){
  vector<unsigned int> fib;
  for(int i = 0; i < n; i++){
    if (n == 1) return fib;
    else if(i <= 1) fib.push_back(1);
    else if(fib[i-1] + fib[i-2] < n){
        fib.push_back(fib[i-1] + fib[i-2]);
    }
    else return fib;
  }
  return fib;
}
