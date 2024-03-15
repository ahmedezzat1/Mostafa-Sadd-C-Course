/*
 * Practice: Special String Mapping
● Read a string and do the following conversions for its letters
○ If it is an upper letter, don’t change
○ If it is lower letter, use this map of 26 letters:
■ abcdefghijklmnopqrstuvwxyz
■ YZIMNESTODUAPWXHQFBRJKCGVL
■ E.g. a ⇒ Y and z ⇒ L
○ If it is digit, use this map of 10 letters:
■ 0123456789
■ !@#$%^&*()
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

        string str = "YZIMNESTODUAPWXHQFBRJKCGVL";
        string digit = "!@#$%^&*()";

        for (int i = 0; i < s.size(); ++i) {

            if (s[i] >= 'a' and s[i] <= 'z')
                s[i] = str[s[i] - 'a'];

            else if (s[i] >= '0' and s[i] <= '9')
                s[i] = digit[s[i] - '0'];
        }
        cout<<s;
    }
}
