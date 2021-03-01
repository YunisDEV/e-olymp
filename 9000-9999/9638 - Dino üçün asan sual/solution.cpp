#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    int a,b,k;
    cin >> a >> b;

    k = (a+b)/2;

    cout << ((abs(a-k) == abs(b-k)) ? to_string(k) : "-");

    return 0;
}