
#include <string>
#include <cctype>
#include <iostream>
using namespace std;


int main(){

    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);

    for(char &c : str1){
    c=tolower(c);
    }

    for(char &c : str2){
    c=tolower(c);
    }


    int ln=str1.size();
    for(int ch=0;str1[ch]!='\0';ch++){

        if(str1[ch]<str2[ch]){
            cout<<-1<<endl;
            return 0;
        }else if(str1[ch]>str2[ch]){
            cout<<1<<endl;
            return 0;
        }
    
}
    cout<<0<<endl;
}