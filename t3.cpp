#include<bits/stdc++.h>
#define open_file freopen("input.txt","r",stdin)
#define output_file freopen("in.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 500010
#define MOD 1000000009
//PRINT_VARIABLE_NAME //use cout<<"\n";
#define PVN(variable) std::cout << #variable << " = " << variable <<"\n"
using namespace std;

struct typ{
    int i,x;
    char c;
};

bool comp(typ A,typ B)
{
    if(A.x == B.x) return A.i > B.i;
    else return A.x < B.x;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int n,x,y,m,a,b,cnt,num,sum,temp;
    string s;
   open_file;
    cin>>s;
    n = s.size();
    typ ara[n];
    cnt = 0;
    for(int i = 0; i < n; i++){
        ara[i].i = i;
        ara[i].x = cnt;
        ara[i].c = s[i];
        if(s[i] == '(') cnt++;
        else cnt--;
    }
    sort(ara,ara + n,comp);
    for(int i = 0; i < n; i++){
        cout<<ara[i].c;
    }
    cout<<"\n";
    return 0;
}
