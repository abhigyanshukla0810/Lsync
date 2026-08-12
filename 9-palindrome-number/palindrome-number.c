bool isPalindrome(int x) {
    int real = x;
    long long rev = 0;
    int rem;
    if(x<0){
        return 0;
    }
    while(real > 0){
        rem = real % 10;
        rev = rev*10 + rem;
        real = real/10;
    }
    if(rev == x){
        return 1;
    }
    else{
        return 0;
    }
}