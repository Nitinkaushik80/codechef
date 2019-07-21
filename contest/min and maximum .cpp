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


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cin>>t;
       while(t--)
       {
           ll n,k,b,a,c,d;

           ll counter=0,counter1=0,counter2=0;
           ll result=0,ans=0, flag=0;
           cin>>n>>k;
       //    if(k%n==0)
        //    cout<<"0"<<endl;
        if(n&1)
        {
              a=k%n;
               b=a*2;
               if(b<n)
               {
                   cout<<b<<endl;
               }
               else
               {
                   if((n/2)+1==a)
                   {
                       cout<<b-2<<endl;
                   }
                   else
                   {
                   c=abs(n-a);
                   d=c*2;
                   cout<<d<<endl;
                   }
               }
        }
        else
        {
              a=k%n;
               b=a*2;
               if(b<n)
               {
                   cout<<b<<endl;
               }
               else
               {
                   if((n/2)==a)
                   {
                       cout<<b-1<<endl;
                   }
                   else
                   {
                   c=abs(n-a);
                   d=c*2;
                   cout<<d<<endl;
                   }
               }
        }

       }
}

