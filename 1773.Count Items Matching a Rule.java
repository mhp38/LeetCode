class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int ok = 0;
        for(List<String>item : items){
            if(ruleKey.equals("type") && item.get(0).equals(ruleValue))
                ok++;
           else if(ruleKey.equals("color") && item.get(1).equals(ruleValue))
                ok++;
            else if(ruleKey.equals("name") && item.get(2).equals(ruleValue))
                ok++;
        }

        return ok;
    }
}
