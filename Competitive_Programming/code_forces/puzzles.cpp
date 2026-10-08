
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    
    int m,n;
    cin>>n>>m;

    vector<int> arr1(m);

    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }

    sort(arr1.begin(), arr1.end());

    int ans=arr1[n-1]-arr1[0];

    for(int i=0;i+n-1<m;i++){
        int def = arr1[i+n-1]-arr1[i];
        if(def< ans){
            ans = def;
        }
    }

    cout<<ans<<endl;
}
