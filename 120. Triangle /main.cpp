/*Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

For example, given the following triangle

[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]

The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).

Note:
Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.
 */

#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int answer=triangle[0][0];
        int aa=triangle[0][0];
        for(int i=1;i<triangle.size();i++){

        }
        return aa;
    }


};
int main() {
    Solution solution;
    vector<vector<int>> S = {{2},{3,4},{6,5,7},{4,1,8,3}};
    cout<<solution.minimumTotal(S);
    return 0;
}