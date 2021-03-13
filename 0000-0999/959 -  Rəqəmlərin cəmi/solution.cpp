#include <bits/stdc++.h>
using namespace std;

int main()
{
  int number;
  int result = 1;
  cin >> number;
  while(number > 0){
    result += number%10;
    number /= 10;
  }
  cout << result;
  return 0;
}