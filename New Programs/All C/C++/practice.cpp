#include <iostream>
#include <pthread.h>
using namespace std;

#define f(i, a, n) for (int i = a; i < n; i++)
#define num 100
#define int long long

int fibonacci(int *arr,int n)
{
    // pthread_t th;
    if (n < 2)
        return n;
    if (arr[n-1] != 0)
        return arr[n-1];
    arr[n-1] = fibonacci(arr,n - 1) + fibonacci(arr,n - 2);
    return arr[n-1];
}

signed main(void)
{
    int *arr = new int[num];
    cout << fibonacci(arr,num)   << endl;
    delete[] arr;
    return 0;
}