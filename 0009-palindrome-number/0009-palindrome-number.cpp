class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
    long long newNum = 0; int digit;
    if(x<0) return false;
    while(x>0){
        digit= x % 10;
        newNum = (newNum * 10) + digit;
        x = x/10;
    } 
    if(original==newNum) return true;
    else return false;   
    }
};