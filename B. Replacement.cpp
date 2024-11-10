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
#define ll long long
//PRINT_VARIABLE_NAME
#define PVN(variable) std::cout << #variable << " = " << variable << std::endl
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int n,x,y,m,pos,a,b;
    bool sw;
    string s,r;
    open_file;

    cin>>testCase;
    while(testCase--){
        cin>>n;
        cin.ignore();
        cin>>s;
        cin>>r;
        a = 0,b = 0;
        sw = false;
        for(int i = 0; i < n - 1; i++){
            if(r[i] == '1') a++;
            else b++;
            if(s[i] != s[i + 1]){
                sw = true;
                pos = i;
            }
        }
        if(pos + 2 < n) s[pos + 1] = s[pos + 2];

        for(int i = pos + 2; i < n && sw; i++){
            if(s[i] == s[i - 1]){
                if(s[i] == '0'){
                    s[i] = '1';
                    a--;
                }
                else{
                    s[i] = '0';
                    b--;
                }
                if(a < 0 || b < 0) sw = false;

            }
        }
        if(pos - 1 >= 0) s[pos] = s[pos - 1];
        for(int i = pos - 1; i >= 0 && sw; i--){
            if(s[i] == s[i + 1]){
                if(s[i] == '0'){
                    s[i] = '1';
                    a--;
                }
                else{
                    s[i] = '0';
                    b--;
                }
                if(a < 0 || b < 0) sw - false;
            }
        }
        if(sw) YES;
        else NO;
            


    }
    return 0;
}

