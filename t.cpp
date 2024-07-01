#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("output.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 2010
#define MOD 1000000009
#define ll long long
//PRINT_VARIABLE_NAME //use cout<<"\n";
#define PVN(variable) std::cout << #variable << " = " << variable <<"\n"
using namespace std;

ll int max_number;
int ara[SIZE];
int n;


int gcd(ll int a,ll int b)
{
    ll int temp;
    if(b > a){
        temp = a;
        a = b;
        b = temp;
    }
    while(a && b){
        a = a % b;
        temp = a;
        a = b;
        b = temp;
    }
    return a;
}

bool bi_search(ll int num)
{
    int mid,e,b;

    b = 0;
    e = n - 1;

    while(e >= b){
        mid = (b + e) / 2;
        if(ara[mid] == num){
            return false;
        }
        else if(num > ara[mid]){
            e = mid - 1;
        }
        else{
            b = mid + 1;
        }
    }
    return true;
}

int lcmcount(ll int num,int i,int cnt)
{
    if(i >= n){
        if(bi_search(num)) return cnt;
        else return 0;
    }
    if(num > max_number) return  cnt + n - i;

    ll int temp;

    for(; i < n; i++){
        if(num % ara[i] == 0) cnt++;
        else break;
    }
    if(i < n){
        temp = gcd(num,ara[i]);
        temp = num / temp;
        temp = ara[i] * temp;
        cnt  = max(lcmcount(temp,i + 1,cnt + 1),lcmcount(num,i + 2,cnt));
    }
    else{
        if(!bi_search(num)) cnt = 0;
    }
    return cnt;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int x,y,m,a,b,cnt,sum,mx,pos;
    ll int temp,num,prev;
    open_file;
    cin>>testCase;
    while(testCase--){
        mx = 0;
        max_number = 0;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>ara[i];
            if(ara[i] > max_number) max_number = ara[i];
        }
        sort(ara,ara + n,greater<int>());
        for(int i = 0; i < n - 1; i++){
            PVN(ara[i]);
            x = lcmcount(ara[i],i + 1,1);
            PVN(x);
            mx = max(x,mx);
            if(mx > n - i - 1) break;
        }
        cout<<mx<<"\n";
    }
    return 0;
}


