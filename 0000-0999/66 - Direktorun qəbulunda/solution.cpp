#include <bits/stdc++.h>
#include <sstream>
#define ll unsigned long long
using namespace std;

class Clock{
  public:
    int hour;
    int minute;
    Clock(string clock_str){
      string hour_str = clock_str.substr(0, clock_str.find(':'));
      string minute_str = clock_str.substr(clock_str.find(':')+1, clock_str.size());
      stringstream hs(hour_str),ms(minute_str);
      hs >> hour;
      ms >> minute;
    };
    Clock(){};
    friend bool operator >(const Clock& c1,const Clock& c2){
      if(c1.hour > c2.hour) return true;
      else if(c1.hour==c2.hour) return c1.minute > c2.minute;
      else return false;
    };
    friend bool operator <(const Clock& c1,const Clock& c2){ 
      return c2 > c1;
    };
    friend bool operator <=(const Clock& c1,const Clock& c2){
      if(c1 < c2) return true;
      else if(c1 > c2) return false;
      else return true;
    }
};

int main()
{
    ll i, n, count = 1;
    cin >> n;
    vector<pair<Clock, Clock>> clocks;
    for (i=0; i<n; i++){
      string start, end;
      cin >> start >> end;
      Clock start_clock(start);
      Clock end_clock(end);
      clocks.push_back(make_pair(end_clock,start_clock));
    }
    sort(clocks.begin(), clocks.end());
    ll activeElement = 0;

    for(i=1; i<n; i++){
      if (clocks[activeElement].first <= clocks[i].second) {
        activeElement = i;
        count++;
      }
    }

    cout << count;
    return 0;
}