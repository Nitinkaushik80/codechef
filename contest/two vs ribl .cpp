#include<bits/stdc++.h>
using namespace std;

#define  ll long long int
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define all(a) a.begin(),a.end()
#define si(a) a.size()
#define p pair< ll,ll >
#define v vector< ll >
#define vi vector<p>
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
           string a,s;
           ll n,b,c,x,y;
           ll counter=0,counter1=0,counter2=0;
           ll sum=0,result=0,ans=0, flag=0;
          cin>>n;
	     x = 0, y = 0;
	    int cc = 0;
	    while(x <= n){
	        ll temp = sqrt(y);
	     //   debug(temp);
	        temp++;
	        y += temp * temp;
	   //     debug(y);
	        x = temp;
	        cc++;
	    }

	  cout<<cc-1<<endl;

       }
}

