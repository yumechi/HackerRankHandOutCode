#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <queue>

#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define INF 1<<30
#define ALEN(ARR) (sizeof(ARR) / sizeof((ARR)[0]))
#define MP make_pair
#define mp make_pair
#define pb push_back
#define PB push_back
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define ll long long
#define ull unsigned long long
#define MOD 1000000007

int arr[100001];
int N;

bool cancalc(int additonalprog) {
    ll sum = 0;
    REP(i, N) {
        sum += additonalprog;
        sum -= arr[i];
        if(sum < 0) {
            return false;
        }
    }
    return true;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout.precision(16);

  cin >> N;
  int maxnum = -1;
  REP(i, N) {
      int t;
      cin >> t;
      arr[i] = t;
      maxnum = max(t, maxnum);
  }

  int minnum = 0;
  int midnum = (maxnum + minnum) / 2;
  while(minnum < maxnum) {
      midnum = (maxnum + minnum) / 2;
      if(cancalc(midnum)) {
          maxnum = midnum;
      } else {
          minnum = midnum + 1;
      }
  }

  cout << minnum << endl;
}
