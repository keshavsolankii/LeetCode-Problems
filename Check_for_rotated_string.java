class Solution {
    public boolean rotateString(String s, String goal) {
        String temp = s+s;
        if(temp.contains(goal) && s.length() == goal.length())
            return true;
        else
            return false;
    }
