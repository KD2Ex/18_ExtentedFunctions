#include <iostream>
using namespace std;

void evendigits(long long n, int& ans) {
    if (n == 0) {
        return;
    } else if ((n % 10) % 2 == 0) {
        ++ans;
    }
    n /= 10;
    evendigits(n, ans);
}

int main() {
    int ans = 0;
    evendigits(9223372036854775806, ans);
    cout << ans;
}