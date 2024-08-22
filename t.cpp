#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("out.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 300010
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
    int n,x,y,m,a,b,cnt,num,sum,temp;
    vector<int> alice(SIZE),bob(SIZE);
    bool sw;
    open_file;
    cin>>testCase;
    while(testCase--){
        sw = true;
        cin>>n;
        for(int i = 0; i < n; i++) cin>>alice[i];
        for(int i = 0; i < n; i++) cin>>bob[i];

        for(int i = 0, j = n - 1; i < n; i++, j--){
            if(alice[i] != bob[i] && alice[i] != bob[j]) sw = false;
            if(alice[j] != bob[j] && alice[j] != bob[i]) sw = false;
        }
        if(sw) cout<<"Bob\n";
        else cout<<"Alice\n";

    }
    return 0;
}
