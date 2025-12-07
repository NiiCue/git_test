// main.cpp - 简单计算器程序 v1.3
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        cout << "错误：除数不能为0！" << endl;
        return 0;
    }
    return (double)a / b;
}

int main() {
    int x = 10, y = 20;
    cout << "===== 简单计算器 v1.3 =====" << endl;
    cout << x << " + " << y << " = " << add(x, y) << endl;
    cout << x << " - " << y << " = " << subtract(x, y) << endl;
    cout << x << " * " << y << " = " << multiply(x, y) << endl;
    cout << x << " / " << y << " = " << divide(x, y) << endl;
    return 0;
}