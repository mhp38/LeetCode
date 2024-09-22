class Solution {
    public int[] shuffle(int[] nums, int n) {
        int ln = nums.length;
        //List<Integer> list = new ArrayList<>();
        //List<Integer> list = new ArrayList<>();
        int[] list = new int[2*n];
        int fst = 0, snd = n;

        for(int i=0;i<2*n;i++){
            //list.add(nums[i]);
            //list.add(nums[n+i]);
            if(i%2==0){
                list[i] = nums[fst];
                fst++;
            }
            else {
                list[i] = nums[snd];
                snd++;
            }
        }
        return list;
    }
}
