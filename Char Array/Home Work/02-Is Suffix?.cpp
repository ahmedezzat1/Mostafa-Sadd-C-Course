/*
 Homework 2: Is Suffix?
● Read 2 strings input and str. Print YES if the given str is a suffix for the string.
Otherwise, print NO
● Input ⇒ Outputs
○ ABCDEFG ABCD ⇒ NO
○ ABCDEFG ABCDEF ⇒ NO
○ ABCDEFG EFG ⇒ YES
○ ABCDEFG DEFG ⇒ YES
○ ABCDEFG BCD ⇒ NO
○ ABCDEFG DEF ⇒ NO
○ ABCDEFG ACEG ⇒ NO
○ ABCDEFG DG ⇒ NO
○ ABCDEFG GD ⇒ NO
○ ABCDEFG ABCDEFG ⇒ YES
 */
/**************** Solution start from here ***********************/
int main() {
    file();
    fast
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        string input, s;
        cin >> input >> s;

        bool isSuffix = true;

        if (s.size() > input.size())
            isSuffix = false;
        else {
            int smallEnd = s.size() - 1, bigEnd = input.size() - 1;
            for (int i = 0; i < (int) s.size(); ++i) {
                if (s[smallEnd--]!=input[bigEnd--])
                    isSuffix=false;
            }
        }
        isSuffix ? cout << "YES" : cout << "NO";
    }
}
