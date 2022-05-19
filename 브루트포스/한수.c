#include <stdio.h>
int hansu(int x){
    int count=0;
    if(x<100){
        return x;
    }else{
        for(int i=100;i<=x;i++){
            int a=(i%100)%10;
            int b=(i%100)/10;
            int c=(i/100);
            if(2*b==a+c){
                count++;
            }
        }
        return (count+99);
    }
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",hansu(x));
}
