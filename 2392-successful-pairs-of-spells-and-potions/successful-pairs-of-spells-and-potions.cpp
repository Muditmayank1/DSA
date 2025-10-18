class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        vector<int> a(n,0);
        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            long long min_portion = (success + spells[i]-1)/spells[i];
            auto it = lower_bound(potions.begin(),potions.end(),min_portion);
            int count = distance(it,potions.end());
            a[i]=count; 
        }
        return a;
    }
};