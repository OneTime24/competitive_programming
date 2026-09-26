


#include <iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x,y,k;
        cin>>x>>y>>k;

        long long x_j=(x+k-1)/k;
        long long y_j=(y+k-1)/k;

        long long ans=max(2*x_j-1,2*y_j);

        cout<<ans<<endl;
    }
}