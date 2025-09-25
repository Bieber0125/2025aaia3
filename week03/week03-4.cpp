//week03-4.cpp
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int N = triangle.size();
        // 從下往上查，最下面的第N-1層,沒問題，就是本身最小值
        for(int i=N-2; i>=0; i--){
            for(int j=0; j<=i; j++){
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};
