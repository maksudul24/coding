#include<bits/stdc++.h>
#define open_file freopen("input.txt","r",stdin)
#define output_file freopen("output.txt","w",stdout)
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
    int n,x,y,m,a,b,cnt,num,sum,temp;
    bool sw;
    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n;
        for(int i = 0; i < n; i++) cin >>ara[i];
        a = 0;
        b = n - 1;
        m = n;
        while(a <= b){
            if((ara[a] + 1 == ara[b] + m) || mark[ara[b] + m]){
                x = ara[a] + 1;
                a++;
                mark[x] = true;
                ans.push_back(x);
                m--;
            }
            else{
                x = ara[b] + m;
                mark[x] = true;
                b--;
            }
       }
       sort(ans.begin(),ans.end());
       for(int i = ans.size() - 1; i >= 0; i--){
           cout<<ans[i];
           if(i) cout<<" ";
       }
       cout<<"\n";
    }
    return 0;
}
