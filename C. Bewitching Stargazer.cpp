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

ll int fun(int l,int r,int k)
{
    int len = r - l + 1;
    if(len < k || l >= r) return 0;
    int m = len / 2;
    cout<<m<<" "<<l<<" "<<r<<endl;
    ll int ans;
    if(len % 2 == 1){
        ll int x = fun(l , l + m, k);
        ll int y = fun(r - m, r, k);
        ans = x + y;
        ans += m + 2;

    }
    else{
        ll int x = fun(l ,l + m , k);
        ll int y = fun(l + m + 1, r , k);
        ans = x + y;
    }
    return ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int n,k;

    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n>>k;
        cout<<fun(1,n,k)<<"\n";
    }
    return 0;
}

