/*
 * Practice: Letters Frequency
● Read a string of lower/upper letters. Ignore upper letters and compute the
frequency of lower letters. Print ones that exists as below.
● Input: bAAAaaazz
● Output
○ a 3
○ b 1
○ z 2
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
        int frq[26]{};
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= 'a' and s[i] <= 'z')
                frq[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            if (frq[i]>0)
            cout << char(i + 'a') << ':' << frq[i] << endl;
        }
        
    }
}
