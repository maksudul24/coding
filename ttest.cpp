#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("out.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 100010
#define MOD 1000000009
//PRINT_VARIABLE_NAME //use cout<<"\n";
#define PVN(variable) std::cout << #variable << " = " << variable <<"\n"
using namespace std;


int binary_search(int ara[],int b,int e,int x)
{
    int mid;
    while(b <= e){
        mid = (b + e) / 2;
        if(x == ara[mid]) return mid;
        else if(x > ara[mid]){
            if(x < ara[mid + 1])  return mid;
            b = mid + 1;
        }
        else{
            if(x > ara[mid - 1]) return mid - 1;
            e = mid - 1;
        }
    }
    return mid;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int n,x,y,m,a,b,q,k;
    int ara[SIZE],num[SIZE];
    ara[0] = 0;
    num[0] = 0;
    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n>>k>>q;
        for(int i = 1; i <= k; i++) cin>>ara[i];
        for(int i = 1; i <= k; i++) cin>>num[i];
        while(q--){
            cin>>x;
            a = binary_search(ara,0,k,x);
            if(ara[a] != x){
                x = num[a] + ((num[a + 1] - num[a]) / (ara[a + 1] - ara[a])) * (x - ara[a]);
            }
            else x = num[a];
            cout<<x;
            if(q) cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

