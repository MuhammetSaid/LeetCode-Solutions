class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1, max = 0;
        while (i != j ) {
            if (max < (j-i) * min(height[i], height[j])) max =  (j-i) * min(height[i], height[j]);
            if (height[i] < height[j]) i++;
            else j--;
        }
        return max;
    }
};

// int max = 0;
// for (int i = 0; i < height.size(); i++) {
//     for (int j = i+1; j < height.size(); j++) {
//         int min_x;
//         if (height[i] > height[j]) min_x = height[j]; 
//         else min_x = height[i];
//         if ((j-i) * min_x > max) max = (j-i) * min_x;
//     }
// }
// return max;