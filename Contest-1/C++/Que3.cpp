#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,h;
    cin>>n>>h;
    int a[n];
    int width=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=h) width++;
        else width+=2;
    }
    cout<<width;
    return 0;
}
