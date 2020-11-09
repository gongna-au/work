int MyAtoi(const char* c){
    int d=strlen(c);
    int qi=0;
    while(c[qi]==' ')qi++;
    if(c[qi]=='-'){
        long long sum=0;
        int i;
        for(i=qi+1;i<d;i++){
            if(c[i]>='0'&&c[i]<='9')sum=sum*10+(c[i]-'0');
            else break;
            if(sum>2147483648)return -1;
        }
        return 0-sum;
    }
    else if(c[qi]>='0'&&c[qi]<='9'){
        long long sum=0;
        int i;
        for(i=qi;i<d;i++){
            if(c[i]>='0'&&c[i]<='9')sum=sum*10+(c[i]-'0');
            else break;
            if(sum>2147483647)return -1;
        }
        return sum;
    }
    else return 0;
}
