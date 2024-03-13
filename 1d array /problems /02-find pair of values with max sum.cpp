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
        int idx1 = 0, idx2 = 0, sum = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (a[i] + a[j] > sum and i != j) {
                    sum = a[i] + a[j];
                    idx1 = i;
                    idx2 = j;
                }
            }
        }

        cout << sum << " " << idx1 << " " << idx2 << endl;

    }
}
