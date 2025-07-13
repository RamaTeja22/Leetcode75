class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int n1=s.length();
        int n2=t.length();
        if(n1==0)
        return true;
        while(i<n1 && j<n2){
            char curr = s[i];
            while(j<n2 && t[j]!=curr){
                j++;
            }

            // after getting the match, do the increments
            if (j < n2) {
            i++;
            j++;
        }
        if (i == n1)
            return true;
        }
        return false;
    }
};