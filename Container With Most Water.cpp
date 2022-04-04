class Solution {
public:
    int maxArea(vector<int>& height) {
       int left = 0, right = height.size()-1, h, max_area = 0;
        while (left < right) {
            int h = min(height[left], height[right]);
            max_area = max(max_area, h * (right - left));
            if (height[left] <= h) left++;
            if (height[right] <= h) right--;
        }
        return max_area;
    }
};
