
#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int n2;
        cin>>n2;
        int arr[n2];
        for(int j=0;j<n2;j++){
            int val;
            cin>>val;
            arr[j]=val;
        }
         bool found = true;

        for(int d=1; d<n2; d++){

            bool exists = false;

            for(int a=0; a<n2-1; a++){

                int tmp = abs(arr[a] - arr[a+1]);

                if(tmp == d){
                    exists = true;
                    break;
                }
            }
            if(!exists){
                found = false;
                break;
            }
        }
        if(found){
            cout<<"Jolly "<<endl;
        }else{
            cout<<"Not Jolly "<<endl;
        }
    }
}