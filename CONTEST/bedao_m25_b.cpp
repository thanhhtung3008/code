#include <iostream>
#include <algorithm>

using namespace std;

// Function to calculate LCM of two numbers
long long lcm(long long a, long long b) {
    return (a * (b / __gcd(a, b)));
}

// Function to count number of divisors of n that are divisible by at least 2 out of 3 numbers a, b, c
int countSpecialDivisors(long long n, long long a, long long b, long long c) {
    long long ab = lcm(a, b);
    long long bc = lcm(b, c);
    long long ac = lcm(a, c);
    long long abc = lcm(ab, c);

    int count = (n/a) + (n/b) + (n/c) - (n/ab) - (n/ac) - (n/bc) + (n/abc);

    return count;
}

int main() {
    long long n = 100, a = 2, b = 3, c = 5;
    int result = countSpecialDivisors(n, a, b, c);
    cout << "Number of special divisors: " << result << endl;

    return 0;
}
