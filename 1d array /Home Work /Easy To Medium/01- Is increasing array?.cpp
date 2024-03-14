/*
 * Problem #1: Is increasing array?
● Read an Integer N, then read N (<= 200) integers.
● Print YES if the array is increasing.
○ An array is increasing if every element is >= the previous number
● Inputs
○ 4 1 2 2 5 ⇒ YES
○ 5 1 0 7 8 9 ⇒ NO [0 is < 1, the previous number]
○ 2 -10 10 ⇒ YES
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

        bool isIncreasing = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] < a[i - 1])
                isIncreasing = false;
        }
        isIncreasing ? cout << "YES" : cout << "NO";
    }
}
