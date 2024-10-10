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
#define ll long long
//PRINT_VARIABLE_NAME
#define PVN(variable) std::cout << #variable << " = " << variable << std::endl
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int n,x,y,m,mx,ans,k;

    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n>>k;
        vector<bool> ara(n + 10,true);
        vector<int> num;
        mx = 0;
        for(int i = 0; i < n; i++){
            cin>>x;
            if(ara[x]) ara[x] = false;
            else num.push_back(x);
            if(x < n + 5) mx = max(mx,x);

        }
        for(ans = 0; ans <= mx; ans++){
            if(ara[ans]) break;
        }
        //count for each value to ara and run array again
        cout<<ans<<"\n";


    }
    return 0;
}

