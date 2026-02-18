#include <iostream>
using namespace std;

// how many time numbers comes in an array
// T.C and S.C=> O(Q*N)
// int f(num,arr){
//     cnt=0;
//     for(i=0;i<n;i++){
//         if(arr[i]==num){
//             cnt=cnt+1;
//         }
//     }
//     return cnt;
// }

// Hashing:- prestoring / fetching.

// if declare array globaly than size of array increases.





int main(){

    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // // precompute
    // int hash[13]={0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]+=1;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>> number;
    //     // fetch
    //     cout<<hash[number]<<endl;
    // }

    // string
    string s;
    cin>>s;
    // pre compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        // fetch
        cout << hash[c-'a']<<endl;
    }

    // using map
     int n;
    cin>>n;
    int arr[n];
    map<int,int> mpp;

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    // precompute
    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }
    for(auto it:mpp){
        cout <<it.first <<"->" << it.second <<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>> number;
        // fetch
        cout<<mpp[number]<<endl;
    }
    return 0;
}