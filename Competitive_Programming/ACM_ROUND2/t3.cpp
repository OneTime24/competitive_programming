#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                cnt+=s[i]-'a'+1;
            }
            if(s[i]>='A' && s[i]<='Z'){
                cnt+=s[i]-'A'+1;
            }
            if(s[i]>='0' && s[i]<='9'){
                cnt+=s[i]-'0';
            }
        }

        int hash=cnt%1000;

        int prm=0;
        for(int i=2;i<=hash;i++){
            bool prime=true;


            for(int j=2;j*j<=i;j++){

                if(i%j==0){
                    prime=false;
                    break;
                }
            }
            if(prime){
                prm++;
            }
        }
        cout<<hash<<" "<<prm<<endl;
    }
}