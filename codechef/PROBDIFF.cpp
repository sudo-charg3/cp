#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	scanf("%d", &t);
	while (t<1001 && t--) {
		int a[4];
		int ans = 0;
		scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
		set<int> s;
		s.insert(a[0]);
		s.insert(a[1]);
		s.insert(a[2]);
		s.insert(a[3]);
		if (a[0]<=10 && a[1]<=10 && a[2]<=10 && a[3]<=10) {
			sort(a, a+4);
			for (int i = 0; i < 4; i++) {
				for(int k=i; k < 4; k++) {
						if (a[k]!=a[i]) {
							ans++;
							
							}
					}
				}
			}
		if (ans==0) {
				printf("%d\n", 0);
			}
		else {
			printf("%d\n", ans-s.size());
			}
			
		
		}
	return 0;
	
	}
