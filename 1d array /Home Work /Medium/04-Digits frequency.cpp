/*
 * Problem #4: Digits frequency
● Read an Integer N, then read N <= 200 integers. For all the digits from 0 to 9,
we want to know how many times appeared
○ Input 2 78 307
○ Output:
○ 0 1
○ 1 0 [digit 1 never appeared]
○ 2 0
○ 3 1
○ 4 0
○ 5 0
○ 6 0
○ 7 2 [digit 7 appeared twice]
○ 8 1
○ 9 0
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

        int frq[10]{};
        for (int i = 0; i < n; ++i) {

            while (a[i]) {
                frq[a[i] % 10]++;
                a[i] /= 10;
            }
        }

        for (int i = 0; i <= 9; ++i) {
            cout << i << ':' << frq[i] << endl;
        }


    }
}
