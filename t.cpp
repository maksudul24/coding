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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int n,x,y,m;

  //  open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n>>m;
        cout<<"1";
        if(n == 2){
            if(m == 9) cout<<" 3 9";
            else if(m == 6) cout<<" 3";
            else if(m % 2) cout<<" "<<m;
        }
        else if(n < 6){
            cout<<" 3";
            if(m == 5) cout<<" 5";
            cout<<" 7";
            if(m % 3 == 0) cout<<" 9";
        }
        else{
            cout<<" 3";
            if(m == 5) cout<<" 5";
            cout<<" 7 9";
        }
        cout<<"\n";


    }
    return 0;
}
