#include <iostream>
using namespace std;
int cnt=0;

void print(){
    if(cnt==3) return;
    cout << cnt <<endl;
    cnt++;
    print();
}

// Print name n times using recursion
void name(int i,int n){
    if(i>n) return;
    cout<< "Raj";
    name(i+1,n);
    // tc and sc=>O(N)
}

// Print Linearly from 1 to N
// void printLinear(int i, int n){
//     if(i>n) return;
//     cout<< i;
//     printLinear(i+1,n);
//     // tc and sc=>O(N)
// }

// Print Linearly from 1 to N
// you cannot use f(i+1,n)
void printLinear(int i, int n){
    if(i>n) return;
    cout<< i;
    printLinear(i+1,n);
    // tc and sc=>O(N)
}
// Print Linearly from N to 1
void printLinearR(int i, int n){
    if(i<n) return;
    cout<< i;
    printLinearR(i-1,n);
    // tc and sc=>O(N)
}


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdin);
    // #endif

    // print();
    // name(1,4);
    // printLinear(1,4);
    printLinearR(4,1);
    return 0;
}