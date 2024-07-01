#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("output.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: "<<__LINE__<<"\n"
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
    int x,y,a,b;
    int ans[SIZE];
    bool sw,prt;
    ll int sum,k,n,m,len;
    open_file;
    cin>>testCase;
    while(testCase--){
        sw = true;
        cin>>n>>k;
        if(k % 2 != 0) sw = false;
        else{
            if(n % 2 != 0) prt = false;
            else prt = true;

            if(prt) a = 2;
            else a = 4;
            sum = a + (n - 1) * 4;
            sum *= n;
            sum /= 2;
            if(k > sum) sw = false;
            if(sw){
                b = n; 
                if(k % 4 == 0){
                    if(prt){
                        a = 2;
                    }
                    else a = 4;
                }
                else{
                    a = 2;
                    if(!prt){
                        ans[n - 1] = n;
                        b--;
                    }
                }
                x = b / 2;
                len = a + (x - 1) * 4;
                a = 1;
                m = k;
                while(len >= 0){
                   if(m >= len){
                       ans[a - 1] = b;
                       ans[b - 1] = a;        
                       m -= len;
                   }
                   else{
                       ans[a - 1] = a;
                       ans[b - 1] = b;
                   }
                   len -= 4;
                   a++;
                   b--;
                }
                if(m != 0) sw = false;
            }
        }
        if(sw){
            YES;
            for(int i = 0; i < n; i++){
                 cout<<ans[i];
                    if(i != n - 1) cout<<" ";
            }
            cout<<"\n";
         }
         else NO;

    }
    return 0;
}

