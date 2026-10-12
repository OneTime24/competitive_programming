

#include <iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    int cn_100=0;
    int cn_20=0;
    int cn_10=0;
    int cn_5=0;
    int cn_1=0;

    while(n!=0){

        if(n >= 100){
        cn_100++;
        n -= 100;
    }else 
    if(n >= 20){
        cn_20++;
        n -= 20;
    }else
     if(n >= 10){
        cn_10++;
        n -= 10;
    }else if(n >= 5){
        cn_5++;
        n -= 5;
    }else{
        cn_1++;
        n -= 1;
    }
    }

    int fin=cn_100+cn_20+cn_10+cn_5+cn_1;
    cout<<fin<<endl;
    return 0;
}