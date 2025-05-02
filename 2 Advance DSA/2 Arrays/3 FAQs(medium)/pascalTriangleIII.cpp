#include <bits/stdc++.h>
using namespace std;
class Solution {
   private:
    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        cout << "row : " << row << endl;
        for (int i = 1; i < row; i++) {
            ans = ans * (row - i);
            ans = ans / i;
            cout << "At i : " << i << " ans : "<< ans << endl;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

   public:
    vector<vector<int> > pascalTraingleIII(int n) {
        vector<vector<int> > ans;
        for (int i = 1; i <= n; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    Solution sol;

    vector<vector<int> > pascalPrint = sol.pascalTraingleIII(n);
    cout << "Print the Pascal Triangle : " << endl;
    for (int i = 0; i < pascalPrint.size(); i++) {
        for (int j = 0; j < pascalPrint[i].size(); j++) {
            cout << pascalPrint[i][j] << " ";
        }
        cout << endl;
    }
}