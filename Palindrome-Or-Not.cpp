bool stringPalindrome(char ch[], int n){
    
    //using two pointer concept
    int s = 0;
    int e = n - 1;

    while( s<=e ){
        if(ch[s] != ch[e]){
            return 0; // 0 means condition false; 
        }else{
            s++;
            e--;
        }
    }
    return 1; // 1 means true
}
