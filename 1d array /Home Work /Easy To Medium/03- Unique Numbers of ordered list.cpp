/*
 * Problem #3: Unique Numbers of ordered list
● Read integer N ( < 1000), followed by reading N integers (0 <= value <= 500)
● The N numbers are ordered from small to large
● Print the unique list of the numbers, but preserve the given order
● Input: 12 1 1 2 2 2 5 6 6 7 8 9 9
● Output: 1 2 5 6 7 8 9
○ Observe: input is sorted list
● Optional Constraints:
○ Don’t use nested loops!
○ Use only 1 single array
○ Or Do it without even using arrays at all
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
            if (frq[i])
                cout << i << ' ';
        }
    }
}
