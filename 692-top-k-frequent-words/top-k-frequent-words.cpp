class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<int> a(words.size(),1);
        vector<int> b(words.size(),1);
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(b[j]!=0 && words[i]==words[j]){
                    a[i]++;
                    b[j]=0;
                }
            }
        }
        vector<string> c;
        for(int z = 0; z < k; z++) { 
            int max = -1;
            int index = -1;

            for(int i = 0; i < words.size(); i++) {
                if(b[i] == 1) { 
                    if(a[i] > max) {
                        max = a[i];
                        index = i;
                    }
                    else if(a[i] == max) {
                        if(words[i] < words[index]) {
                            index = i;
                        }
                    }
                }
            }
            if(index != -1) {
                c.push_back(words[index]);
                b[index] = 0; 
            }
        }
        return c;
    }
};