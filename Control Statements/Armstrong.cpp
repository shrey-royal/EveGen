#include<iostream>
using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int getDigits(int num) {
    int count = 1;
    while ((num /= 10) > 0) {
        count++;
    }
    return count;
}

bool isArmstrong(int num) {
    int sum = 0, rem, temp = num, n = getDigits(num);

    while (temp > 0) {
        rem = temp % 10;
        sum += power(rem, n);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num, arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (isArmstrong(arr[i])) {
            cout << arr[i] << " is an armstrong number" << endl;
        } else {
            cout << arr[i] << " is not an armstrong number" << endl;
        }
    }

    return 0;
}
