#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("out.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 100
#define MOD 1000000009
//PRINT_VARIABLE_NAME //use cout<<"\n";
#define PVN(variable) std::cout << #variable << " = " << variable <<"\n"
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int a,b,c,ans;
    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>a>>b>>c;
        if(a == b && b == c && b % 2 != 0) cout<<"-1\n";
        else{
            ans = c - b;
            if(ans < a) ans += b;
            else ans = b + a;
            cout<<ans<<"\n";

        }
    }
    return 0;
}
