//Start from beginning
//Slowing move towards the solution using an incremental approach
//Do further optimisations

//Usually Big brain solutions, but sometimes easier than Top-Down
class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0;
        int norob = 0;
        for (int i = 0; i < nums.size(); i++) {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(rob, norob);
    }
};
