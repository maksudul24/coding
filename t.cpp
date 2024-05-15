#include<bits/stdc++.h>
#define open_file freopen("in.txt","r",stdin)
#define output_file freopen("out.txt","w",stdout)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define dbug cout<<"Line: ",__LINE__<<"\n";
#define INF 2147483647
#define M_INF -2147483648
#define SIZE 100
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
    int n,x,y,m,a,b,cnt,prev;
    bool sw,sw2,sw3;
    string s;
    open_file;
    cin>>testCase;
    cin.ignore();
    while(testCase--){
        sw = true;
        sw2 = true;
        sw3 = false;
        cnt = 0;
        cin>>s;
        n = s.size();
        prev = '5';
        for(int i = 0; i < n; i++){
            if(sw && s[i] == '0'){
                if(sw2){
                    cnt++;
                    sw2 = false;
                }
                else if(sw3){
                    cnt++;
                    sw = false;
                }
            }
            else if(sw && s[i] == '1' && sw2 == false) sw3 = true;
            else if(s[i] != prev) cnt++;
            prev = s[i];
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
