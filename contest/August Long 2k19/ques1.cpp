#include<bits/stdc++.h>
using namespace std;

#define  ll long long int

void bahuthard()
{
    vector<ll>shamo,katapa;
    ll pandit,munim,roti, sabzi,bekar,pani=0;
    cin>>pandit;
    for(int i=0;i<pandit;i++)
    {
        cin>>munim;
        shamo.push_back(munim);
    }
    for(int i=0;i<pandit;i++)
    {
        cin>>munim;
        katapa.push_back(munim);
    }
    for(int i=0;i<pandit;i++)
    {
        sabzi=katapa[i]*10;
        roti=shamo[i]*20;
        bekar=roti-sabzi;
        if(pani<bekar)
            pani=bekar;
    }
    cout<<pani<<endl;
}

int main()
{

       long long int t;
       cin>>t;
       while(t--)
       {

            bahuthard();
       }
}


