/*
 *
 Practice: Find most frequent number
● Read an Integer N, then read N <= 200 integers. Find the value that repeated
the most number of times.
○ Each integer is 0 <= integer <= 150
● Example for array: 1 2 1 3 1 5 5
○ 1 repeated 3 times: the largest
○ 2 repeated 1 time
○ 5 repeated 2 times
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

        int frq[200]{};
        for (int i = 0; i < n; ++i) {
            frq[a[i]]++;
        }
        int val = 0, mostFrq = 0;

        for (int i = 0; i < 200; ++i) {
            if (frq[i] > mostFrq)
                val = i, mostFrq = frq[i];
        }

        cout << val << " Repeted " << mostFrq << endl;
    }
}
