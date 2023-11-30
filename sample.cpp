#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //use "\n" for next line

    int t,n;

  //  open_file;
    cin>>t;
    while(t--){
        cin>>n;
        if(n % 3 != 0){
            cout<<"First\n";
        }
        else cout<<"Second\n";
    }
    return 0;
}

