class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels;
        vector<int> vowelIndex;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                vowels.push_back(ch);
                vowelIndex.push_back(i);
            }
        }
        int size=vowelIndex.size();
        for(int i=0;i<vowels.size();i++){
            int index=vowelIndex[size-1-i];
            s[index]=vowels[i];
        }
        return s;
        }
      

    
};