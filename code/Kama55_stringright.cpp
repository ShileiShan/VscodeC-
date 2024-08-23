#include <iostream>
#include <algorithm>
using namespace std;

// method 1
int main(){
    int sr_len;
    string s;
    cin >> sr_len;
    cin >> s;
    int s_len;
    s_len = s.length();
    if (s_len <= sr_len) {
        cout << s;
    }
    else {
        string s1 = s.substr(0, s_len - sr_len);
        // cout << s1 << endl;
        string s2 = s.substr(s_len - sr_len, s_len);
        // cout << s2;
        string s3 = s2 + s1;
        cout << s3;
    }
    return 0;
}

// method 2 
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int sr_len;
    string s;
    cin >> sr_len;
    cin >> s;
    int s_len;
    s_len = s.length();
    if (s_len <= sr_len) {
        cout << s;
    }
    else {
        reverse(s.begin(), s.end());
        reverse(s.begin(), s.begin() + sr_len);
        reverse(s.begin() + sr_len, s.end());
        cout << s;
    }
    return 0;
}