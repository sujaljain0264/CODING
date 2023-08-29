#include<iostream>
#include<string>
// #include<fstream>
using namespace std;
// class cwh{
// protected:
// string title;
// float rating;
// public:
//  cwh(string s, float r){
//     title= s;
//     rating= r;
//  }
//      virtual void display(){}                                                   virual function in polymorphism
// };
// class cwhvideo:public cwh{
//     float videolength;
//     public:
//     cwhvideo(string s,float r,float vl):cwh(s,r){
//         videolength=vl;
//     }
//     void display(){
//         cout<<"this is an amazing video with title "<<title<<endl;
//         cout<<"rating of the video:"<<rating<< "out of 5 star"<<endl;
//         cout<<"length of the video is:"<<videolength<<"minutes"<<endl;
//     }
// };
// class cwhtext:public cwh{
//     int words;
//     public:
//     cwhtext(string s,float r,int wc):cwh(s,r){
//        words=wc;
//     }
//     void display(){
//         cout<<"this is an amazing text with title "<<title<<endl;
//         cout<<"rating of the text:"<<rating<<"out of 5 star"<<endl;
//         cout<<"word in the text tutotial is:"<<words<<"minutes"<<endl;
//     }
// };
// int main(){ 
//     string title;
//     float rating,vlen;
//     int words;

//     title="c++ tutorial";
//     vlen=10.20;
//     rating=4.9;
//     cwhvideo cvideo(title,rating, vlen);
//     cvideo.display();
//     return 0;
// }
// ___________________________________________________________________________________________________________________
// int main(){
//     //                                                            for giving output
//     string st="hello sujal bhai kaise ho";
//     ofstream out("sample60.txt");   
//     out<<st;

//     //                                                         for taking input
//     // ifstream in("sample60.txt");
//     // // in>>st;
//     // string st;
//     // getline(in,st);
//     // cout<<st;

//     return 0;
// } 
// ___________________________________________________________________________
template<class T1, class T2>
class tem{
  public:
T1 data1;
T2 data2;
 tem(T1 a,T2 b){
  data1=a;
  data2=b;
   
   }
   void display(){
    // cout<<this->data1<<endl<<this->data2;
    cout<<"this is a data1:"<<data1<<endl<<"this is a data2:"<<data2<<endl;
    cout <<"if we add these both, the output will be:"<<data1 + data2<<endl;

 }
};
int main(){
  tem<int,char> obj(22 ,'s');
  obj.display();
  return 0;
}