#include<iostream>
using namespace std;

int main(){
    long long a,b;
    cin >> a >> b;
    long long sum = 0;
    for(int i=0;i<b-a;++i){sum+=i+1;}
    cout << b-sum << endl;
    return 0;
}