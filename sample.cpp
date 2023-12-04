#include<bits/stdc++.h>
#define open_file freopen("input.txt","r",stdin)
#define output_file freopen("output.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 200010
#define MOD 1000000009
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    long long int n,x,y,m,ans,p,l,t,ct,week,total,temp,xt;

    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n>>p>>l>>t;

        week = (n  / 7) + 1;
        if(n % 7 == 0) week--;
        ct = week / 2;
        x = (2 * t + l) * ct;

        if(week % 2 != 0){
            ct++;
            x += (t + l);
        }

        if(x <= p){
            xt = (2 * t + l);
            total = p / xt;
            if(p % xt != 0) total++;
            if(total < ct){
                ct = total;
            }
            ans = n - ct;
        }
        else{
            total = p - (t * week);
            y = total / l;
            if(total % l != 0) y++;
            ans = n - y;
        }
        cout<<ans<<"\n";

    }
    return 0;
}

