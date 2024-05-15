#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("output.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 105
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
    int ara[SIZE];
    open_file;
    cin>>testCase;
    while(testCase--){
        cnt = 0;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>ara[i];
        }
        sort(ara,ara+n);
        temp = ara[0];
        x = 1;
        for(int i = 1; i < n;i++){
            if(ara[i] == temp) x++;
            else{
                cnt += x / 3;
                x = 1;
                temp = ara[i];
            }
        }
        cnt += x / 3;
        cout<<cnt<<"\n";
    }
    return 0;
}
