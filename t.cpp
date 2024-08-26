#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("out.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 27
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
    int n,x,len;
    int ara[SIZE],num[SIZE];
    string s;
    char ch;
    open_file;
    cin>>testCase;
    while(testCase--){
        memset(ara,0,sizeof(ara));
        len = 0;
        cin>>n;
        cin.ignore();
        cin>>s;
        for(int i = 0; i < n; i++){
            x = s[i] - 'a';
            ara[x]++;
            if(ara[x] == 1) num[len++] = x;
        }
        sort(num,num + len);
        while(len > 0){
            for(int i = 0; i < len; i++){
                    ch = num[i] + 'a';  
                    cout<<ch;
                    ara[num[i]]--;
            }
            for(int i = 0; i < len; i++){
                if(ara[num[i]] == 0){
                    len--;
                    for(int j = i; j < len; j++) num[j] = num[j + 1];
                    i--;
                }
            }

        }
        cout<<"\n";

    }
    return 0;
}
