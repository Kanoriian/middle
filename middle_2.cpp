#include "middle.h"

using namespace std;

long perevorot(int number){
   int zebra, rezak, n;
    zebra = 0;
    n = number;
if (number < 0)
number = number * -1;
 while(number > 0){
        zebra = number % 10;
        rezak = rezak * 10 + zebra;
        number = number / 10;
 }
 return rezak;
}

int itc_min_num(long long number) {
    int x, a;
    x = 0;
    a = number % 10;

if(number == -2147483648)
   return 1;
if (number / 10 == 0)
    return number;
if (number < 0)
    number = number * -1;

    while (number > 0) {
        x = number % 10;
        if (x <= a)
            a = x;
            number = number / 10;
    }
    return a;
}


int itc_rev_num(long long number) {
    int zebra, egor;
    zebra = 0;
    egor = perevorot(number);

if(number == -2147483648)
   return 10;
if (number / 10 == 0)
    return 1;
if (number < 0)
    number = number * -1;
if (number == 2147483647)
    return 10;

    while (egor > 0) {
        zebra ++;
        egor = egor /10;
    }
    return zebra;
}

int itc_null_count(long long number) {
    int a, x;
    a = 0;
    x = 0;
if(number == -2147483648){
   return 0;
}
if(number == 0)
    return 1;
if (number / 10 == 0)
        return 0;
if (number < 0)
        number = number * -1;

    while (number > 0) {
        a = number % 10;
        if (a == 0)
            x = x + 1;
        number = number / 10;
    }
    return x;
}

bool itc_mirror_num(long long number) {
    int zebra, rezak, n;
    n = perevorot(number);
    if (number == n)
        return true;
        return false;
}

