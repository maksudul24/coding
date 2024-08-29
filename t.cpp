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
    int n,x,y,m,a,b,value,id,mx,len,total;
    ll int ans,temp;
    unordered_map<int,bool> mark;
    open_file;
    cin>>testCase;
    while(testCase--){
        total = 0;
        cin>>n>>m;
        for(int i = 0; i < n; i++){
            cin>>len;
            mx = -1;                
            for(int j = 0; j < len; j++){
                cin>>x;
                if(x < SIZE){
                    if(mark.find(x) == mark.end()) mark[x] = true;
                    mx = max(mx,x);
                }
            }
            id = -1;
            value = -1;
            for(int j = 0; j <= mx; j++){
                if(mark.find(j) == mark.end()){
                    if(id == -1) id = j;
                    else{
                        value = j;
                        break;
                    }
                }
            }
            if(id == -1){
                id = mx + 1;
                value = mx + 2;
            }
            else if(value == -1) value = mx + 1;
            total = max(value,total);
            mark.clear();
        }

        if(m > total){
            ans = total * (total + 1);
            temp = m - total;
            x = total + 1;
            x = 2 * x;
            temp = (x + (temp - 1)) * temp;
            ans += temp / 2;
        }
        else ans = total * (m + 1);
        cout<<ans<<"\n";

    }
    return 0;
}
