#include <iostream>
using namespace std;

int main() {
  int a,m;
  int got = 0;
  cin >> a;
  cin >> m;
  int count = 1;
  while( (m-got)/2.0 != ((float)a) ){
    got+=a;
    a++;
    count++;
  }
  cout << count;
  return 0;
}