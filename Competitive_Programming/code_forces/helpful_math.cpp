

#include <iostream>
#include <string>

using namespace std;

int main(){

    string str1;
    getline(cin,str1);

  int one = 0, two = 0, three = 0;

for(int c = 0; str1[c] != '\0'; c += 2){

    if(str1[c] == '1'){
        one++;
    }
    else if(str1[c] == '2'){
        two++;
    }
    else if(str1[c] == '3'){
        three++;
    }
}

string str2;

for(int i = 0; i < one; i++){
    str2 += "1+";
}
for(int i = 0; i < two; i++){
    str2 += "2+";
}
for(int i = 0; i < three; i++){
    str2 += "3+";
}

if(!str2.empty()){
    str2.pop_back();
}

cout << str2;

}