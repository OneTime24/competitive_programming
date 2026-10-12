

#include <iostream>
#include <string>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        string s;
        getline(cin,s);

        int cnt=0;
        
        for(i=0;i<s.length();i++){
            if(s[i]=='1'){
                cnt++;
            }

        }
    }
    cout<<cnt<<endl;
}