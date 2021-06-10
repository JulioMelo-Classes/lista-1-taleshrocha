#include <iostream>
#include <iomanip>
using namespace std;

float porcent(float gap, float total){
    float porcent = (float) (gap/total)*100;
    return porcent;
}

int main(void)
{
    int x;
    int gap[5] = {};
    while( cin >> std::ws >> x){
        if(x >= 0 && x < 25) gap[0]++;
        else if(x >= 25 && x < 50) gap[1]++;
        else if(x >= 50 && x < 75) gap[2]++;
        else if(x >= 75 && x < 100) gap[3]++;
        else gap[4]++;
    }
    int total = gap[0] + gap[1]+ gap[2] + gap[3] + gap[4];

    for(int i = 0; i < 5; ++i){
        cout<<setprecision(4)<<porcent(gap[i], total)<<endl;
    }
    
    return 0;
}
