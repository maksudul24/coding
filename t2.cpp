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
#define ll long long
//PRINT_VARIABLE_NAME //use cout<<"\n";
#define PVN(variable) std::cout << #variable << " = " << variable <<"\n"
using namespace std;

int n;

bool bi_search(int ara[],ll int num)
{
    int mid,e,b;

    b = 0;
    e = n - 1;

    while(e >= b){
        mid = (b + e) / 2;
        if(ara[mid] == num){
            return true;
        }
        else if(n > ara[mid]){
            e = mid - 1;
        }
        else{
            b = mid + 1;
        }
    }
    return false;
}


int main()
{
    
    int x;
    int ara[] = {16,8,4,2,1};

    n = 5;
    while(1){
        cin>>x;
        if(!x) break;
        if(bi_search(ara,x)) YES;
        else NO;
    }
    return 0;
}
