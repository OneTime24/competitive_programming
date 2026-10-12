


// #include <iostream>
// using namespace std;


// int main(){

//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         long long x,y,k;
//         cin>>x>>y>>k;

//         long long x_j=(x+k-1)/k;
//         long long y_j=(y+k-1)/k;

//         long long ans=max(2*x_j-1,2*y_j);

//         cout<<ans<<endl;
//     }
// }



#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        long long x,y,k;
        cin>>x>>y>>k;

        long long x1=0,y1=0;
        int countx=0 , county=0;

        while(x1<x){
            x1+=k;
            countx++;
        }

        // if(x%k!=0 && y%k!=0){
            
        //     countx++;
        // }
        
        while(y1<y){
            y1+=k;
            county++;
        }
        // if(y%k!=0 && x%k!=0){
            
        //     county++;
        // }
        int sum=0;
        if(countx>county){
            sum=(2*countx)-1;
        }
        else
        {
            sum=(2*county);
        }
       cout<<sum<<" "<<endl;
    }
    return 0;
}