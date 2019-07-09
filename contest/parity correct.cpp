#include<bits/stdc++.h>
using namespace std;

#define  ll long long int
#define debug(c) cout << #c << " = " << c << endl;

int num_to_bits[16] = {0, 1, 1, 2, 1, 2, 2, 3,
                    1, 2, 2, 3, 2, 3, 3, 4};

ll setbit(ll num)
{
    ll nibble = 0;
    if (0 == num)
        return num_to_bits[0];
    nibble = num & 0xf;
    return num_to_bits[nibble] +
            setbit(num >> 4);
}

int main()
{
    ios_base::sync_with_stdio(false);
   cin.tie(NULL);

       ll t;
       cin>>t;
       while(t--)
       {
         set<ll>ss;

           ll a,r,c;
           ll counter=0,counter1=0,counter2=0;
           ll result=0,ans=0, flag=0;

            cin>>a;

        for(int i=0;i<a;i++)
        {
            cin>>r;

                 if(ss.count(r)==0)
                 {

                     ss.insert(r);
                     result=setbit(r);
                    if(result &1)
                    counter1++;
                    else
                    counter2++;
                      ss.insert(r);

                    for (auto itr = ss.begin(); itr != ss.end(); ++itr)
                       {
                            if(r!=*itr)
                            {

                               ans=*itr^r;

                                 if(ss.count(ans)==0)
                                     {
                                         result=setbit(ans);
                                        if(result &1)
                                        counter1++;
                                        else
                                        counter2++;
                                          ss.insert(ans);

                                     }
                         }


                 }
                 }

                         cout<<counter2<<" "<<counter1<<endl;

        }

}
}



