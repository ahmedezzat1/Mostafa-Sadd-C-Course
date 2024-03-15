/*
 * Homework 1: Is Prefix?
● Read 2 strings input and str. Print YES if the given str is a prefix for the string.
Otherwise, print NO
● Input ⇒ Outputs
○ ABCDEFG ABCD ⇒ YES
○ ABCDEFG ABCDEF ⇒ YES
○ ABCDEFG EFG ⇒ NO
○ ABCDEFG DEFG ⇒ NO
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
        string input, str;
        cin >> input >> str;

        int n = input.size(), m = str.size();
        bool isPrefix = true;

        if (m > n)
            isPrefix = false;
        else {
            for (int i = 0; i < m; ++i) {
                if (input[i] != str[i])
                    isPrefix = false;

            }
        }

        isPrefix ? cout << "YES" : cout << "NO";
    }
}
