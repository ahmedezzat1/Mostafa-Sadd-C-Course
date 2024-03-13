
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

        int maxVal = 0, secMax = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] > maxVal)
                secMax = maxVal, maxVal = a[i];
            else if (a[i] > secMax)
                secMax = a[i];
        }
        cout << maxVal << " " << secMax;

    }
}
