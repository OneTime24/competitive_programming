#include<iostream>
using namespace std;

int main(){
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        if(n%2!=0){
            cout<<"YES"<<endl;
            break ;
        }
        if(n==2){
            cout<<"NO"<<endl;
            break ;
        }
        for(int i=3;i<n-1;i+=2){
            if(n%i==0){
                cout<<"YES"<<endl;
                return 0;
            }
        }
   }
    cout<<"NO"<<endl;
    return 0;
}