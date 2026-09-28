

#include <iostream>
using namespace std;

int main(){
    string str1;
    getline(cin,str1);

    char ch=str1[0];
    if(ch >='a' && ch<='z'){
        ch-=32;
    }
    
    str1[0]=ch;
    cout<<str1<<endl;
}