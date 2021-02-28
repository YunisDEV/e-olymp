#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int count = 0;
    do{
     count++;a/=10; 
    }while(a>0);
    cout << count;
}