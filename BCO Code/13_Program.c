#include <stdio.h>

int hello(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {
    int n = 10;
    printf("Number: %d\n", hello(n));
    return 0;
}


//Output: Number: 30

//Explanation
// This program prints sum of even number from 1 to 10