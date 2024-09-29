//SWC
//First tried it with java
//Please try it with cpp/c(trie) also

class Solution {
    public List<List<String>> suggestedProducts(String[] products, String searchWord) {
        List<List<String>> result = new LinkedList<>();
        Arrays.sort(products);


        for(int i=1;i<=searchWord.length();i++)
        {
            String CurrentMatching = searchWord.substring(0,i);//The substring containing characters from begin index to end index – 1 are returned
            List<String>list = new LinkedList<>();

            for(String product : products)
            {
                if(product.length()>=i && product.substring(0,i).equals(CurrentMatching)){
                    list.add(product);

                if(list.size()==3){
                    break;
                }
              }
            }
            result.add(list);
        }
        return result;
    }
}
