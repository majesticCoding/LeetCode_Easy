#include <iostream>
#include <conio.h>
#include <windows.h>
#include <float.h>

using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1) {
		return x;
    }

    double left = 0.0, right = x;
    double root = 0.0;
    while (left <= right) {
        root = (left + right) / 2;
        if (root*root == x || abs(x - (root*root)) <= 0.000001) {
            return (int)root;
        }
        if (x > root*root) {
            left = root;
        }
        else if (x < root*root) {
            right = root;
        }
    }
    return (int)root;
}
