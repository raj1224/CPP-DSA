#include <iostream>
using namespace std;

// log(n) -> ans+1 -> int part is the answer
// eg-> n=3456
// log10(3456) = 3.538... -> int part is 3
// ans = 3+1 = 4 digits
// int countDigits(int n) {
//     int cnt = 0;
//     while (n > 0) {
//         cnt++;
//         n = n / 10;
//         // dividing by 10 thats why tc-> O(log10(n)) 
//         // if we divide by 2 then tc-> O(log2(n))
//     }
//     return cnt;
// }
// // tc=O(log10 (n) )
// int countDigits2(int n) {
//     int cnt=(int)(log10(n))+1;
//     return cnt;
// }

// REVERSE NUMBER
// eg-> 3456 -> 6543
// int reverseNumber(int n) {
//     int reversedNum = 0;
//     while (n > 0) {
//         int lastDigit = n % 10;
//         reversedNum = reversedNum * 10 + lastDigit;
//         n = n / 10;
//     }
//     return reversedNum;
// }

// CHECK PALINDROME
int reverseNumber(int n) {
    int reversedNum = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        n = n / 10;
    }
    if(reversedNum==n){
        cout<<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not a Palindrome Number"<<endl;
    }
    return reversedNum;
}

// ARMSTRONG NUMBER
// eg-> 153 -> 1^3 + 5^3 + 3^3 = 153
int armstrongNumber(int n) {
    int originalNum = n;
    int sum = 0;
    int digits = (int)(log10(n)) + 1; // Count of digits

    while (n > 0) {
        int lastDigit = n % 10;
        sum += pow(lastDigit, digits);
        n = n / 10;
    }

    if (sum == originalNum) {
        cout << originalNum << " is an Armstrong number." << endl;
    } else {
        cout << originalNum << " is not an Armstrong number." << endl;
    }
    return sum;
}

// PRINT ALL DIVISORS
// eg-> n=12 -> 1,2,3,4,6,12
// void printDivisors(int n) {
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// or  

void printDivisors(int n) {
    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++) {
        // or  you can write sqrt-> i*i<=n
        if (n % i == 0) {
            ls.push_back(i);
            if (i != n / i) {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls) {
        cout << it << " ";
    }
}

//  PRIME NUMBER
// eg-> n=7 -> prime number
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {        
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;   
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // int result = countDigits2(n);
    int result = reverseNumber(n);
    cout << "Reversed number: " << result << endl;

    return 0;
}
