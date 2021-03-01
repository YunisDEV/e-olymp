#include <iostream>
using namespace std;

long long pow(long long a,long long b){
  long long result = 1;
  for(int i=0;i<b;i++){
    result *= a;
  }
  return result;
}

long long reversedNum(long long  num){
  long long  result = 0;
  while(num > 0){
    result = result*10 + (num % 10);
    num/=10;
  }
  return result;
}

bool isPalindrome(long long num){
  return num==reversedNum(num);
}

int main() {
  long long num;
  cin >> num;
  int degree = 0;

  for(int i=0;i<10000;++i){
    if(!isPalindrome(num)){
      num+=reversedNum(num);
      degree++;
    }
    else break;
  }

  cout << degree;

  return 0;
}