#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char a;
    string s1;
    cin>>a;
    cin>>s1;
    if (a=='R') {
        for (int i = 0; i<s1.length(); i++) {
            for (int j = 0; j<s.length(); j++) {
                if (s1[i] == s[j])
                    cout<<s[j-1];
            }
        }
    }
    else {
            for (int i = 0; i<s1.length(); i++) {
            for (int j = 0; j<s.length(); j++) {
                if (s1[i] == s[j])
                    cout<<s[j+1];
            }
        }

    }
return 0;
}
