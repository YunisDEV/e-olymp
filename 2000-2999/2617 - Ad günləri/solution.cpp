#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
  int n;
  cin >> n;
  set<int> days;

  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    days.insert(a);
  }

  cout << days.size();

  return 0;
}