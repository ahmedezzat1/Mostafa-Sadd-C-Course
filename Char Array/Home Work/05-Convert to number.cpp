/*
 * Homework 5: Convert to number
● Read a string of 6 letters maximum, convert it to int then print
○ the number, the number multiplied by 3
● Input ⇒ output
○ “100” ⇒ 100 300
○ “0200” ⇒ 200 600
 */
/**************** Solution start from here ***********************/
int main() {
    file();
    fast
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        string s;
        cin >> s;

        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            ans *= 10;
            ans += s[i] - '0';
        }
        cout << ans << ' ' << ans * 3;

    }
}
