#include<bits/stdc++.h>
using namespace std;

#define  ll long long int

void kabirSingh()
{
    ll shahid,zoo,bie,flag=0;
    cin>>shahid;
    ll kabir[shahid+1];
    ll preety[shahid+1];
    ll kiara[shahid+1];
    for(int i=0;i<=shahid;i++)
        kiara[i]=0;
    for(int i=1;i<=shahid;i++)
    {
        cin>>kabir[i];
    }
     for(int i=1;i<=shahid;i++)
    {
        cin>>preety[i];
    }
    kabir[0]=0;
    preety[0]=0;
     for(int i=1;i<=shahid;i++)
     {
         zoo=i-kabir[i];
         bie=i+kabir[i];
          if(zoo<=0)
                zoo=1;
          if(bie>=shahid)
                bie=shahid;
            kiara[zoo] += 1;
            kiara[bie+ 1] -= 1;
     }
      for (int i = 1; i <= shahid; i++) {
        if (i == 1)
            kabir[i] = kiara[i];
        else
            kabir[i] = kiara[i] + kabir[i - 1];
    }
           sort(kabir,kabir+shahid+1);
           sort(preety,preety+shahid+1);
            for (int i = 1; i <= shahid; i++)
           {
               if(preety[i]!=kabir[i])
                flag=1;
           }
           if(flag==1)
            cout<<"NO"<<endl;
           else
            cout<<"YES"<<endl;

}

int main()
{

       long long int t;
       cin>>t;
       while(t--)
       {

            kabirSingh();
       }
}


