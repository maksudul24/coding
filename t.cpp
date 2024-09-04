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
    int n,x,m,d,num,temp,ans;
    bool sw;
    open_file;
    cin>>testCase;
    while(testCase--){
        sw = false;
        cin>>n>>m>>d;
        if(n > m){
            sw = true;
            swap(n,m);
        }
        num = n / d;
        if(n % d != 0) num++;
        temp = num * d;
        temp = m - temp;
        if(temp > 0){
            ans = temp / d;
            if(temp % d != 0) ans++;
        }
        else ans = 0;
        ans += num;
        ans *= 2;
        if(sw){
            if(m % d == 0 && m / d == 1 && n);               
            else ans--;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
