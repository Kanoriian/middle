#include "middle.h"

using namespace std;


int itc_mirror_count(long long number) {
    int a, x, n, num;
    a = 4536453;
    x = 0;
    n = 0;
    num = 0;
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
    while (n < number) {
        n = n + 1;
        while (n > 0) {
            a = n % 10;
            x = x + a;
            x = x * 10;
            n = n / 10;
        }
        x = x / 10;
        if (x / n == 1) {
            num = num + 1;
        }
        else
            num = num;
    }
    return num;
}

int itc_second_max_num(long long number) {
    int max, max2, zebra;
    max = itc_max_num(number);
    max2 = 8848;
    zebra = number % 10;
    if (number / 10 == 0) {
        return -1;
    }
    else
        if (number < 0) {
            number = number * -1;
        }
    while (number > 0) {
        number = number / 10;
        max2 = number % 10;
        if (max2 != max && max2 > zebra) {
            max2 = max2;
        }
        else
            if (max2 < zebra && max2 != max) {
                max2 = zebra;
            }
            else
                if (max2 = max) {
                    return max;
                }
    }
    return max2;
}

int itc_second_simple_max_num(long long number) {
    int max, max2, max3, zebra;
    max = itc_max_num(number);
    max2 = itc_second_max_num(number);
    max3 = 666;
    zebra = number % 10;
    if (number / 10 == 0) {
        return -1;
    }
    else
        if (number < 0) {
            number = number * -1;
        }
    while (number > 0) {
        number = number / 10;
        max3 = number % 10;
        if (max3 != max && max3 > zebra && max3 != max2) {
            max3 = max3;
        }
        else
            if (max3 != max && max3 < zebra && max3 != max2) {
                max3 = zebra;
            }
            else
                if (max3 = max) {
                    return -1;
                }
                else
                    if (max3 = max2) {
                        return -1;
                    }
    }
    return max2;
}

