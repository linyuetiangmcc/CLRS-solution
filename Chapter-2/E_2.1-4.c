/**************************************************************
 * Copyright (c) Wuzhiyi
 * Introduction to Algorithms
 *
 * 题目:     Exercise 2.1-4
 * 文件名:   ADD-BINARY
 * 作者:     
 * 语言:     c
 * 内容摘要: 
 *
 * 修改记录:
 * 修改日期       版本号       修改人       修改内容
 * ------------------------------------------------------------
 * 20150708       V1.0          wuzhiyi      创建
**************************************************************/
#include <stdio.h>

int main()
{
    const int N=8;
    int A[N]={1,0,1,1,0,1,1,1};
    int B[N]={0,1,1,0,0,1,0,1};
    int C[N+1];
    int flag=0; // 存放右侧位的溢出
    
    /* 从最右位开始相加 */
    for (int i=N; i>0; --i)
    {
        C[i]=A[i-1]+B[i-1]+flag;
        if (C[i]>1) {   // 如果结果为 2 或 3，最多为 3；说明溢出了
            C[i]=C[i]%2;
            flag=1;
        } else {
            flag=0;
        }
    }
    C[0]=flag;
    
    /* 输出 */
    for (int i=0; i<=N; ++i) {
        printf("%d",C[i]);
    }
    
    return 0;
}