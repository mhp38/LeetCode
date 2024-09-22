class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int mx = 0;
        List<Boolean> list = new ArrayList<>();
        for(int i=0;i<candies.length;i++){
            mx = Math.max(mx,candies[i]);
        }

         for(int i=0;i<candies.length;i++){
            if(candies[i]+extraCandies >= mx)list.add(true);
             else list.add(false);
        }

        return list;

    }
}
