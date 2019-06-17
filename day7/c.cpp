#include <bits/c++io.h>

using namespace std;

int main() {
    int t, r, c, k;
    cin>>t;
    for (int i = 1; i<=t; i++) {
        char d;
        int a[101][101];
        cin>>r>>c>>k;
        a[0][0] = "out";
        a[r+1][c+1] = "out";
        for (int j=1; j<=r; j++){
            for (int l = 1; l<=c; l++) {
                cin>>d;
                a[j][l]=d;
            }
        }
        int cnt = 0;
        for (int j=0; j<=r; j++){
            for (int l = 0; l<=c; l++) {
                if (a[j][l]=="S"){
                        cnt++;
                        if (a[j+1][l]=="out" && cnt<=k){
                            cout<<"POSSIBLE"<<"\n";
                        }



                }

            }
        }


        cout<<"Case"<<" "<<"#"<<i<<":"<<" "<<"POSSIBLE"<<endl;
    }
    return 0;
}
