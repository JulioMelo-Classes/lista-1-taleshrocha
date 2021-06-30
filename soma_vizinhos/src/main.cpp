#include <iostream>
using namespace std;
/*
ok
*/
int main(void)
{
    int m, n;
    int res, aux;
    int i = 0;
    while(cin >> ws >> m >> n){ //Reads a undetermined number of lines
        if(!(-10000 <= n and n <= 1000)) return 0;
        //cout<<m<<n<<endl;
        res = m; 
        if(n >= 0){
            for(int i = 1; i < n; ++i){
                m++;
                res += m;
            }
        }
        else if(n < 0){
            for(int i = -2; i >= n; --i){
                m--;
                res += m;
            }
        }
        cout<<res<<endl;
    }

    /*for(int i = 0; i < 3; ++i){
       cout<<i<<" "<<P[i].x<<P[i].y<<endl; 
    }*/

    return 0;
}
