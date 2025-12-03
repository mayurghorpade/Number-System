
// How to Convert Decimal to Binary

// Decimal-to-binary conversion is done by repeatedly dividing the number by 2 and collecting the remainders. These remainders represent the binary digits (bits).

// Steps

// Divide the decimal number by 2.

// Record the remainder (it will always be 0 or 1).

// Update the number by taking the integer quotient.

// Repeat steps 1–3 until the quotient becomes 0.

// Read the remainders from bottom to top (reverse order).
// This gives the final binary number.

// Example: Convert 13 to Binary
// Step-by-step
// Operation	Quotient	Remainder
// 13 ÷ 2	6	1
// 6 ÷ 2	3	0
// 3 ÷ 2	1	1
// 1 ÷ 2	0	1

// Remainders bottom → top: 1101

// So,
// 13 (decimal) = 1101 (binary)


#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int rem = 0;
    int pw = 1;
    int ans = 0;

    while (number > 0) {
        rem = number % 2;
        number = number / 2;

        ans += (rem * pw);
        pw = pw * 10;
    }

    cout << ans;
    return 0;
}
