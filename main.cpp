/* Copyright 2015 Rafael Rendón Pablo <rafaelrendonpablo@gmail.com> */
// region Template
#include <bits/stdc++.h>
using namespace std;
typedef long long           int64;
typedef unsigned long long  uint64;
const double kEps   = 10e-8;
const int kMax      = 1000;
const int kInf      = 1 << 30;
// endregion

int64 bigmod(int64 b, int64 p, int64 m) {
    int64 x = b;
    int64 y = 1;
    while (p > 0) {
        if (p % 2 == 1) {
            y = (y * x) % m;
        }
        x = (x * x) % m;
        p /= 2;
    }
    return y;
}

int main() {
    int64 b, p, m;
    cin >> b >> p >> m;
    int64 r = bigmod(b,p, m);
    cout << ((r == 0) ? "Si" : "No");
    return EXIT_SUCCESS;
}

