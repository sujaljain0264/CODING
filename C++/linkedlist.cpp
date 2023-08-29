#include<iostream>
using namespace std;
class listnode{
int data;
   listnode next();
public:
listnode(int data){
    this->data=data;
}
int getdata(){
    return data;
}
void setdata(int data){
    this->data=data;
}
listnode getnext(){
    return next();
    }
void setnext(listnode next){
    this->next()=next;
}
};
int main(){

    return 0;
}