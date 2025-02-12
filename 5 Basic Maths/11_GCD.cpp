#include <bits/stdc++.h>
using namespace std;

int GCD(int n1, int n2) {
    int num = 1;
    for (int i = min(n1, n2); i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            num = i; // Found the greatest common divisor
            break; // No need to check further once the GCD is found
        }
    }
    return num;
}
/*
 LCM :
 int lcm;
        int n = max(n1, n2);
        int i =1;

        while (1) {
            int mul = n* i;

            if(mul % n1 == 0 && mul % n2 == 0) {
                lcm = mul;
                break;
            }
            i++;
        }

        return lcm;
    }
*/

int main() {
    int n1, n2;
    cout << "Enter the number n1 : ";
    cin >> n1;
    
    cout << "Enter the number n2 : ";
    cin >> n2;

    int ans = GCD(n1, n2);
    cout << "Answer : " << ans << endl;

    return 0;
}
