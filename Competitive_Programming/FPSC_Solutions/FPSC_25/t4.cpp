

#include <iostream>
#include <cstring>

using namespace std;


int main(){
    
    int t;
    cin>>t;

    cin.ignore();
    for(int i=0;i<t;i++){
        string wd;
        getline(cin,wd);
        int j=0;

        while(wd[j]!='\0'){

            for(int k=j+1;wd[k]!='\0';k++){
                if(wd[j]==wd[k]){
                    cout<<"False"<<endl;
                    break;
                }
            }
            j++;
        }
        cout<<"True"<<endl;

    }
}