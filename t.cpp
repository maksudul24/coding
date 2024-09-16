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
    int n,len;
    string s = "aeiou",ans;
    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n;
        ans = "";
        len = n - 5;
        for(int i = 0; i < len; i++) ans.push_back('a');
        if(len > 0) n = n - len;
        for(int i = 0; i < n; i++) ans.push_back(s[i]);
        cout<<ans<<"\n";

    }
    return 0;
}
