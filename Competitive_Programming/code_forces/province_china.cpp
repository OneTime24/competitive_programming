


#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    vector<string> cities={"an shun","zhi jin","da fang","shi qian","li ping","fu quan","an long","pu ding","si nan","zhen feng"};

    string a,b;

    cin>>a>>b;

    char ch=' ';
    a.push_back(ch);
    a.append(b);

    
    for(int i=0;i<cities.size();i++){
        if(a==cities[i]){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;

}