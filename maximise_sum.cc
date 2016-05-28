/*
https://www.codechef.com/MARCH16/problems/MAXISUM/
You are given two integer arrays A and B each of size N. Let us define interaction of arrays A and B to be the sum of A[i] * B[i] for each i from 1 to N.
You want to maximize the value of interaction of the arrays. You are allowed to make at most K (possibly zero) operations of following kind.
In a single operation, you can increase or decrease any of the elements of array A by 1.
Find out the maximum value of interaction of the arrays that you can get.
*/
# include <cstdio>
# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <cmath>
using namespace std;
int max_obs(vector<int> &a)
{
	int h,max=abs(a[0]),index=0;
	int l=a.size();
	for(h=1;h<l;h++)
		if(abs(a[h])>max)
		{
			max=abs(a[h]);
			index=h;
		}
		return index;
}
int main(int argc, char const *argv[])
{
	int t,n,k,x,diff;
	vector<int> a;vector<int> b;
	cin>>t;
	for (int i = 0; i < t; i++)
	{
		cin>>n>>k;
		a.resize(0);b.resize(0);
		for (int j = 0; j < n; j++)
		{
			cin>>x;
			a.push_back(x);
		}
		for (int j = 0; j < n; j++)
		{
			cin>>x;
			b.push_back(x);
		}
		int sum=0;
		int ai=max_obs(a);
		int bi=max_obs(b);
		if(a[bi]==0 && b[bi]!=0)
		{
			a[bi]=k*(b[bi]/abs(b[bi]));
		}
		if(a[bi]!=0 && b[bi]!=0)
		{
			if(a[bi]*b[bi]>0)
				a[bi]=a[bi]+k*(a[bi]/abs(a[bi]));
			else
				a[bi]=a[bi]-k*(a[bi]/abs(a[bi]));
			for(int g=0;g<n;g++)
				sum=sum+a[g]*b[g];
		}
		cout<<sum<<'\n';
	}
	return 0;
}
