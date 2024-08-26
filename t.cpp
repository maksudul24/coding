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
    int n,x,ans;
    string s;
    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n;
        cin>>ans;
        for(int i = 1; i < n; i++){
            cin>>x;
            if(i % 2 != 0) ans = max(ans,x);
            else ans = min(ans,x);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
