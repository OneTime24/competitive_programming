#include <iostream>
#include <string>

using namespace std;


int main(){
    int n;
    cin>>n;
   
    while(n!=0){

        int x;
        cin>>x;
        int lt=0;
        int rt=x-1;

        while(rt-lt>1){
            int mid=(lt+rt)/2;
            cout<<"READ "<<mid<<endl;

            string ans;
            cin>>ans;

            if(ans=="true"){
                // rt=mid;
                lt=mid;
            }else{
                rt=mid;

            }
        }
        cout<<"OUTPUT "<< lt<<endl;
        n--;
    }
    return 0;
}