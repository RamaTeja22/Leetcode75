class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt=0;
        int n=s.length();
        unordered_set<char>vowels{'a','e','i','o','u'};
        int i,currSum=0,maxSum=0;
        for(i=0;i<k;i++){
            if(vowels.find(s[i])!=vowels.end()){
                cnt++;
            }
        }
        if(cnt==k)
        return k;
        currSum=cnt;
        maxSum=cnt;
        for(i=k;i<n;i++){
            if(vowels.find(s[i])!=vowels.end()){
                currSum++;
            }
            if(vowels.find(s[i-k])!=vowels.end()){
                currSum--;
            }
            maxSum = max(maxSum,currSum);
            if(maxSum==k)
            return k;
        }
        return maxSum;
    }
};