

#include <iostream>
#include <vector>
using namespace std;


int main(){


    int t;
    cin>>t;


    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i=1;i<n;i++){

            cin>>arr[i];

            vector <int> digit;

            while(arr[i]>0){

                int dg=arr[i]%10;

                digit.push_back(dg);

                arr[i]/=10;

            }

            digit[i]=digit[i]*2;
            int sm=0;
            for(int i=0;i<digit.size();i++){
                sm+=digit[i];
            }
        }
    }
}