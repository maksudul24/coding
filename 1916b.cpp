#include<bits/stdc++.h>
#define open_file freopen("input.txt","r",stdin)
#define output_file freopen("output.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 2025
#define MOD 1000000009
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase,n,m,k,ans;
    int sum,x,a,b;
    long long int temp;
    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n>>m;
        a = n;
        b = m;
        if(a > b) swap(a,b);
        while(a){
            temp = b % a;
            if(temp == 0) break;
            b = a;
            a = temp;
        }
        if(b == m || b == n){
           temp = m * n;
        }
        else{
            temp = m * n;
            temp = temp / b;
        }
        cout<<temp<<"\n"; 
    }
    return 0;
}
