class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();

        int landfinish = INT_MAX;
        int opt1 = INT_MAX;

        for (int i = 0; i < n; i++) {
            landfinish = min(landfinish, landStartTime[i] + landDuration[i]);
        }

        for (int i = 0; i < m; i++) {
            opt1 = min(opt1,
                       max(landfinish, waterStartTime[i]) + waterDuration[i]);
        }

        int waterfinish = INT_MAX;
        int opt2 = INT_MAX;

        for (int i = 0; i < m; i++) {
            waterfinish = min(waterfinish, waterStartTime[i] + waterDuration[i]);
        }

        for (int i = 0; i < n; i++) {
            opt2 = min(opt2,
                       max(waterfinish, landStartTime[i]) + landDuration[i]);
        }

        return min(opt1, opt2);
    }
};