/*
 * Homework 3: Is Substring?
● Read 2 strings input and str. Print YES if the given str is a substring for the
string. Otherwise, print NO
● Input ⇒ Outputs
○ ABCDEFG ABCD ⇒ YES
○ ABCDEFG ABCDEF ⇒ YES
○ ABCDEFG EFG ⇒ YES
○ ABCDEFG DEFG ⇒ YES
○ ABCDEFG BCD ⇒ YES
○ ABCDEFG DEF ⇒ YES
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
    cin >> tc;
    while (tc--) {
        string s , t;
         cin>>s>>t;

         int n= s.size()  , m = t.size();

         bool isSubstring= false;

        if (m>n)
            isSubstring=false;
        else
        {
            for (int i = 0; i <n-m+1 ; ++i) {
                bool ok=true;

                for (int j =0; j < m; ++j) {
                    if (s[i+j]!=t[j])
                        ok=false;
                }
                if (ok)
                    isSubstring=true;
            }

        }
        isSubstring? cout<<"YES\n":cout<<"NO\n";

    }
}
