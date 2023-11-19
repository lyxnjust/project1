#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    cin >> x ;
    int a[] ={61,71,11,21,32,19,27,31};//务必在定义数组时确保两数组对应位置相同
    string b[]={"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas",
                "Vitoria","Belo Horizonte"};
    string t="a"; //工具变量t，存在目的：确定输入的x是否在a数组中；

    int i ;
    for(i=0;i<8;i++) {
        if(x == a[i]) {
        t = b[i]; //将a与b联系起来
        break; //程序运行过程中满足if则运行break结束循环，在这里结束for循环；提高运行效率。
        }
    }
    if(t == "a")    printf("DDD nao cadastrado");
    else  cout<<t;

    return 0; 
}

//2
//#include<>
using namespace std;
int n;
#define o(a,b) else if(n==a) cout<<#b;
int main(){
    cin>>n;
    if(n==61) cout<<"Brasilia";
    o(71,Salvador)
    o(11,Sao Paulo)
    o(21,Rio de Janeiro)
    o(32,Juiz de Fora)
    o(19,Campinas)
    o(27,Vitoria)
    o(31,Belo Horizonte)
    o(n,DDD nao cadastrado)
}

