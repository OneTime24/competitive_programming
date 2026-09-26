

#include <iostream>
#include <string>
using namespace std;


int main(){

    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string wd;
        getline(cin,wd);
        int ln=wd.size();
        
        string nwd="";
        nwd+=wd[0];
        nwd+=to_string(ln-2);
        nwd+=wd[ln-1];
        cout<<nwd<<endl;
    }
}