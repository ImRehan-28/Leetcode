int lengthofString(string s)
{
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
bool isValid(char ch)
{
    if((ch>='a' && ch<='z')|| (ch>='A' && ch<= 'Z')||(ch>='0' && ch<='9'))
    {
        return true;
    }
    return false;
}
char tolowercase(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        return ch-'A'+'a';
    }
    return ch;
}
class Solution {
public:
    bool isPalindrome(string s)
    {
        int end=lengthofString(s)-1;
        int st=0;

        while(st<=end)
        {
            while(st<end && !isValid(s[st]))
                st++;

            while(st<end && !isValid(s[end]))
                end--;

            if(tolowercase(s[st]) != tolowercase(s[end]) )
                return false;

            st++;
            end--;
        }   
        return true;
    }
};