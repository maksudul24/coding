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
    int n,px,py,qx,qy;
    bool sw;
    ll int a,b,c,x,y,z,qa,qb,qc,pa,pb,pc,temp,disPQ,disT;
    double p,q,temp1,temp2,tempa,tempb; 
    vector<pair<int,int> > ara; 
    open_file;
    cin>>testCase;
    while(testCase--){
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>px>>py;
            ara.push_back(make_pair(px,py));
        }
        cin>>px>>py>>qx>>qy;
        sw = true;
        //equation of p and q point
        a = py - qy;
        b = qx - px;
        c = px * a + py * b;
        
        //equation of horizontal line on p point
        pa = b;
        pb = -1 * a;
        pc = px * pa + py * pb;

        // equation of horizontal line on q point
        qa = b;
        qb = -1 * a;
        qc = qx * qa + qy * qb;
        
        //distance from p to q
        disPQ = a * a + b * b;
      //  disPQ = sqrt(temp * 1.0);

        for(int i = 0; i < n && sw; i++){
            temp = pa * ara[i].first + pb * ara[i].second;
            if(temp >= pc){
                temp = qa * ara[i].first + qb * ara[i].second;
                if(temp >= qc){
                    x = qx - ara[i].first;
                    y = qy - ara[i].second;
                    disT = x * x + y * y;
                    if(disPQ >= disT) sw = false;
                }
                else{
                    x = b;
                    y = -1 * a;
                    z = x * ara[i].first + y * ara[i].second;

                    p = ((y * c - b * z) * 1.0) / ((a * y - x * b) * 1.0); 
                    q = ((x * z - x * c) * 1.0) / ((a * y - x * b) * 1.0); 

                    tempa = p - ara[i].first;
                    tempb = q - ara[i].second;
                    temp1 = tempa * tempa + tempb * tempb;

                    tempa = p - px;
                    tempb = q - py;
                    temp2 = tempa * tempa + tempb * tempb;

                    if(temp2 >= temp1) sw = false;
                    
                }

            }
        }
        if(sw) YES;
        else NO;
        ara.clear();

    }
    return 0;
}
