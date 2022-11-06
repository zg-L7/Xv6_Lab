#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

/*
参数介绍
argc : main函数参数个数，当参数为void的时，argc=1，默认参数为可执行文件名
argv : 指针数组，分别指向个参数字符串首地址，其中argv[0]指向默认参数
此方法主要用于命令行输入参数
默认情况下，argc 值为 1，表示 argv[0] 当前工程可执行文件的文件名；
后面的参数从 arg[1] 开始都按顺序存放在字符数组中，argc 数至少是1个；
*/
int main(int argc,char const* argv[])
{
    
    int n;
    if (argc != 2)
    {
        fprintf(2, "usage:Parameter is incorrect\n");
         exit(1);
    }
    else
    {
        n = atoi(argv[1]);
        sleep(n);
        exit(0);
    }

}