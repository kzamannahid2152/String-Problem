char toUpperCase(char ch){
    if(ch >= 'A' && ch <='Z'){
        return ch;
    }else{
        char temp = ch - 'a' + 'A';
        return temp;
    }
}

char toLowerCase(char ch){
    if(ch >= 'a' && ch <='z'){
        return ch;
    }else{
        char temp = ch - 'a' + 'A';
        return temp;
    }
}
