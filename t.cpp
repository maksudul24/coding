#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("out.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 510
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
    int n;
    string s;
    int ara[SIZE];
//    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n;
        cin.ignore();
        for(int i = 0; i < n; i++){
            cin>>s;
            for(int j = 0; j < 4; j++){
                if(s[j] == '#') ara[i] = j + 1;
            }
        }
        for(int i = n - 1; i >= 0; i--){
            cout<<ara[i];
            if(i) cout<<" ";
        }
        cout<<"\n";

    }
    return 0;
}
