class Solution {
public:
    int maxVowels(string s, int k) {
        int maxi = 0;
        for(int i = 0; i <k; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                maxi++;
            }
        }
        int curr = maxi;
        for(int i = 1; i <=s.length()-k;i++){
            if(s[i-1] == 'a' || s[i-1] == 'e' || s[i-1] == 'i' || s[i-1] == 'o' || s[i-1] == 'u'){
                curr--;
            }
            if(s[i+k-1] == 'a' || s[i+k-1] == 'e' || s[i+k-1] == 'i' || s[i+k-1] == 'o' || s[i+k-1] == 'u'){
                curr++;
            }
            maxi = max(curr,maxi);
        }
        return maxi;
    }
};