#include <bits/stdc++.h>
#include <sstream>
using namespace std;

class Stack {
  public:
    vector<int> data;
    Stack(){
      data = {};
    }
    void pop(){
      map<int,int> counts;
      for(int i:data){
        counts[i]++;
      }
      int maxCount = 0;
      map<int,int>::iterator it;
      for(it=counts.begin();it!=counts.end();it++){
        maxCount = max(maxCount,it->second);
      }
      for(int i=data.size()-1;i>=0;i--){
        if(counts[data[i]]==maxCount){
          cout << data[i] << endl;
          data.erase(data.begin() + i);
          break;
        }
      }
    }
    void push(int a){
      data.push_back(a);
    }
};

int main(){
  Stack stackoverflow;
  for(;;){
    string input;
    getline(cin,input);
    if(input=="") break;
    else
      if(input=="pop"){
        stackoverflow.pop();
      }
      else{
        string toPush = input.substr(input.find(' '),input.size()-1);
        int to_push;
        stringstream ss(toPush);
        ss >> to_push;
        stackoverflow.push(to_push);
      }
  }
  return 0;
}