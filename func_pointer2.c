#include <stdio.h>
//定义比较函数类型
typedef int (*CompareFunc)(int *,int ,int );
//前置声明排序函数，第三个参数是比较函数类型
void sort(int * ,int ,CompareFunc);

//返回非0数表示比较成功，返回0表示失败
int compare1(int *arr,int a,int b){
    return arr[a]>arr[b];
}
int compare2(int *arr,int a,int b){
    return arr[a]<arr[b];
}

int main(int argc, const char * argv[]) {

    int arr[]={22,33,45,1,2,7,66,554,23424234,22};

    //排序，第三个参数可以传入两个比较函数之一
    sort(arr,sizeof(arr)/sizeof(int),compare1);

    //打印排序后的数组
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    //排序，第三个参数可以传入两个比较函数之一
    sort(arr,sizeof(arr)/sizeof(int),compare2);

    //打印排序后的数组
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

//第一个参数是要排序的数组，第二个是数组两元素的数量
void sort(int *arr ,int count,CompareFunc compare_func){
    int i;
    //外层循环是倒着来的
    for(i=count-1;i>0;i--){
        int j;
        for(j=0;j<i;j++){
            //调用比较函数进行比较
            if(compare_func(arr,j,i)){
                int tmp = arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;
            }
        }
    }
}