

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    while(cin>>s){

      
        int bal=0;


        for(int i=0;i<s.length();i++){

         int v=0,c=0;
           for(int j=i;j<s.length();j++){

            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                 v++;
            }else{
                c++;
                }
                if(v==c){
                    bal++;
                }
            }

           
    }
    cout<<bal<<endl;
}
}