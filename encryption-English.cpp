#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int y=floor(sqrt( s.size() ));
     int x=ceil(sqrt( s.size() ));
    int i=0,count=0;
    while(count<=y)
    { 
        if(i<x)
        for(int j=i;j<s.size();j+=x)
        {
         cout<<s[j];
        }
        cout<<" ";
        count++;
        i++;
        
    }
}
