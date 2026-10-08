

#include <iostream>
#include <string>
using namespace std;

int main(){


    int n;
    cin>>n;

    cin.ignore();

    int max=0;
    string s,ans;

    getline(cin,s);

    for(int i=0;i<n-1;i++){

        int cnt=0;
        for(int j=0;j<n-1;j++){

            if(s[i]==s[j] && s[i+1]==s[j+1]){
                cnt++;
            }
        }

        if(cnt>max){
            max=cnt;
            ans=s.substr(i,2);
        }
    }

    cout<<ans<<endl;
}