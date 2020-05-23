(i)             (i-1)
old             new     //old表示当前序号，new表示下一次序号
...             ...
s-2             i-2
s-1             i-1
s               
s+1             1
s+2             2
...             

old = (new + s - 1) % i + 1;//s表示当前被删除的节点

(i)             (i)
A               B       //A表示报数， B表示序号
1               1
2               2
3               3
...
i               i
i+1             1
i+2             2
...

B = (A - 1) % i + 1;// 包含i个元素时， 当A取值m时，B为被删除的节点序号
将B代入上个公式中：
old = (new + (m - 1)%i + 1 - 1) % i + 1;
old = (new + m - 1) % i + 1;
当i = 1时， old = 1;//递归基
int josech(int n, int m){
    if(n == 1)return 1;
    return (josech(n - 1, m) - 1) % n + 1;
}
