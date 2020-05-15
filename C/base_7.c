void reverse(char* res, int size){
    int i = 0, j = size;
    for(; i < j; i++, j--){
        char tmp = *(res+i);
        *(res+i) = *(res+j);
        *(res+j) = tmp;
    }
}

char* convertToBase7(int num){
    if(num == 0) return "0";
        
    char* result = malloc(32 * sizeof(char));
    int index = 0;
    int n = abs(num);
        
    while(n > 0){
        result[index++] = ((n % 7) + '0');
        n /= 7;
    }
    
    if(num < 0) result[index++] = '-';
    reverse(result, index - 1);
    result[index] = '\0';
            
    return result;

}
