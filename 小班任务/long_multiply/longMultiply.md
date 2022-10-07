## 方法1：数组进位乘
[这个方法](https://stackoverflow.com/questions/26557981/how-can-i-multiply-really-big-numbers-c#:~:text=Use%20pan%20paper,15%5D%3D%7B4%2C2%2C3%2C4%2C2%2C3%2C%2C4%2C5%2C3%2C4%2C5%2C3%2C4%2C6%2C4%2C5%7D%3B)可能导致leading zero
```cpp
arr1[10] = {3,4,4,3,4,2,3,4,3,2};
arr2[15] = {4,2,3,4,2,3,4,5,3,4,5,3,4,6,4,5};

for(int i=0;i<arr1_length;i++)
{
    for(int j=0;j<arr2_length;j++)
    {

        ans[i+j]+=arr1[i]*arr2[j];
        ans[i+j+1]=ans[i+j+1]+ans[i+j]/10;
        ans[i+j]%=10;
    }
}
```

## 方法2：double浮点数运算

## 方法3：二进制运算

## 方法4：[快速傅里叶变换](https://zhuanlan.zhihu.com/p/31584464)

1. [多项式的点表示法](https://www.luogu.com.cn/blog/ztyqwq/duo-xiang-shi-101-dian-zhi-biao-shi-fa-yu-ji-shuo-biao-shi-fa-xue-xi-post)