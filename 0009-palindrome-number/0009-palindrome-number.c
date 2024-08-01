bool isPalindrome(int x) {
    if(x<0) return false;
    long long a=0;
    int sum,temp;
    temp=x;
    while(temp)
    {
        sum=temp%10;
        temp=temp/10;
        a=a*10+sum;
    }
    if(x==a)
    {
        return true;
    }
    else
    {
        return false;
    }
}