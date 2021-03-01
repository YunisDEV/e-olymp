#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float x1,y1,r1,x2,y2,r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

  float d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

  if ( d==0 ) cout << ((abs(r1-r2) < (pow(2,-54))) ? -1 : 0);
  else if (d == r1+r2 || d == abs(r1-r2)) cout << 1;
  else if (d>abs(r1-r2) && d<(r1+r2)) cout << 2;
  else cout << 0;
  return 0;
}