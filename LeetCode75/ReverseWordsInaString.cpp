class Solution {
public:
    string reverseWords(string s) {
        bool prev = false;
        string ans = "";
        string tmp = ""; int wc = 0; int sc = 0;
        for(int i =0; i < s.size(); i++){
            if(s[i] != ' '){
                tmp += s[i];
                prev = true;
            }else if (prev){
                sc++;
                prev = false;
                if(wc == 0){
                    ans = tmp;
                }
                else{
                    ans = tmp + " " + ans;
                    }
                wc++;
                tmp = "";
            }
        }
        if(prev && wc != 1 && sc){
            return tmp + " " + ans;
        } else if (!sc){
            return s;
        }else {
            return ans;
        }
    }
};