#include<bits/stdc++.h>
using namespace std;

#define  ll long long int

void dilema()
{
    ll p=0,s=0;
    string bahuthard;
    cin>>bahuthard;
    for(int j=0;j<bahuthard.size();j++)
    {
        if(bahuthard[j]==1)
            p++;
        else
            s++;
    }
    if(p%2==0)
        cout<<"LOSE"<<endl;
    else
        cout<<"WIN"<<endl;
}

int main()
{

       long long int t;
       cin>>t;
       while(t--)
       {
          dilema();
       }
}


