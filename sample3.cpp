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
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase,n,m,k,ans;
    int sum,max_v,cnt,temp1,temp2,si,sj,x;
    int ara[SIZE];
//    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n;
        m = 1;
        sum = 0;
        for(int i = 0; i < n; i++){
            cin>>x;
            ara[i] = x;
            sum += (x * m);
            m *= -1;
        }
        k = 0;
        if(sum == 0) k = n + 1;
        for(int i = 0,j = n - 1;k < n; k++){
            if(sum == 0) break;
            if(i % 2 != 0) si = 1;
            else si = -1;
            if(j % 2 != 0) sj = 1;
            else sj = -1;
            temp1 = sum + (ara[i] * si);
            temp2 = sum + (ara[j] * sj);
            if(abs(temp1) < abs(temp2)){
               i++;
               sum = temp1;
            }
            else{
                j--;
                sum = temp2;
            }
        }
        if(k == n) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
