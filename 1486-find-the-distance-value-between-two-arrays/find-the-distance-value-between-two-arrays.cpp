class Solution {
public:
    int mutlak(int x)
    {
        if (x<0)
            return -1*x;
        return x;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int sayac=0,ans=0;

        for ( int i = 0; i <arr1.size();i++)
        {
            for (int j = 0 ; j < arr2.size();j++)
            {
                if (mutlak(arr1[i]-arr2[j])<=d)
                {
                    sayac++;
                }
            }
            if (sayac == 0)
                ans++;
            sayac=0;
        }
        return ans;
    }
};