

#include <iostream>
using namespace std;


int main(){

    int k;
    cin>>k;

    for(int i=0;i<k;i++){
        int n;
        int cnt=0;
        cin>>n;
        int a=1;
        int b=2;
        for(int i=3;i<=n;i++){
            cnt=a+b;
            int tmp=b;
            a=b;
            b=cnt;
        }
        cout<<cnt<<endl;;
    }
}