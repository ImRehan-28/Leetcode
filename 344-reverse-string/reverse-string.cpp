class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int n=s.size()-1;

        while(st<n)
        {
            swap(s[st++],s[n--]);
        }
    }
};