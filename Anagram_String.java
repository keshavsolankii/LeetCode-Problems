class Solution{
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }

        int[] charCount = new int[26];

        // Count character frequencies in string s
        for (int i = 0; i < s.length(); i++) {
            charCount[s.charAt(i) - 'a']++;
        }

        // Decrement character frequencies for string t
        for (int i = 0; i < t.length(); i++) {
            charCount[t.charAt(i) - 'a']--;
        }

        // Check if all character frequencies are zero (anagrams)
        for (int count : charCount) {
            if (count != 0) {
                return false;
            }
        }
        return true;
    }
}
