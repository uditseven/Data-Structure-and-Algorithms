#include<bits/stdc++.h>

using namespace std;

void disp(int a[], int l, int r)
{
	if(l>r)
		return;
	ll mid = (l+r)/2;
	cout<<a[mid]<<" "<<l<<" "<<r<<endl;
	disp(a,l,mid-1);
	disp(a,mid+1,r);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,temp;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		disp(a,0,n-1);
	}
	return 0;
}