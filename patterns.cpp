#include <iostream>
using namespace std;

// square pattern
void patt1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* " ;
        }
        cout << '\n';
    }
}
//  trinangle patter
void patt2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* " ;
        }
        cout << '\n';
    }
}
//  trinangle (number) patter1
void patt3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << j+1  ;
        }
        cout << endl;
    }
}
//  trinangle (number) patter2
void patt4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i ;
        }
        cout << endl;
    }
}
//  inverted trinangle pattern
void patt5(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << "*" ;
        }
        cout << endl;
    }
}
//  inverted trinangle pattern(number)
void patt6(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << i ;
        }
        cout << endl;
    }
}
//  pyramid pattern
void patt7(int n){
    for(int i=0;i<n;i++){
        // for spaces
        for(int j=1;j>=n-i-1;j--){
            cout << " ";
        }
        for(int j=0;j<=i;j--){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    // square pattern
    int n;
    cin >> n;
    patt7(n);
}