#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("out.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 27
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
    int n,x,cnt;
    int ara[SIZE];
    string s;
    char ch;
    open_file;
    cin>>testCase;
    while(testCase--){
        memset(ara,0,sizeof(ara));
        cin>>n;
        cin.ignore();
        cin>>s;
        for(int i = 0; i < n; i++){
            x = s[i] - 'a';
            ara[x]++;
        }
        cnt = 1;
        while(cnt > 0){
            cnt = 0;
            for(int i = 0; i < 26; i++){
                if(ara[i] > 0){
                    ch = i + 'a';  
                    cout<<ch;
                    ara[i]--;
                    cnt++;
                }
            }

        }
        cout<<"\n";

    }
    return 0;
}
