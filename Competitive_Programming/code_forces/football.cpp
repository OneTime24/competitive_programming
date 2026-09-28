

#include <iostream>
#include <string>
using namespace std;


int main(){

    string str1;
    
    getline(cin,str1);
    int cnt=1;

    for(int i=1;i<str1.size();i++){
        if(str1[i]==str1[i-1]){
            cnt++;
        }else{
            cnt=1;
        }

        if(cnt==7){
            cout<<"YES"<<endl;
            return 0;
        }
    }

        cout<<"NO"<<endl;

    return 0;
}