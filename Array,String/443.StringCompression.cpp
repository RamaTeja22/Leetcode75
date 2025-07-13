class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0,resi=0,cnt;
        while(i<n){
            char curr = chars[i];
            cnt=0;
            while(i<n && chars[i]==curr){
                i++;
                cnt++;
            }
            chars[resi++]=curr;
            if(cnt!=1){
                string cc = to_string(cnt);
                vector<char>charString (cc.begin(),cc.end());
                for(char c:charString){
                    chars[resi++]=c;
                }
            }
        }
        return resi;
    }
};