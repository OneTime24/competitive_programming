
#include <iostream>
using namespace std;


int main(){


    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        int tmp=0;
        cin>>tmp;
        arr[i]=tmp;
    }

    int cnt=1;
    int rec=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            cnt++;
        }else{
            cnt=1;
        }

        if(cnt>rec){
            rec=cnt;
        }
    }

    cout<<rec;
}