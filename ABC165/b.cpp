#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int64_t X;
    cin >> X;

    int64_t money=100;
    int64_t year = 0;
    while(1) {
        money = (money/100) + money;
        year += 1;
        if(money >= X) {
            printf("%ld\n",year);
            break;
        }
    }

    return 0;
}