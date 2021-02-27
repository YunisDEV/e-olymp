#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

struct COMPARSION{
  inline bool operator() (const vector<int> p1,const vector<int> p2){
    return min(p1[0],p2[1]) < min(p2[0],p1[1]);
  }
};

int main() {
  int n;
  cin >> n;

  vector<vector<int>> pr;

  for(int i=0;i<n;i++){
    vector<int> inputt = {0,0};
    pr.push_back(inputt);
  }

  for(int i=0;i<n*2;i++){
    int inp;
    cin >> inp;
    pr[i%n][i/n] = inp;
  }

  sort(pr.begin(),pr.end(), COMPARSION());

  int result=0,a=0;

  for(int i=0;i<pr.size();++i){
    a+=pr[i][0];
    result = max(result,a) + pr[i][1];
  }
  cout << result;

  return 0;
}