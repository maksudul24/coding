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

    int testCase,n,x,y,m;
    long long int x1,x2,y1,y2,a,b,tempa,tempb,temp;
    long long int la,lb,ln,ltemp;
    bool sw,sw2;
    open_file;
    cin>>testCase;
    while(testCase--){
        sw = false;
        sw2 = false;
        cin>>a>>b>>x1>>y1>>x2>>y2;
        if(x1 > x2) swap(x1,x2);
        if(y1 > y2) swap(y1,y2);
        if(x1 + 2 * a == x2 || x1 == x2){
            if(y1 == y2) sw = true;
            if(y1 + 2 * b == y2) sw = true;
            if(a != b) sw2 = true;

        }
        if(x1 + 2 * b == x2 || x1 == x2){
            if(y1 == y2) sw = true;
            if(y1 + 2 * a == y2) sw = true;
            if(a != b) sw2 = true;

        }
        tempa = a + b;
        tempb = abs(a - b);
        if(x1 + tempa == x2 || x1 + tempb == x2){
            if(y1 + tempa == y2 || y1 + tempb == y2) sw = true;
            if(a == b && (x1 + tempa == x2 || y1 + tempa == y2)) sw2 = true;
        }
        if(sw){
            if(sw2 && a == b){
                cout<<"1\n";
            }
            else cout<<"2\n";
        }
        else cout<<"0\n";

    }
    return 0;
}
