#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;

  cout << ((a-(2*b)) > 0 ? (a - (2*b)) : 0);

  return 0;
}