#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

/*
ok
*/
int main(void)
{
    int n;
    int count = 0;
    for(int i = 0; i < 5; ++i){
        cin>>n;
        if(n < 0) count++;
    }
    cout<<count;

    return 0;
}
