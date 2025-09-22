#include <iostream>
using namespace std;

static int static_const = 1;

int mul(int n) {
    if (n < 2) {
        return 1; 
    }
    int i = 2;
    int f = 1;
    while (i <= n) {
        f = f * i;
        i = i + 1;
    }
    return f;
}

int main() {
    const int normal_const = 2;
    int n;
    cout << "start! normal_const: " << normal_const<< "  static_const: " << static_const << endl;
    cout << "Enter a number: ";
    cin >> n;
    int result = mul(n);
    cout << "Result: " << result << endl;
    return 0;
}
