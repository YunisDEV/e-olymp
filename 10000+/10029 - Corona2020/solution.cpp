#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
  long long a,b,c;
  cin >> a >> b >> c;

  bool isCorona = true;
  string statement = "";

  if(a-b-c == 2020){
    isCorona = false;
    statement = to_string(a) + "-" + to_string(b) + "-" + to_string(c);
  }else if(a+b-c == 2020){
    isCorona = false;
    statement = to_string(a) + "+" + to_string(b) + "-" + to_string(c);
  }else if(a-b+c == 2020){
    isCorona = false;
    statement = to_string(a) + "-" + to_string(b) + "+" + to_string(c);
  }else if(a+b+c == 2020){
    isCorona = false;
    statement = to_string(a) + "+" + to_string(b) + "+" + to_string(c);
  }

  if(isCorona){
    cout << "CORONA";
  }
  else{
    cout << statement;
  }

  return 0;
}