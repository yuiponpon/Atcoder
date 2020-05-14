#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int64_t A,B,N;
    cin >> A >> B >> N;
    
    int64_t x=0;
    if(N < B-1) x = N;
    else x = B - 1; 
    printf("%ld\n", (-A*(x%B)%B + A*(x%B)) / B);
    return 0;
}