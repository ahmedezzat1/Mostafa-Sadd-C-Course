*
 *Practice: Conc Strings
● Read two strings S and T. Print a new string that contains the following:
○ First letter of the string S followed by the First letter of the string T.
○ Second letter of the string S followed by the Second letter of the string T.
○ and so on...
● Don’t create new strings. Don’t change input content
● Input ⇒ Output
○ abc defghi ⇒ adbecfghi
○ AM CICPC ⇒ ACMICPC
 */
/**************** Solution start from here ***********************/
int main() {
    file();
    fast
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        string s, t;
        cin >> s >> t;

        int n = max(s.size(), t.size());
        for (int i = 0; i < n; ++i) {
            if (i < s.size())
                cout << s[i];
            if (i < t.size())
                cout << t[i];
        }


    }
