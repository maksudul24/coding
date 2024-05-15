#include<bits/stdc++.h>
#define open_file freopen("input.txt","r",stdin)
#define output_file freopen("output.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 300010
#define MOD 1000000009
//PRINT_VARIABLE_NAME //use cout<<"\n";
#define PVN(variable) std::cout << #variable << " = " << variable <<"\n"
using namespace std;

struct typ{
    int x,i;
};

bool comp(typ A,typ B)
{
    if(A.x == B.x) return (bool) (A.i < B.i);
    else return (bool) (A.x > B.x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int n,x,y,m,a,b,cnt,prevPos,prev,sum,temp;
    bool sw;
    vector<int> ans;
    typ num[SIZE];
    int ara[SIZE];
    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>ara[i];
            ara[i] += i + 1;
            num[i].i = i;
            num[i].x = ara[i];
        }
        sort(num,num + n,comp);
        a = 0, b = 1;
        prev = -1;
        prevPos = 0;
        while(a < n && prevPos < n){
            if(num[a].i < prevPos){
                a++;
                continue;
            }
            if(num[a].x == prev) cnt = 1;
            else cnt = 0;
            prev = num[a].x - cnt;
            for(int i = prevPos; i <=  num[a].i; i++){
                ans.push_back(ara[i] - cnt);
            }
            prevPos = num[a].i + 1;
            a++;
        }
        sort(ans.begin(),ans.end());
        prev = -1;
        for(int i = ans.size() - 1; i >= 0;i--){
            if(ans[i] != prev){
                cout<<ans[i];
                if(i) cout<<" ";
            }
            prev = ans[i];
        }
        cout<<"\n";
        ans.clear();
    }
    return 0;
}
