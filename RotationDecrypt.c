#include <stdio.h>
int main()
{ int i=0;
int key=9;
char str[500]={"dniels gezAGVa HBJNMZzy"};
    for(i=0; str[i]!='\0' ; i++){
        
        if(str[i] != 32){
        
            if((str[i]+key)<(92+key)){
              if (str[i]+key>=91){
                str[i]=str[i]-26;
        }
        }
            if((str[i]+key)>=(123)){
            str[i]=str[i]-26;
        }
           str[i] =str[i]+key;
     }   
    }

   printf("%s", str);
    return 0;
}
