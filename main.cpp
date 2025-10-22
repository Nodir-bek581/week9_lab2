#include <iostream>
using namespace std;


//Problem 1
/*
int power(int base, int exp) {
    if (exp == 0) return 1;
    else return base * power(base, exp - 1);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << power(x, y) << endl;
}
*/

//Problem 2
/*
int revNum(int num, int result = 0) {
    if (num == 0) return result;
    int lastDig = num % 10;
    result = result*10 + lastDig;
    return revNum(num/10, result);
}

int main() {
    int a;
    cin >> a;
    cout << revNum(a);
}
*/

//Problem 3 type_1
/*
int palindrome(int num, int result = 0) {
    if (num == 0) return result;
    int lastNum = num % 10;
    result = result * 10 + lastNum;
    return palindrome(num / 10, result);

}

int main() {
    int raqam;
    cin >> raqam;
    int palindromeRaqam = palindrome(raqam);
    if (palindromeRaqam == raqam) cout << "true" << endl;
    else cout << "false" << endl;
}
*/

//Problem 4
/*
bool primeCheck(int n, int k) {
    if (k*k > n) return true;
    if (n%k == 0) return false;
    return primeCheck(n, k+1);
}

bool primeNumber(int r) {
    if (r<=1) return "false";
    return primeCheck(r, 2);
}

int main() {
    int raqam;
    cin >> raqam;
    if (primeNumber(raqam)) cout << "true" << endl;
    else cout << "false" << endl;
}
*/

//Problem 5
/*
int evenDigitsCounter(int n) {
    if (n == 0) return 0;
    int lastDigit = n % 10;
    int remainedDigits = n / 10;
    if (lastDigit % 2 == 0) return 1+evenDigitsCounter(remainedDigits);
    else return evenDigitsCounter(remainedDigits);
}

int main() {
    int raqam;
    cin >> raqam;
    cout << evenDigitsCounter(raqam) << endl;
}
*/


//Problem 6
/*
int productOfDigits(int n) {
    if (n == 0) return 1;
    else return (n%10)*productOfDigits(n/10);
}

int main() {
    int raqam;
    cin >> raqam;
    cout << productOfDigits(raqam) << endl;
}
*/


