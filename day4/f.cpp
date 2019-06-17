#include <iostream>
#include <string>

using namespace std;

    string findPalindrome(string n){
        string res = n;
            for (int i = n.length()-1; i>=0; i--)
                res+=n[i];
            return res;

    }

int main() {
    string n;
    cin>>n;
    cout<<findPalindrome(n);
return 0;
}
