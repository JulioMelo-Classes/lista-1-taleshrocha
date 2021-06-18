#include <iostream>
#include <algorithm>
#include "function.h"
using namespace std;

void fix(Ponto &IE, Ponto &SD){
    bool xGood = false;
    bool yGood = false;
    Ponto aux;
    if(SD.x > IE.x) xGood = true;
    if(SD.y > IE.y) yGood = true;
    if(!xGood){
        aux.x = IE.x;
        IE.x = SD.x;
        SD.x = aux.x;
    }
    if(!yGood){
        aux.y = IE.y;
        IE.y = SD.y;
        SD.y = aux.y;
    }
}

void prtres(int res){
    if(res == 0) cout<<"inside"<<endl;
    else if(res == 1) cout<<"border"<<endl;
    if(res == 2) cout<<"outside"<<endl;
}

int main(void)
{
    int x, y;
    int res = 99;
    int i = 0;
    //int x[3];
    //int y[3];
    Ponto P[3];
    while(cin >> ws >> x >> y){ //Reads a undetermined number of lines
        if(!(-1000 <= x and x <= 1000)) return 0;
        else if(!(-1000 <= y and y <= 1000)) return 0;
        //cout<<x<<y<<endl;
        P[i] = {x, y};
        if(i < 2) i++;
        else{
            i = 0;
            fix(P[0], P[1]);
            res = pt_in_rect(P[0], P[1], P[2]);
            //cout<<"RESULTADO: "<<res<<endl;
            //cout<<res<<endl;
            prtres(res);
        }
    }

    /*for(int i = 0; i < 3; ++i){
       cout<<i<<" "<<P[i].x<<P[i].y<<endl; 
    }*/

    return 0;
}
