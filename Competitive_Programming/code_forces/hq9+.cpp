

#include <iostream>
#include <string>
using namespace std;


int main(){

    string str1;

    getline(cin,str1);

    for(char ch: str1){
        if(ch=='H' || ch=='Q' || ch=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    
}