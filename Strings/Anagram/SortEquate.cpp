 /*   Time Complexity : O(NlogN + MlogM), Sorting the String(s and t) costs O(NlogN + MlogM). Where N is the size
    of the String(s) and M is the size of the String(t).

    Space Complexity : O(1), Constant Space.*/

class Solution {            
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t){
            return true;  
        }
        return false;
    }
}; 
