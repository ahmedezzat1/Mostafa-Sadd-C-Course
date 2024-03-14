/*
 * Problem #2: Replace MinMax
● Read an integer N (< 200), then read N integers.
○ Assume all values [0, 2000]
● Print the array after doing the following operations:
○ Find minimum number in these numbers.
○ Find maximum number in these numbers.
○ Replace each minimum number with maximum number and Vise Versa.
● Input ⇒ Output
○ 7 4 1 3 10 8 10 10 ⇒ 4 10 3 1 8 1 1
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

        int minVal = a[0], maxVal = a[0];
        
        for (int i = 0; i < n; ++i) {
            if (a[i] < minVal)
                minVal = a[i];
            else if (a[i] > maxVal)
                maxVal = a[i];
        }
        for (int i = 0; i < n; ++i) {
            if(a[i]==minVal)
                a[i]=maxVal;
            else if (a[i] == maxVal)
                a[i]=minVal;
            
            cout<<a[i]<<' ';
        }
    }
}
