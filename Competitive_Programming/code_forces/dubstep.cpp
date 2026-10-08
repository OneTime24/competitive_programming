

#include <iostream>
#include <string>
using namespace std;


int main(){

    string str1;
    getline(cin, str1);

    for(int i=0;i<str1.size();i++){

        if(str1.substr(i,3)=="WUB"){
            str1.replace(i,3," ");
        }
    }
    cout<<str1<<endl;
}