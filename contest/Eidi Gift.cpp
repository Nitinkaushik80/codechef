#include<bits/stdc++.h>
using namespace std;

#define  ll long long int
bool cam(pair<ll,ll>p1,pair<ll,ll>p2)
{
    return p1.first<p2.first;
}
int main()
{

       long long int t;
       cin>>t;
       while(t--)
       {
           string s;
           ll n,b,c,x,y,z,q,w,e;
           vector<pair<ll,ll>>v;
           vector<pair<ll,ll>>vi;
           ll counter=0,counter1=0,counter2=0;
           ll sum=0,result=0,ans=0, flag=0;

           cin>>x>>y>>z>>q>>w>>e;
           v.push_back({x,q});
             v.push_back({y,w});
               v.push_back({z,e});
               sort(v.begin(),v.end(),cam);


               for(int i=0;i<2;i++)
               {
                   if(v[i].first==v[i+1].first)
                   {
                       if(v[i].second!=v[i+1].second)
                       {

                           flag=1;
                           break;
                       }
                   }
                   else
                   {
                       if(v[2].first!=v[1].first)
                           if(v[2].second<=v[1].second)
                           {

                              flag=1;
                              break;
                           }
                   if(v[i].second>=v[i+1].second)
                   {

                       flag=1;
                       break;

                   }
                   }
               }

               if(flag==1)
                cout<<"NOT FAIR"<<endl;
               else
                cout<<"FAIR"<<endl;
       }
}


