

#include <iostream>

using namespace std;

int main(){


    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int l=j+1;l<n;l++){
                if((arr[i]+arr[j]+arr[l])==k){
                    cout<<"True";
                    return 0;
                }
            }
        }
    }
    cout<<"False";
}




//optimized
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     sort(arr.begin(), arr.end());

//     for (int i = 0; i < n - 2; i++) {
//         int j = i + 1;
//         int l = n - 1;

//         while (j < l) {
//             long long sum = (long long)arr[i] + arr[j] + arr[l];

//             if (sum == k) {
//                 cout << "true";
//                 return 0;
//             }
//             else if (sum < k) {
//                 j++;
//             }
//             else {
//                 l--;
//             }
//         }
//     }

//     cout << "false";
//     return 0;
// }