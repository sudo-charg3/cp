#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while (t--) {
		ll n, p, k;
		cin >> n >> p >> k;
		ll d = p%k-(n-1LL)%k-1;
		if (d < 0) {
			d = 0;
			}
		ll rank = p/k+1LL;
		ll noe = p%k*(((n-1LL)/k)+1LL);
		cout << rank+noe-d << "\n";
		}
	return 0;
}
