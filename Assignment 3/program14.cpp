//boston Number
#include <iostream>
using namespace std;

int digitSum(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

bool isPrime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;

    if (isPrime(n)) {
        cout << 0;
        return 0;
    }

    int sumDigits = digitSum(n);
    int factorDigitSum = 0;

    long long temp = n;

    for (long long i = 2; i * i <= temp; i++) {
        while (n % i == 0) {
            factorDigitSum += digitSum(i);
            n = n / i;
        }
    }

    if (n > 1) {
        factorDigitSum += digitSum(n);
    }

    if (sumDigits == factorDigitSum)
        cout << 1;
    else
        cout << 0;

    return 0;
}
