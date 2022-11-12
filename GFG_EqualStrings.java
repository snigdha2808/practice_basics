class Solution{
    public boolean solve(int N, String S1, String S2, String S3){
        // Code your solution here.
        char[] arr = S1.toCharArray();
        Arrays.sort(arr);
        String a=String.valueOf(arr);
        char[] arr1 = S2.toCharArray();
        Arrays.sort(arr1);
        String b=String.valueOf(arr1);
        char []arr2 =S3.toCharArray();
        Arrays.sort(arr2);
        String c=String.valueOf(arr2);
        if(a.equals(b))
        {
            return true;
        }
        if(b.equals(c))
        {
            return true;
        }
        if(c.equals(a))
        {
            return true;
        }
        return false;
    }
}
