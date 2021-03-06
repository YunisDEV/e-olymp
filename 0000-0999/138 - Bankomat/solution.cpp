#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
  ll n, i, count=0;
  int hryvnias[6] = {500, 200, 100, 50, 20, 10};
  cin >> n;

  for(i=0; i<6; i++){
    if (n >= hryvnias[i]){
      count += n / hryvnias[i];
      n %= hryvnias[i];
    }
  }
  if (count==0 || n!=0){
    cout << -1;
  }
  else{
    cout << count;
  }
  
  return 0;
}