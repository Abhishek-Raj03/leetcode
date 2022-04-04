class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       multimap<int,int> m;
        for(int i=0;i<points.size();i++)
            m.insert({points[i][0]*points[i][0]+points[i][1]*points[i][1],i});
        vector<vector<int>> v;
        for(auto it=m.begin();k>0;it++,k--){
            v.push_back(points[it->second]);
        }
        return v;
    }
};
