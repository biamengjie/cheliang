#include <stdio.h>
struct Point{
    int x;
    int y;
};
int main(){
    int index=0;
    struct Point bbb[100];
printf("huanyingjinruzhuangchangguanlixitong:\n");
    while(1){
        printf("1---tianjiacheliangweizhi:\n");
        printf("2---shanchucheliangweizhi:\n");
        printf("3---xianshiquanbudecheliangweizhi:\n");
        printf("4---fanhuiliwoweizhizuijindecheliang:\n");
        printf("5---chengxujieshu:\n");
        printf("qingshuruxiangyingdegonggnengbianhao:\n");
        int code;
        scanf("%d",&code);
        if(code==1){
            printf("qingshurucheliagndeweizhidexzuobiaoheyzuobiao:\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);
            bbb[index].x=x;
            bbb[index].y=y;
            index++;
            printf("tianjiachenggong,dianjihuichejixu:\n");
            char z;
            scanf("%c",&z);
            scanf("%c",&z);


        }
        if(code==2){
            if(index>0){
                index--;
                printf("shanchuchengogn,dianjihuichejixu:\n");
                char z;
            scanf("%c",&z);
            scanf("%c",&z);
            }
            else{
                printf("wucheliangweizhixinxi,shanchushibai,dianjihuichejixu:\n");
                char z;
            scanf("%c",&z);
            scanf("%c",&z);
            }
        }
        if(code==3){
            
        }
        if(code==4){
            
        }
        if(code==5){
            
        }
    }

    return 0;

}