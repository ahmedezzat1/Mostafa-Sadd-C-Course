/*
 * Problem #5: Unique Numbers of unordered list
● Read integer N ( <= 900), followed by reading N integers (0 <= value <= 500)
● Print the unique list of the numbers, but preserve the given order
● Input: 13 1 5 5 2 5 7 2 3 3 3 5 2 7
● Output: 1 5 2 7 3
○ Observe: input is not sorted list
○ Observe: output preserves the original order: e.g. 5 appears before 2
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

        int frq[505]{};
        for (int i = 0; i < n; ++i) {
            if (frq[a[i]] == 0)
                cout << a[i] << " ";
            frq[a[i]]++;
        }
    }
}
