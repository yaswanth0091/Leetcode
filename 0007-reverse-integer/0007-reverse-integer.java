class Solution {
    public int reverse(int x) {
        int sum=0;
        int a;
        if(x>0) a=1;
        else a=-1;
        int t=x*a;
        while(t>0){
            int d=t%10;
            if (sum > (Integer.MAX_VALUE - d) / 10) {
                return 0;
            }

            sum = sum * 10 + d;
            t = t / 10;
        }

        return sum * a;
    }
}
