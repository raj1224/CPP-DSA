#include <iostream>
// #include <bits/stdc++.h>
// #include <string>
// #include <math.h>


// 0 demo code
// using namespace std;

// int main() {
//     int x;
//     cin >> x;
//     cout << "hey " << x;
// }

// 1. BASICS
    // use std:: or use using namespace std;

    using namespace std;

int main(){

//    std::cout << "hello Raj!" <<"\n"; //or
//    std::cout << "hello Raj!" << std::endl ;
//    std::cout << "hello world" <<std::endl <<"hey pinky";

//   2. INPUT
    // int x, y;
    // cin >>x >> y;
    // cout <<"value of x:" << x << " and y:" << y;

//    3. DATA TYPES
// integer types
    //   int x=5;
    //   long x=15;
    //   long long x=25;

// floating point types
        // float y=5.5;
        // double y=15.55; 

        // string and getline
        // string s1;
        // string s2;
        // cin >> s1 >> s2;
        // cout << s1 << " " << s2 << endl;

        // getline
        // string str;
        // getline(cin, str);
        // cout << str << endl;

        // character 
        // char ch;
        // char ch='A';
        // cin >> ch;
        // cout << ch << endl;

        // IF ELSE STATEMENTS
        // Q;- ADULT OR NOT
        // int age;
        // cin >> age;
        // if(age>=18){
        //     cout << "You are an adult";

        // }else{
        //     cout << "you are not an adult";
        // }
        
        // Q2:- grade ABCDEF
        int marks;
        cin >> marks;
        if(marks<25){
            cout << "F";
        }else if(marks<45 && marks>=25){
            cout << "E";
            if(marks<30){
                cout << " and almost pass";
            }
        }
        else if(marks<50 && marks>=45){
            cout << "D";
        }else if(marks<60 && marks>=50){
            cout << "C";
        }
        else if(marks<80 && marks>=60){
            cout << "B";
        }else if(marks<101 && marks>=80){
            cout << "A";
        }

   return 0;

}