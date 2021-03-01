#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct COMPARSION{
  inline bool operator() (const vector<long long> p1,const vector<long long> p2){
    return p1[1] < p2[1];
  }
};

int main(){
  long long n,k;
  vector<vector<long long>> pr;

  cin >> n;

  for(int i=0;i<n;++i){
    long long a,b;
    cin >> a >> b;
    vector<long long> ab = {a,b};
    pr.push_back(ab);
  }

  cin >> k;
  
  sort(pr.begin(),pr.end(),COMPARSION());

  long counter = 0;

  for(vector<long long> i:pr){
    counter+=i[0];
    if(counter>=k){
      cout << i[1];
      break;
    }
  }

  return 0;
}