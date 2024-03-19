/*
 * Problem #2: Fixed sliding window
● Read Integers K and N, (where K <= N). then read N < 200 integers.
● Find sub-array (consecutive numbers) of K elements that has maximum sum
● Input 3 7 1 0 3 -4 2 -6 9
○ Let’s list all sub-arrays of length 3
○ 1 0 3 ⇒ sum = 4
○ 0 3 -4 ⇒ sum = -1
○ 3 -4 2 ⇒ sum = 1
○ -4 2 -6 ⇒ sum = -8
○ 2 -6 9 ⇒ sum = 5
● Output: 4 6 5 (Sub-array from indices 4 to 6 has maximum sum of 5)
● Can you do it without nested loops? There are 2 ways
 */

/**************** Solution start from here ***********************/
int main() {
    file();
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int sum = 0, ans = 0, l = 0, r = k-1;
        for (int i = 0; i < k; ++i) {
            sum += a[i];
        }

        ans = sum;
        for (int i = 0; i < n - k; ++i) {
            sum -= a[i];
            sum += a[i + k];
            if (sum > ans)
                l = i +1, r = i+k, ans = sum;

        }

        cout << ans << ' ' << l << ' ' << r;

    }




/*********************************************************/

/*

        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int maxSum=0 , minIndx=0;

        for (int i = 0; i < k; ++i) {
            maxSum+=a[i];
        }
        int sum=maxSum;

        for (int i = k; i < n; ++i) {
            sum=sum-a[i-k] + a[i];
            if (sum>maxSum)
                maxSum=sum , minIndx =i-(k-1);
        }
        
        cout<<minIndx <<" "<<minIndx+k -1 <<' '<<maxSum<<endl;
*/
