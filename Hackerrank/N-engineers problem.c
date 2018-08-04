#include <stdio.h>

int dp[1<<21];
int best[1<<21];
int eff[21][21];
int allot[21];
int n;
int set_bits(int n)
{
	int cnt = 0;
	while(n != 0)
	{
		if(n % 2)
			cnt++;
		n = n / 2;
	}
	return cnt;
}
int assign(int mask)
{
	int val;
	int x = set_bits(mask);
	if(mask == (1 << n) -1)
		return 0;

	if(dp[mask] != -1)
		return dp[mask];

	for (int i = 0; i < n; ++i)
	{
		if(mask & (1 << i))/* If ith bit is set then skip */
			continue;

		val = assign(mask|(1 << i)) + eff[x][i];
		
		if(dp[mask] < val)
		{
			dp[mask] = val;
			best[mask] = i;
		}
	}
	return dp[mask];
}

int main()
{
	int ans,mask,p;
	scanf("%d", &n);
	for (int i = 0; i < (1<<21); ++i)
	{
		dp[i] = -1;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&eff[i][j]);
		}
	}
	ans = assign(0);
	mask = 0;
	p = 0;
	while(mask != (1<<n)-1)
	{
		allot[p] = best[mask];
		mask = mask|1<<best[mask];
		p++;
	}
	printf("%d\n",ans);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", allot[i]+1);
	}
}
