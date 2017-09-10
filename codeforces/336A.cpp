#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>


#define LOG(x) cerr << "*** " << x << " ***" << endl;
#define wi(x) what_is(x, '\n')
#define wisp(x) what_is(x, ", ")
#define what_is(x, terminator) cerr << #x << " = " << x << terminator;

#define DBG false
#define endl "\n"
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fast_io     ios_base::sync_with_stdio(0);cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;

int main(){
	fast_io;
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
	
	int x,y;
	cin >> x >> y;
	int ans = abs(x)+abs(y);
	if (x > 0 && y > 0) {
		cout << 0 << " " << ans << " " << ans << " " << 0;
 	} else if (x < 0 && y < 0) {
 		cout << -1*ans << " " << 0 << " " << 0 << " " << -1*ans;
 	} else if (x > 0 && y < 0) {
 		cout << 0 << " " << -1*ans << " " << ans << " " << 0;
 	} else if (x < 0 && y > 0) {
 		cout << -1*ans << " " << 0 << " " << 0 << " " << ans;
 	}
	return 0;
}