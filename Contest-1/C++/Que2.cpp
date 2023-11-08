// Approach -> Given, the positions of two hunters and a rabbit. We need to find absolute value of distance b/w hunters and rabbit, and compare them.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int a = abs(x-z);
    int b = abs(y-z);
    // abs gives the modulus or absolute value.
    if (a == b) cout << 'C';
    else if (a > b) cout << 'B';
    else    cout << 'A';
}
