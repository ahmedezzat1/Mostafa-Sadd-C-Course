/*
 * Problem #1: Compressing
● Read a string of letters and then compress each group of same letter
○ E.g. if the sub-string is cccc ⇒ c4
○ Use _ between each group
● Input ⇒ Outputs
○ ccccDDDxxxxxxxxe ⇒ c4_D3_x8_e1
○ xxxxxxxx ⇒ x8
 */
/**************** Solution start from here ***********************/
int main() {
    file();
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {

        string s;
        cin >> s;
        int n = s.size();
        s += '$';
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            cnt++;
            if (s[i] != s[i + 1]) {
                cout << s[i] << cnt;
                if (i != n - 1)
                    cout << '_';
                cnt = 0;
            }
        }
    }
}
