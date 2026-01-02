class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()<goal.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            int x=0;
            for(int j=0;j<s.length();j++){
                if(s[j]==goal[(i+j+s.length())%s.length()]){
                    x++;
                }
                else{
                    break;
                }
            }
            if(x==s.length()){
                return true;
            }
            cout<<x;
        }
        return false;
    }
};