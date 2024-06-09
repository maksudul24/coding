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
    int n,x,y,m,a,b,cnt,num,sum,temp;
    bool sw,sw2;
    string s;
    char prev;
    open_file;
    cin>>testCase;
    while(testCase--){
        sw = true;
        sw2 = false;
        prev = 255;
        cin>>n;
		cin.ignore();
		cin>>s;
		for(int i = 0; i < n; i++){
		    if(s[i] >= 'a' && s[i] <= 'z'){                
                if(prev >= '0' && prev <= '9') prev = s[i];
                else if(s[i] > prev){
                    sw = false;
                    break;
                }
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                if((s[i] > prev) || (prev >= 'a' && prev <= 'z')){
                    sw = false;
                    break;
                }

            }
            else{
                sw = false;
                break;
            }
            prev = s[i];
        }
        if(sw) YES;
        else NO;
	}
    return 0;
}
