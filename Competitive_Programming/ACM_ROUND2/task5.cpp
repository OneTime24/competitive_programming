

#include <iostream>
#include <string>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        string map="map";
        string pie="pie";

        int cnt=0;
        for(int i=0;i<n-2;i++){
            
            if(s.substr(i,3)==map ||s.substr(i,3)==pie){
                cnt++;
                i+=2;
            }
        }   
        cout<<cnt<<endl;
    }
}