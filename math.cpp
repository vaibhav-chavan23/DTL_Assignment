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


// Aditya : int main
int main() {
    int choice, n;

    while(true) {
        cout << "\n===== MATH TOOLKIT =====\n";
        cout << "1. Factorial\n";
        cout << "2. Prime Check\n";
        cout << "3. Fibonacci\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 4) break;

        cout << "Enter number: ";
        cin >> n;

        switch(choice) {
            case 1:
                cout << "Factorial = " << factorial(n) << endl;
                break;

            case 2:
                if(isPrime(n))
                    cout << "Prime Number\n";
                else
                    cout << "Not a Prime Number\n";
                break;

            case 3:
                fibonacci(n);
                break;

            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}
