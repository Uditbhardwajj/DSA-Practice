#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:

    int NcR(int N, int r) {

        int res = 1;

        for(int i = 0; i < r; i++) {
            res = res * (N - i);
            res = res / (i + 1);
        }

        return res;
    }

    vector<int> getRow(int rowIndex) {

        vector<int> row;

        for(int col = 0; col <= rowIndex; col++) {

            row.push_back(
                NcR(rowIndex, col)
            );
        }

        return row;
    }
};