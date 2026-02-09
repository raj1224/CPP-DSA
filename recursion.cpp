#include <iostream>
using namespace std;
int cnt=0;

// void print(){
//     if(cnt==3) return;
//     cout << cnt <<endl;
//     cnt++;
//     print();
// }

// Print name n times using recursion
// void name(int i,int n){
//     if(i>n) return;
//     cout<< "Raj";
//     name(i+1,n);
//     // tc and sc=>O(N)
// }

// Print Linearly from 1 to N
// void printLinear(int i, int n){
//     if(i>n) return;
//     cout<< i;
//     printLinear(i+1,n);
//     // tc and sc=>O(N)
// }

// Print Linearly from 1 to N (BACKTRACKING)
// you cannot use f(i+1,n)
// void printLinear(int i, int n){
//     if(i<1) return;
//     printLinear(i-1,n);
//     cout<< i;
//     // tc and sc=>O(N)
// }
// Print Linearly from N to 1
// void printLinearR(int i, int n){
//     if(i<1) return;
//     cout<< i;
//     printLinearR(i-1,n);
//     // tc and sc=>O(N)
// }
// Print Linearly from N to 1 (USING BACKTRACKING)
// cannot use this printLinearR(i-1,n);
// void printLinearR(int i, int n){
// //    Homework
//     // tc and sc=>O(N)
// }

// ------------------------------------------------
// 3. Sum of first N numbers
// A. Parameterized
// f(i,sum){
//     if(i<1){
//         print (sum)
//         return;
//     }
//     f(i-1,sum+i);
// }
// main(){
//     input(n);
//     f(n,0)
// }

// B. Functional
// f(n){
//     if(n==0) return 0;
//     return n+f(n-1);
// }
// main(){
//     input(n)
//     print(f(n));
// }

// code:-
// int sum(int n){
//     if(n==0) return 0;
//     return n + sum(n-1);
// }

// // Factorial of N
// int fact(int n){
//     if(n==0) return 1;
//     return n * sum(n-1);
//     // tc and sc -> O(N)
    
// }
// ------------------------------------------------


// 4. Reverse an array

// l=first element
// r=last element
// n=last index 

// using 2 pointer
// f(l,r){
//     if(l>=r) return ;
//     swap(a[l],a[r]);
//     f(l+1,r-1);
// }
// main(){
//     arr;
//     f(0,n-1);
// }

// using 1 pointer
// f(i){
//     if(i>=n/2) return;
//     swap(a[i],a[n-i-1]);
//     f(i+1);
// }
// main(){
//     arr;
//     f(0);
// }

// code
// void f(int i,int arr[],int n){
//     if(i>=n/2) return;
//     swap(arr[i],arr[n-i-1]);
//     f(i+1,arr,n);
// }

// Palindrome:-a string on reversal reads the same.
// f(i){
//     if(i>=n/2) return true;
//     if(s[i]!=s[n-i-1]) return false;
//     return f(i+1);
// }
// main(){
//     print(f(0))
// }

// code:- tc and sc :-O(n/2)
// bool f(int i,string &s){
//      if(i>=s.size()/2) return true;
//     if(s[i]!=s[s.size()-i-1]) return false;
//     return f(i+1,s);
// }
// ------------------------------------------------
// 5. Multiple Recurson Calls

// Nth Fibonacci series number?
// f(n){
//     if(n<=1) return n;
//     last = f(n-1);
//     s_last=f(n-2)
//     return last +s_last;
// }
// main(){
//     n 
//     print(f(4))
// }

// code :- tc or sc->O(2^n) exponential nature 
int f(int n){
    if(n<=1) return n;
    int last = f(n-1);
    int slast= f(n-2);
    return last + slast;
}



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdin);
    // #endif

    // print();
    // name(1,4);
    // printLinear(n,n);
    // printLinear(4,4);
    // input(n)

    // int n=3;
    // cout << sum(n);

    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i=0;i<n;i++) cin>>arr[i];
    // f(0,arr,n);
    // for(int i=0;i<n;i++) cout << arr[i] <<" ";

    // string s="madam";
    // cout << f(0,s);

    cout << f(4);
    return 0;
}