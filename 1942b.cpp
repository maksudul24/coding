#include<bits/stdc++.h>
#define open_file freopen("input.txt","r",stdin)
#define output_file freopen("output.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 200001
#define MOD 1000000009
//PRINT_VARIABLE_NAME //use cout<<"\n";
#define PVN(variable) std::cout << #variable << " = " << variable <<"\n"
using namespace std;

int findpos(bool ara[],int n,int i)
{
    for(int j = i; j <= n; j++){
        if(ara[i]) return i;
    }
    return n + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int n,x,y,m,a,b,cnt,num,sum,temp,mex;
    bool sw;
    bool mark[SIZE];
    open_file;
    cin>>testCase;
    while(testCase--){
        memset(mark,true,sizeof(mark));
        mex = 0;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>x;
            if(x < 0){
                y = mex + (x *-1);
                mark[y] = false;
            }
            else{
                y = mex - x;
                if(y > 0)
            }
        }
    }
    return 0;
}
