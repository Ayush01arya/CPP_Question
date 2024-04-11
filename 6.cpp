// write a program to find a compund intrest
#include <bits/stdc++.h>
using namespace std;

int main() {
    double principal = 25000;
    double rate = 12;
    double time = 5;

    // Calculate compound interest
    double amount = principal * pow((1 + rate / 100), time);
    double compoundInterest = amount - principal;

    cout << "Compound interest is " << compoundInterest << endl;
    return 0;
}