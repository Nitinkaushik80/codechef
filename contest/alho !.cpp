#include<bits/stdc++.h>
using namespace std;

#define  ll long long int


int main()
{

       ll t;
       cin>>t;
       while(t--)
       {
         set<ll>s;

           ll n,r,c;
           ll counter=0,counter1=0,counter2=0;
           ll result=0,ans=0, flag=0;

            cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>r;
             s.insert(r);
        }
        if(s.size()==n)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
      }
}


