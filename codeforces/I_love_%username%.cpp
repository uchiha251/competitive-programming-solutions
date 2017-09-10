#include <iostream>
#include <cstdio>
#include <climits>
#include <stack>
#include <vector>
#include <cmath>
#include <string>

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

int count_amazing(int *A, int n) {
	if (n <= 1) {
		return 0;
	}
	int amazing = 0;
	int min = A[0], max = A[0];
	for (int i=1; i<n; i++) {
		if (A[i] < min) {
			amazing += 1;
			min = A[i];
		}
		else if (A[i] > max) {
			amazing += 1;
			max = A[i];
		}
	}
	return amazing;
}

int main(){
	fast_io;
	if(fopen("tupni.txt", "r")) {
		freopen("tupni.txt", "r", stdin);
		freopen("tuptuo.txt", "w", stdout);
	}
	
	int n;
	cin >> n;
	int *A = new int[n];
	REP(i, n) {
		cin >> A[i];
	}
	cout << count_amazing(A, n);

	return 0;
}