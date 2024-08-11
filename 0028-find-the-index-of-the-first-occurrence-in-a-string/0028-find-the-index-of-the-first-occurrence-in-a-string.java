class Solution {
    public int strStr(String haystack, String needle) {
        int x=haystack.indexOf(needle);
        if(x>=0) return x;
        else return -1;
    }
}