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

int add(int a, int b) {
	return a+b;
}

// Kunal : Fibonacci
void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci series: ";
    for(int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}


// Aditya : int main
int main() {
    int choice, n;

    while(true) {
        cout << "\n===== MATH TOOLKIT =====\n";
        cout << "1. Factorial\n";
        cout << "2. Prime Check\n";
        cout << "3. Fibonacci\n";
        cout << "4. Addition\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 5) break;

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
                
            case 4:
            	int n2;
            	cout << "Enter second number: ";
            	cin >> n2;
            	cout << "Addition is " << add(n, n2) << endl;

            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}
