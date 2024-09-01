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
    int len,x,row,n,cnt;
    bool sw,swz;
    string s;
    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n;
        cin.ignore();
        cin>>s;
        swz = false;
        row = 2;
        cnt = 0;
        sw = true;
        len = -1;

        x = sqrt(n);
        if(x * x != n) sw = false;

        for(int i = 0; i < n && sw; i++){
            if(swz){
                x = (i + 1) % len;
                if(x == 1 || x == 0){
                   if(s[i] == '0') sw = false;
                }
                else if(s[i] == '1') sw = false;
                if(x == 0) row++;
                if(row == len) swz = false;
            }
            else if(s[i] == '0' && row != len){
                len = i - 1;
                swz = true;
            }
            else if(row == len){
                if(s[i] == '0') sw = false;
                else cnt++;
            }
        }
        if(cnt != len || swz) sw = false;
        if(n == 4 && s[0] == '1' && s[1] == '1' && s[2] == '1' & s[3] == '1') sw = true;
        if(sw) YES;
        else NO;

    }
    return 0;
}
