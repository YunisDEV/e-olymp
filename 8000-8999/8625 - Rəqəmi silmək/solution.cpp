#include <iostream>
using namespace std;

int main() {
  string number; 
  cin >> number;
  string max = "0";
  for(int i=0;i<=number.size()-2;++i){
    for(int j=i+1;j<number.size();++j){
      if(i==j) continue;
      string comb = string(1,number[i]) + number[j];
      max = comb > max ? comb : max;
    }
  }
  cout << max;
  return 0;
}