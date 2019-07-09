#include<bits/stdc++.h>
using namespace std;

#define  ll long long int
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define mem(tabl,i) memset(tabl, i, sizeof(tabl))
#define sp(x,y) fixed<<setprecision(y)<<lf(x)
#define debug(c) cout << #c << " = " << c << endl;
#define  f(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007

const int N = 1e5 + 5;
ll m=0;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cin>>t;
       while(t--)
       {
           vector<ll>v,s;
           ll a,n,b,c;
           m=0;
           ll counter=0,counter1=0,counter2=0;
           ll result=0,ans=0, flag=0;
           cin>>n;
           f(i,0,n)
           {
               cin>>b;
               m+=b;
               v.pb(b);
           }
           if(m%n==0)
           {
               c=m/n;
               f(i,0,n)
               {
                   if(v[i]-c==0)
                   {
                       a=i+1;
                       flag=1;
                       break;
                   }
               }
               if(flag==1)
                cout<<a<<endl;
               else
                cout<<"Impossible"<<endl;

           }
           else
           {
               cout<<"Impossible"<<endl;
           }
       }
}

