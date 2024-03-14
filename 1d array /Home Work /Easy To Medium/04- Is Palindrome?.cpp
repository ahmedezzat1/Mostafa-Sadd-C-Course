Problem #4: Is Palindrome?
● Read integer N (< 1000), then read N integers of an array.
● Determine if the array is palindrome or not.
● An array is called palindrome if it reads the same backward and forward
○ for example, arrays { 1 } and { 1,2,3,2,1 } are palindrome
○ while arrays { 1,12 } and { 4,7,5,4 } are not.
● Inputs ⇒ Outputs
○ 5 1 3 2 3 1 ⇒ YES
○ 4 1 2 3 4 ⇒ NO
/**************** Solution start from here ***********************/
int main() {
    file();
    fast
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool isPalindrome = true;
        for (int i = 0; i < n / 2; ++i) {
            if (a[i] != a[n - 1 - i])
                isPalindrome = false;
        }
        isPalindrome ? cout << "YES" : cout << "NO";
    }

}
