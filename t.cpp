#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("out.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 200010
#define MOD 1000000009
#define ll long long
//PRINT_VARIABLE_NAME //use cout<<"\n";
#define PVN(variable) std::cout << #variable << " = " << variable <<"\n"
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int n,m,ans;
    ll int temp;
    double x;
    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n>>m;
        temp = m - n;
        temp *= 8;
        temp++;
        x = sqrt(temp);
        x = (x - 1) / 2.0;
        ans = x;
        ans++;
        if(n == m) ans = 1;
        cout<<ans<<"\n";
    }
    return 0;
}
