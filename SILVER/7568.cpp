#include<bits/stdc++.h>
#define MAXN 51
using namespace std;

int a[MAXN], b[MAXN];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y; cin >> x >> y;
		a[i] = x, b[i] = y;
	}
	for (int i = 0; i < n; i++)
	{
		int r = 1;
		for (int j = 0; j < n; j++)
		{
			if (j == i)continue;
			if (a[j] > a[i] && b[j] > b[i])r++;
		}
		cout << r << " ";
	}	
}
