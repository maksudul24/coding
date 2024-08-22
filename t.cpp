#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("out.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 120
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
    int n,x,y,m,ans,mx;
    int ara[SIZE];
    open_file;
    cin>>testCase;
    while(testCase--){
        memset(ara,0,sizeof(ara));
        mx = -1;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>x;
            ara[x]++;
            mx = max(mx,ara[x]);
        }
        cout<<n - mx<<"\n";
    }
    return 0;
}
