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

    int testCase;
    int n,x,y,m,k,len,a,b,cnt,min_v,p,num;
    bool sw;
    int pos[SIZE],val[SIZE];
    open_file;
    cin>>testCase;
    while(testCase--){
        sw = true;
        min_v = INF;
        cin>>n>>k;
        for(int i = 0; i < n; i++){
            cin>>val[i];
        }
        for(int i = 0; i < n; i++){
            cin>>pos[i];
            x = abs(pos[i]);
             if(x < min_v){
                 p = i;
                 min_v = x;
             }
        }
        cnt = k;
        num = 0;
        a = p - 1, b = p + 1;
        while(1){
            val[p] = val[p] - cnt;
            if(val[p] < 0) cnt = -1 * val[p];
            else{
                num += (val[p] / k) + 1;
                if(val[p] % k != 0){
                     cnt = (val[p] % k) + k;
                     num++;
                }
                else cnt = k;
            }
            if(num > abs(pos[p])){
                sw = false;
                break;
            }

                if(a >= 0 && b < n){
                   if(abs(pos[a]) < abs(pos[b])){
                       p = a;
                       a--;
                   }
                   else{
                     p = b;
                     b++;
                   }
                }
                else if(a < 0 && b < n){
                    p = b;
                    b++;
                }
                else if(a >= 0 && b >= n){
                    p = a;
                    a--;
                }
                else break;
            if(num > abs(pos[p])){
                sw = false;
                break;
            }

        }
        if(sw) YES;
        else NO;
     }
     return 0;
}
