/*
 * Problem #5: Smallest pair
● Given a number N (<= 200) and an array A of N numbers.
● Print the smallest possible result of A[i] + A[j] + j - i , where 1  ≤  i < j  ≤  N.
● Input ⇒ Output
○ 4 20 1 9 4 ⇒ 7
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

        int smallestPair = 1e9;

        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (a[i] + a[j] + j + 1 - (i + 1) < smallestPair)
                    smallestPair = a[i] + a[j] + j + 1 - (i + 1);
            }
        }
        cout << smallestPair;
    }
}
