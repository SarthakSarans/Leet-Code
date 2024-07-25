class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n==0 || (flowerbed.size() == 1 && !flowerbed[0]))
            return true;

        bool prev;
        bool forw;
        if (!flowerbed[0] && !flowerbed[1]){
            flowerbed[0] = 1;
            n--;
        }        
        for(int i= 1; i < flowerbed.size()-1; i++){
            prev = flowerbed[i-1];
            forw = flowerbed[i+1];
            if(!prev && !forw && !flowerbed[i]){
                flowerbed[i] = 1;
                n--;
            }
            
        }

        if (!flowerbed[flowerbed.size()-1] && !flowerbed[flowerbed.size()-2]){
            flowerbed[flowerbed.size()-1] = 1;
            n--;
        }

        return n < 1;
    }
};