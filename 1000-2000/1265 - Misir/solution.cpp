#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){

  for(;;){
    int a,b,c;
    cin >> a >> b >> c;
    if ( a+b+c == 0 ) break;
    vector<int> tri = {a,b,c};
    sort(tri.begin(),tri.end());

    if((tri[0]*tri[0] + tri[1]*tri[1]) == (tri[2]*tri[2])){
      cout << "right" << endl;
    }else{
      cout << "wrong" << endl;
    }
  }

  return 0;
}