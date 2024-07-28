class Solution {
public:
    string removeStars(string s) {
        stack<char> a;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != '*'){
                a.push(s[i]);
            }
            else{a.pop();}
        }
        string ans = "";
        while(!a.empty()){
            ans += a.top();
            a.pop();
        }
         reverse(ans.begin(),ans.end());
        return ans;
    }
};