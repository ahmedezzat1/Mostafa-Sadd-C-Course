/*Problem #3: Find most frequent number
● Read an Integer N, then read N <= 200 integers. Find the value that repeated
        the most number of times.
○ Each integer is -500 <= value <= 270
● Example for array: 7 -1 2 -1 3 -1 5 5
○ -1 repeated 3 times: the largest
● Don’t use nested loops
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

        int frq[800]{};

        for (int i = 0; i < n; ++i) {
            frq[a[i] + 500]++;
        }
        int maxFrq = 0, val = 0;
        for (int i = 0; i < 800; ++i) {
            if (frq[i] > maxFrq)
                maxFrq = frq[i], val = i - 500;
        }

        cout << val << " Repeated " << maxFrq << " Times";
    }
}
