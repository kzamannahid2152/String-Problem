void string_Reverse(char ch[], int n){
    int s = 0;
    int e = n - 1;

    while(s < e){
        swap(ch[s++], ch[e--]);
    }
}
