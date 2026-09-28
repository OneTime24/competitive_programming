

// #include <iostream>

// using namespace std;


// int main(){

//     int n,k;
//     cin>>n>>k;

//     int arr1[n];

//     for(int i=0;i<n;i++){
//         arr1[i]=i+1;
//     }

//     int arr2[n];


//     if(n%2==0){

//         int pos=0;
//         for(int i=0;i<n;i++){
//             if(arr1[i]%2!=0){
//                 arr2[pos++]=arr1[i];
//                 continue;
//             }
//         }

//         for(int j=0;j<n;j++){
//             if(arr1[j]%2==0){
//                 arr2[pos++]=arr1[j];
//                 continue;
//             }
//         }
//     }else{

//         int pos=0;
//         for(int i=0;i<n;i++){
//             if(arr1[i]%2!=0){
//                 arr2[pos++]=arr1[i];
//                 continue;
//             }
//         }

//         for(int j=0;j<n;j++){
//             if(arr1[j]%2==0){
//                 arr2[pos++]=arr1[j];
//                 continue;
//             }
//         }

//     }

//     cout<<arr2[k-1]<<endl;
// }


#include <iostream>
using namespace std;

int main(){

    long long n,k;
    cin>>n>>k;

    long long odd=(n+1)/2;

    if(k<=odd){
        cout<<(2*k)-1<<endl;
    }else{
        cout<<2*(k-odd)<<endl;
    }

    return 0;
}