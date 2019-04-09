#include<iostream>
#include<stdio.h>
using namespace std;
const int maxn = 105;
struct node{
    int a,b;
}student[maxn];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&student[i].a,&student[i].b);
    }
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(flag)continue;
            if(student[i].a+student[i].b==student[j].a){
                if(student[j].a+student[j].b==student[i].a){
                    flag = 1;
                }
            }
        }
    }
    if(flag){
        cout<<"YE5"<<endl;
    }else{
        cout<<"N0"<<endl;
    }
}