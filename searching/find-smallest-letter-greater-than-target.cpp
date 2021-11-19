//linear search

char nextGreatestLetter(vector<char>& letters, char target) {
    if(letters[letters.size()-1] <= target){
        return letters[0];
    }
    
    for(int i = 0; i<letters.size(); i++){
        if(letters[i] > target) return letters[i];
    }
    return '\0';
}


//binary search

    int l = 0, h = letters.size()-1, mid;
        char ans = '0';
        while(l <= h){
            mid = l + (h-l)/2;
           if(letters[mid] <= target){
               l = mid + 1;
           }
            else{
                ans = letters[mid];
                h = mid-1;
            }
        }
    return ans == '0' ? letters[0] : ans;