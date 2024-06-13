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
    long long int n,x,y,m,a,ans,b,cnt,num,sum,temp;
    bool sw,sw2;
   //open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n;
        sw2 = false;
        sw = true;
        a = n / 2;
        if(n % 2 != 0) b = a + 1;
        else b = a;
        if(a % 10 + b % 10 == 9) sw = false;
        while(a && sw){
            if(sw2 && a % 10 <= 5) sw = false;
            else if(a % 10 < 5) sw2 = true;
            else sw2 = false;
            a /= 10;
        }
        if(sw2) NO;
        else if(sw) YES;
        else NO;
    }
    return 0;
}
