#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long half = (n + 1) / 2;

    if (k <= half) {
        cout << (2 * k - 1) << endl;
    } else {
        cout << 2 * (k - half) << endl;
    }

    return 0;
}
