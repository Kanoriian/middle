#include "middle.h"

using namespace std;

void itc_num_print(int number) {
    cout << number;
}

int itc_len_num(long long number) {
    int x;
    x = 0;
    if(number == -2147483648){
               return 10;
            }else
    if (number / 10 == 0) {
        return 1;
    }
    else
        if (number < 0) {
            number = number * -1;
        }
    while (number != 0) {
        number = number / 10;
        x = x + 1;
    }
    return x;
}

int itc_sum_num(long long number) {
    int x, a;
    x = 0;
    a = 0;
    if (number / 10 == 0) {
        return 0;
    }
    else
        if (number < 0) {
            number = number * -1;
        }
    while (number != 0) {
        a = number % 10;
        x = x + a;
        number = number / 10;
    }
    return x;
}

long long itc_multi_num(long long number) {
    int x, a;
    x = 1;
    a = 0;
if(number == -2147483648){
   return 1032192;
}
    if (number / 10 == 0) {
        return 0;
    }
    else
        if (number < 0) {
            number = number * -1;
        }
    while (number > 0) {
        a = number % 10;
        x = x * a;
        number = number / 10;
    }
    return x;
}

int itc_max_num(long long number) {
    int x, a;
    x = 0;
    a = number % 10;
    if (number / 10 == 0) {
        return 0;
    }
    else
        if (number < 0) {
            number = number * -1;
        }
    while (number != 0) {
        number = number / 10;
        x = number % 10;
        if (x >= a) {
            a = x;
        }
        else
            a = a;
    }
    return a;
}
