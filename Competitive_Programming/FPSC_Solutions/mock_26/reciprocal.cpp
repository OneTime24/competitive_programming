

#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        double fp;
        cin>>fp;

        if(isinf(fp)){
            cout<<0;
        } if(isnan(fp)){
            cout<<"NaN";
        }else{
            cout<<1/fp;
        }
    }
}