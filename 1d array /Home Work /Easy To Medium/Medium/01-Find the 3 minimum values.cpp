
/*
 * Problem #1: Find the 3 minimum values
● Read integer N (>= 3), then read N integers. Find the 3 lowest numbers.
○ Don’t change the array content
○ Don’t iterate on the array more than once
● Input ⇒ Output
○ 5 4 1 3 10 8 ⇒ 1 3 4
○ 3 7 9 -2 ⇒ -2 7 9
 */
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

        int firstMin = 1e9, secMin = 1e9, thirdMin = 1e9;

        for (int i = 0; i < n; ++i) {
            if (a[i] < firstMin)
                thirdMin = secMin, secMin = firstMin, firstMin = a[i];
            else if (a[i] < secMin)
                thirdMin = secMin, secMin = a[i];
            else if (a[i] < thirdMin)
                thirdMin = a[i];
        }

        cout << firstMin << ' ' << secMin << ' ' << thirdMin;

    }
}
