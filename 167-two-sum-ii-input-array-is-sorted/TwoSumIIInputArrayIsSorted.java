
import java.util.HashMap;
class Solution {
    public int[] twoSum(int[] numbers, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int n= numbers.length;
        int result[] = new int[2];

        for(int i=0; i<n; i++){
            int complement = target-numbers[i];

            if(map.containsKey(complement)){
                result[0] = map.get(complement) +1;

                result[1] = i+1;

                return result;
            }
            map.put(numbers[i], i);
        }
        return result;
    }
}
