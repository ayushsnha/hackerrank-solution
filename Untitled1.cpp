#include<iostream>
using namespace std;
	int factorial(int f)
{
	
	for(int i = f-1; i > 1; i--)
		f *= i;
 
	return f;
}

int main()
{
    int n,m;
    cin>>n>>m;
    string a[n];
    for(int i=0;i<n;i++)
    {
        
            cin>>a[i];  
    
    }  
	int result,f=n;
	result = factorial(f)/(2*factorial(f-2));
	int arr[result];
	 
    
    for(int i=0;i<n;i++)
    {
    	int count=0;
        for(int j=i+1;j<n;j++)
        {
           for(int k=0;k<m;k++)
		   {
		   	
	   		if((a[i][k]||[j][k])=='1')
	   		count++;
			} 
        }
    	arr[i]=count;
    }
    
    
    for(int i=0;i<result;i++)
    {
    	cout<<arr[i];
	}




}
