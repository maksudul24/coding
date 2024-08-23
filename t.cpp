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
    int n,x,y,m,l,icl,k,ick;
    vector<int> alice(SIZE),bob(SIZE);
    bool sw;
    open_file;
    cin>>testCase;
    while(testCase--){
        sw = true;
        cin>>n;
        for(int i = 0; i < n; i++) cin>>alice[i];
        for(int i = 0; i < n; i++) cin>>bob[i];
        if(alice[0] == bob[0]){
            k = 0;
            ick = 1;
        }
        else if(alice[0] == bob[n - 1]){
            k = n - 1;
            ick = -1;
        }
        else sw = false;

        if(alice[n - 1] == bob[0]){
            l = 0;
            icl = 1;
        }
        else if(alice[n - 1] == bob[n - 1]){
            l = n - 1;
            icl = -1;
        }
        else sw = false;

        for(int i = 0, j = n - 1; i < n && sw; i++, j--){
            if(alice[i] != bob[k]) sw = false;
            else k += ick;

            if(alice[j] != bob[l]) sw = false;
            else l += icl;
        }
        if(sw) cout<<"Bob\n";
        else cout<<"Alice\n";

    }
    return 0;
}
