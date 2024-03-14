/*
 * Problem #1: Recamán's sequence
● The first terms of this sequence are 0, 1, 3, 6, 2, 7, …
○ So last term value is 7 and its index is 5 (zero based)
○ The next value is either:
■ LastValue - LastIndex - 1 if the following 2 conditions are satisfied:
● value > 0 and It did not appear before
● E.g. 7 (last value) - last index (5) - 1 = 7-5-1 = 1 (> 0 but already exists)
■ Or LastValue + LastIndex + 1 = 7+5+1 = 13
● Read integer zero-based index ([1, 200]) and print the value of this index
○ E.g. (6 ⇒ 13), (9 ⇒ 21), (17 ⇒ 25)
● Don’t use nested loops
● The series is: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21, 11, 22, 10, 23, 9, 24, 8, 25, 43
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

        int lastValue = 0, lastIdx = 0;

        int ans[205]{}, frq[1000]{};
        ans[0] = 0;

        for (int i = 1; i < 205; ++i) {
            int value = lastValue - lastIdx - 1;

            if (value <= 0 || frq[value] != 0)
                value = lastValue + lastIdx + 1;

            frq[value]++;
            lastValue = value, lastIdx = i;
            ans[i] = value;
        }

        cout << ans[n];

    }
}
