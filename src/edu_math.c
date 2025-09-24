#include "edu_math.h"

#include <stdio.h>
#include <stdlib.h>

#define UNIMPLEMENTED \
    do { \
        fprintf(stderr, "[ERROR] function %s is unimplemented\n", __func__); \
        abort(); \
    } while (0)

#define UNUSED(x) (void)(x)

int edu_add(int a, int b) {
    return a + b;
}

int edu_sub(int a, int b) {
    return a - b;
}

int edu_mult(int a, int b) {
    return a * b;
}

int edu_div(int a, int b) {
    return a / b;
}

int edu_mod(int a, int b) {
    return a % b;
}

int edu_pow(int a, int b) {
    int n = 1;
    for (int i = 0; i < b; i++) {
        n *= a;
    }
    return n;
}

int edu_abs(int a) {
    return a >= 0 ? a : -a;
}

int edu_gcd(int a, int b) {
    while (b != 0) {
        int n = b;
        b = a % b;
        a = n;
    }
    return a;
}

int edu_lcm(int a, int b) {
    return (a / edu_gcd(a, b)) * b;
}

int edu_int_sqrt(int a) {
    int n = 0;
    while (n * n <= a) n++;
    return n - 1;
}

int edu_sgn(int a) {
    if (a == 0) return 0;
    else if (a > 0) return 1;
    else return -1;
}

int edu_fact(int a) {
    if (a == 0) return 1;
	int n = 1;
	for (int i = 1; i <= a; ++i) {
		n *= i;
	}
	return n;
}
