class Solution {
    public String longestCommonPrefix(String[] st) {

        String prefix = st[0];

        for (int i = 1; i < st.length; i++) {
            String currentString = st[i];

            while (currentString.indexOf(prefix) != 0) {
                prefix = prefix.substring(0, prefix.length() - 1);
                if (prefix.length() == 0) {
                    return "";
                }
            }
        }

        return prefix;
    }
}
