class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> v;
        unordered_map<string,int> m;
        unordered_map<int,string> m1;
        for(int i=0;i<list1.size();i++){
            m[list1[i]]=i;
        }
       int maxi=INT_MAX;
        for(int j=0;j<list2.size();j++){
            int k;
            if(m.find(list2[j])!=m.end()){
                 k=m[list2[j]];
                m[list2[j]]=j;
                 if((j+k)==maxi){
                    maxi=j+k;
                    v.push_back(list2[j]);
                }
                if((j+k)<maxi){
                    /*if(j+k==maxi){
                        m1[l++]=lis
                    }
                m1[j+k]=list2[j];
                maxi=j+k;
            }
            */
                   maxi=j+k;
                    v.clear();
                    v.push_back(list2[j]);
            }
               
        }
        }
        return v;
        
    }
};
