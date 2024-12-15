#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Prime numbers up to " << N << " are: ";

    for (int num = 2; num <= N; num++) {
        bool isPrime = true; // Assume the current number is prime

        // Check divisors from 2 to num-1
        for (int div = 2; div < num; div++) {
            if (num % div == 0) { 
                isPrime = false; // Found a divisor, not prime
                break; // Exit the loop
            }
        }

        if (isPrime) { 
            cout << num << " "; // Print the prime number
        }
    }

    return 0;
}
