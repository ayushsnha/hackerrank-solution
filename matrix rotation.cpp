#include<iostream>
using namespace std;

int main()
{
	int x,y,z,circle=0,last;
	cin>>x>>y>>z;
	long long int a[x][y],t[x][y];
	int first=0;
	
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cin>>a[i][j];
			t[i][j]=0;
			if(i==j)
			circle++;
		}
	}
    if(x%2==0)
	 last=circle/2;
	else last = (circle/2)+1;
	//rotation

	for(int k=0;k<z;k++)
	 {
	 	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
		
		}
	}
	 	
	 	
	 	
	 	
	 }

//output
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}

}
