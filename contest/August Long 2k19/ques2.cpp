#include<bits/stdc++.h>
using namespace std;

#define  ll long long int

void ahahbhai()
{
     ll shinchan, doremon, nobita;
     cin>>shinchan;
     cin>>doremon;
     if(doremon!=1)
     {
         nobita=shinchan/doremon;
         if(nobita%doremon!=0)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
     }
     else
        cout<<"NO"<<endl;
}

int main()
{

       long long int t;
       cin>>t;
       while(t--)
       {
          ahahbhai();
       }
}


