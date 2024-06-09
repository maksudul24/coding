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


int binary_search(int ara[],int b,int e,int x)
{
    int mid;
    while(b <= e){
        mid = (b + e) / 2;
        if(ara[mid] == x) return mid;
        else if(ara[mid] > x){
            e = mid - 1;
        }
        else{
            b = mid + 1;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int testCase;
    int n,x,y,m,a,b,cnt,num,sum,temp;
    bool sw;
    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n;
    }
    return 0;
}

