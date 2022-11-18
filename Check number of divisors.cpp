#include<bits/stdc++.h>
using namespace std;

unsigned long long n, res;
int p, primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 51, 53, 59, 61, 67, 71};

unsigned long long mul(unsigned long long a, unsigned long long b){
    unsigned long long res = 0;

    while (b){
        if (b & 1LL) res = (res + a);
        if (res >= n) return 0;
        a = (a << 1LL);
        b >>= 1LL;
    }

    return res;
}

void backtrack(int i, int lim, unsigned long long val, unsigned long long r){
    if (r > res) res = r;
    if (i == p) return;

    int d;
    unsigned long long x = val;

    for (d = 1; d <= lim; d++){
        x = mul(x, primes[i]);
        if (x == 0) return;
        backtrack(i + 1, d, x, r * (d + 1));
    }
}

int main(){


    p = sizeof(primes) / sizeof(int);
    vector<long long> v = {10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};

    long long u = 10;
    while ( u <= 1e18 ) {
        res = 0;
        n = u;
        backtrack(0, 100, 1, 1);
        printf("Maximum number of divisors of any number less than %llu = %llu\n", n, res);
        if ( u == 1e18 )  break;
        u *= 10;
    }
    return 0;
}


/**

Maximum number of divisors of any number less than 10 = 4
Maximum number of divisors of any number less than 100 = 12
Maximum number of divisors of any number less than 1000 = 32
Maximum number of divisors of any number less than 10000 = 64
Maximum number of divisors of any number less than 100000 = 128
Maximum number of divisors of any number less than 1000000 = 240
Maximum number of divisors of any number less than 10000000 = 448
Maximum number of divisors of any number less than 100000000 = 768
Maximum number of divisors of any number less than 1000000000 = 1344
Maximum number of divisors of any number less than 10000000000 = 2304
Maximum number of divisors of any number less than 100000000000 = 4032
Maximum number of divisors of any number less than 1000000000000 = 6720
Maximum number of divisors of any number less than 10000000000000 = 10752
Maximum number of divisors of any number less than 100000000000000 = 17280
Maximum number of divisors of any number less than 1000000000000000 = 26880
Maximum number of divisors of any number less than 10000000000000000 = 41472
Maximum number of divisors of any number less than 100000000000000000 = 64512
Maximum number of divisors of any number less than 1000000000000000000 = 103680

**/