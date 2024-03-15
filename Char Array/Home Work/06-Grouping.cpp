*
 * Homework 6: Grouping
● Read a string, then divide it to consecutive groups of same letter. Print each
group
● Input ⇒ outputs.
○ “111222aabbb” ⇒ 111 222 aa bbb
○ HHHH ⇒ HHHH
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
        int n=s.size();
        s+='*';
        for (int i = 0; i <n; ++i) {
            if (s[i]==s[i+1])
                cout<<s[i];
            else
                cout<<s[i]<<' ';
        }
    }
}
