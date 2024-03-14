
/*
Problem #6: Sorting numbers
● Read integer N ( <= 900), followed by reading N integers (0 <= value <= 500)
● Print the sorted list of the numbers
● Input: 13 1 5 5 2 5 7 2 3 3 3 5 2 7
● Output: 1 2 2 2 3 3 3 5 5 5 5 7 7
● Give your most efficient trial
○ You don’t need to google how to sort numbers
○ Hint: max value in the array is 500
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
            frq[a[i]]++;
        }

        for (int i = 0; i < 505; ++i) {
            for (int j = 0; j < frq[i]; ++j) {
                cout << i << ' ';
            }
        }

    }
}
