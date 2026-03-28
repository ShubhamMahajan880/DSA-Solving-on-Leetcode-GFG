class Solution {
public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int W) {
        int n = val.size();
        
        vector<pair<double, pair<int,int>>> v;
        
        for(int i = 0; i < n; i++){
            double ratio = (double)val[i] / wt[i];
            v.push_back({ratio, {val[i], wt[i]}});
        }
        
        sort(v.begin(), v.end(), greater<>());
        
        double total = 0.0;
        
        for(int i = 0; i < n; i++){
            int value = v[i].second.first;
            int weight = v[i].second.second;
            
            if(weight <= W){
                total += value;
                W -= weight;
            } else {
                total += v[i].first * W;
                break;
            }
        }
        
        return total;
    }
};