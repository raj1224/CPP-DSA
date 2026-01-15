// #include <iostream>
// // #include <bits/stdc++.h>
// // #include <string>
// // #include <math.h>


// // 0 demo code
// // using namespace std;

// // int main() {
// //     int x;
// //     cin >> x;
// //     cout << "hey " << x;
// // }

// // 1. BASICS
//     // use std:: or use using namespace std;

//     using namespace std;

// int main(){

// //    std::cout << "hello Raj!" <<"\n"; //or
// //    std::cout << "hello Raj!" << std::endl ;
// //    std::cout << "hello world" <<std::endl <<"hey pinky";

// //   2. INPUT
//     // int x, y;
//     // cin >>x >> y;
//     // cout <<"value of x:" << x << " and y:" << y;

// //    3. DATA TYPES
// // integer types
//     //   int x=5;
//     //   long x=15;
//     //   long long x=25;

// // floating point types
//         // float y=5.5;
//         // double y=15.55; 

//         // string and getline
//         // string s1;
//         // string s2;
//         // cin >> s1 >> s2;
//         // cout << s1 << " " << s2 << endl;

//         // getline
//         // string str;
//         // getline(cin, str);
//         // cout << str << endl;

//         // character 
//         // char ch;
//         // char ch='A';
//         // cin >> ch;
//         // cout << ch << endl;

//         // IF ELSE STATEMENTS
//         // Q;- ADULT OR NOT
//         // int age;
//         // cin >> age;
//         // if(age>=18){
//         //     cout << "You are an adult";

//         // }else{
//         //     cout << "you are not an adult";
//         // }
        
//         // Q2:- grade ABCDEF
//         // int marks;
//         // cin >> marks;
//         // if(marks<25){
//         //     cout << "F";
//         // }else if(marks<45 && marks>=25){
//         //     cout << "E";
//         //     if(marks<30){
//         //         cout << " and almost pass";
//         //     }
//         // }
//         // else if(marks<50 && marks>=45){
//         //     cout << "D";
//         // }else if(marks<60 && marks>=50){
//         //     cout << "C";
//         // }
//         // else if(marks<80 && marks>=60){
//         //     cout << "B";
//         // }else if(marks<101 && marks>=80){
//         //     cout << "A";
//         // }

//         // SWITCH CASE
//         // take tha day no and print the day
//         // int day;
//         // cin >> day;

//         // switch(day){
//         //     case 1:
//         //         cout << "Monday";
//         //         break;
//         //     case 2:
//         //         cout << "Tuesday";
//         //         break;
//         //     case 3:
//         //         cout << "Wednesday";
//         //         break;
//         //     case 4:
//         //         cout << "Thursday";
//         //         break;
//         //     case 5:
//         //         cout << "Friday";
//         //         break;
//         //     case 6:
//         //         cout << "Saturday";
//         //         break;
//         //     case 7:
//         //         cout << "Sunday";
//         //         break;
//         //     default:
//         //         cout << "Invalid day number";
//         // }

//         // ------------------------------------------

//         // ARRAYS
//         // int arr[5];
//         // input
//         // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//         // or
//         // for(int i=0; i<5; i++){
//         //     cin >> arr[i];
//         // }

//         // arr[3]+=12;
//         // arr[4]=35;

//         // output
//         // cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;
//         // or
//         // for(int i=0; i<5; i++){
//         //     cout << arr[i] << " ";
//         // }

//         // STRINGS
//         // string s="RAj";
//         // int len = s.size();
//         // s[len-1]='Z'; //not s[2]="Z";
//         // cout << s[len-1];


//         // 2D Array
//         // int arr2d[3][4];
//         // input
//         // for(int i=0; i<3; i++){
//         //     for(int j=0; j<4; j++){
//         //         cin >> arr2d[i][j];
//         //     }
//         // }
//         // output
//         // for(int i=0; i<3; i++){
//         //     for(int j=0; j<4; j++){
//         //         cout << arr2d[i][j] << " ";
//         //     }
//         //     cout << endl;
//         // }

//         // FOR LOOP
//         // cout << "Hello without for loop:" << endl;
//         // for(int i=0; i<5; i++){
//         //     cout << "hello with loop" << "\n";
//         // }

//         // reverse order
//         // int i;
//         // for( i=4; i>=0; i--){
//         //     cout << "hello in reverse order " << i << "\n";
//         // }
//         // cout << "now u can also use i here: " << i << endl;

//         // while LOOP
//         // int i=0;
//         // while(i<5){
//         //     cout << "hello while loop " << i << "\n";
//         //     i++;
//         // }

//         // DO WHILE LOOP
//         // int i=2;
//         // do{
//         //     cout << "hello do while loop " << i << "\n";
//         //     i++;
//         // }while(i<=1);
//         // cout << i << endl;

        


//    return 0;

// }

#include <iostream>
#include <math.h>
using namespace std;

// functions
// 1. void function
// void greet(){
//     cout << "Hello from greet function" << endl;
// }
// 2. function with parameters
// void greet(string name){
//     cout << "Hello " << name << endl;
// }
// 3. function with non parameters 
// // take 2 numbers and print its sum
// void sum(int n1, int n2){
//     cout << "Sum is: " << n1+n2 << endl;
// }
// 4. function with return type
// int add(int n1, int n2){
//     return n1+n2;
// }

// int maxx(int a, int b){
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }
// }

// pass by value
// void dosomething(int a){
//     cout << a << endl;
//     a++;
//     cout << a << endl;
//     a++;
//     cout << a << endl;
// }
// pass by reference
// void dosomething(int &a){
//     cout << a << endl;
//     a++;
//     cout << a << endl;
//     a++;
//     cout << a << endl;
// }
// arrays are passed by reference by default
void modify(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] += 10;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    // greet(); 
    // string name;
    // cin >> name;
    // greet(name);
    // int n1,n2;
    // cin >> n1 >> n2;
    // sum(n1, n2);
    // int res=add(n1, n2);
    // cout << "Addition is: " << res << endl;

    // int num1, num2;
    // cin >> num1 >> num2;
    // int maximum =maxx(num1, num2);
    // cout << "Maximum is: " << maximum << endl;

    // pass by value
    // copy is transferred to the function
    // int x=10;
    // dosomething(x);
    // cout << "value of x in main is: " << x << endl;

    // pass by reference
    // original variable is transferred to the function
    // int x;
    // cin >> x;
    // dosomething(x);
    // cout << "value of x in main is: " << x << endl;

    // arrays are passed by reference by default
    int n=5;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    modify(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
