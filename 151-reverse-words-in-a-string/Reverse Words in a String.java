class Solution {
    public String reverseWords(String s) {
        String[] words=s.split("\\s+");
        String ans="";
        for(String word: words){
            ans = word+" "+ans;
        }
        return ans.trim();
    }
}
