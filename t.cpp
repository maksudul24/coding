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
//PRINT_VARIABLE_NAME
#define PVN(variable) std::cout << #variable << " = " << variable << std::endl
#define ll long long
using namespace std;

struct typ{
    int x,y;
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int n,x,y,m,mx,mn,sum;
    vector<typ> ara(SIZE);

 //   open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n;
        vector<int> mark((n * 2) + 10);
        vector<int> cnt((n * 2) + 10);
        mn = INT_MAX;
        mx = INT_MIN;
        for(int i = 0; i < n; i++){
            cin>>ara[i].x>>ara[i].y;
            if(ara[i].x == ara[i].y){
                mark[ara[i].x] = 1;
                cnt[ara[i].x]++;
            }
            mn = min(ara[i].x,mn);
            mx = max(ara[i].y,mx);
        }
        sum = 0;
        for(int i = mn; i <= mx; i++){
            sum += mark[i];
            mark[i] = sum;
        }
        for(int i = 0; i < n; i++){
            if(ara[i].x == ara[i].y){
                if(cnt[ara[i].x] > 1) cout<<"0";
                else cout<<"1";
            }
            else{
                x = ara[i].y - ara[i].x + 1;
                y = mark[ara[i].y] - mark[ara[i].x];
                if(x == y) cout<<"0";
                else cout<<"1";
            }
        }
        cout<<"\n";
    }
    return 0;
}
