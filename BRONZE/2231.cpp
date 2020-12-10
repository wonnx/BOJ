#include<bits/stdc++.h>
#define MAXN (int)1e6
using namespace std;
int solve[MAXN];
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= MAXN; i++)
	{
		int t = i, r = i;
		while (t)
		{
			r += (t % 10);
			t /= 10;
		}
		if (solve[r])continue;
		solve[r] = i;
	}
	cout << solve[n] << endl;
}
