#include <iostream>
using namespace std;

void evendigits(long long n, int& ans) {
    string str = to_string(n);
    if (str[1] == '0') {
        ++ans;
    }
    if (((str[0]) - '0') % 2 == 0) {
        ++ans;
    }
    if (str.size() == 1) {
        return;
    }
    str.erase(0, 1);
    evendigits(stoll(str), ans);
}

int main() {
    int ans = 0;
    evendigits(9223372036854775806, ans);
    cout << ans;
}