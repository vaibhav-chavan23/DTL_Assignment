#include <iostream>
using namespace std;

// Vaibhav: Factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Arin : Prime check
bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

// Kunal : Fibonacci


//int main
