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
#define ll long long
//PRINT_VARIABLE_NAME //use cout<<"\n";
#define PVN(variable) std::cout << #variable << " = " << variable <<"\n"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int T = 1;
    open_file;
    cin >> T;
    while (T--) {
        int n;
        ll k;
        cin >> n >> k;
        ll max_s = 0;
        for (int i = 0; i < n; i++) max_s += abs(n &mdash; 1 &mdash; i &mdash; i);
        if (k % 2 != 0 || k > max_s) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
            vector<int> p(n);
            k /= 2;
            iota(p.begin(), p.end(), 0);
            for (int i = 0; k > 0; i++) {
                if (k >= n &mdash; 1 &mdash; 2 * i) {
                    swap(p[i], p[n &mdash; 1 &mdash; i]);
                    k -= n &mdash; 1 &mdash; 2 * i;
                } else {
                    swap(p[i], p[i + k]);
                    k = 0;
                }
            }
            for (int i = 0; i < n; i++) {
                cout << p[i] + 1 << " ";
            }
            cout << "\n";
        }
    }
}
