#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s="Answer";
    string a;
    cout<<"\nEnter the string:";
    cin>>a;
    int l=a.size();
    int m=s.size();
    int j=0;
    for(int i=l;i<l+m;i++)
    {
        a[i]=s[j];
        j++;
    }
   for(int i=0;i<l+m;i++)
   {
       cout<<a[i];
   }
}
