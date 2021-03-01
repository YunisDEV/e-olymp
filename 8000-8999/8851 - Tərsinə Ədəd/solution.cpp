#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin >> n;
  string result = "";

  while(n>0){
    result+=to_string(n%10);
    n /= 10;
  }

  cout << result;

  return 0;
}