#include <iostream>
// #include <math.h>
using namespace std;
// class distance;
// class point
// {
//   int x, y;

//   friend void distance(point o1, point o2);
// public:
//   point(int a, int b)
//   {
//     x = a;
//     y = b;
//   }
//   void displaypoint()
//   {
//     cout << "the value is(" << x << "," << y << ")" << endl;
//   }
// };
//   void distance(point o1, point o2)
//   {
//     int distance;
//     distance = ((o2.x - o1.x) * (o2.x - o1.x) + (o2.y - o1.y) * (o2.y - o1.y));
//     distance = sqrt(distance);
//     cout << "the distance between the two point is " << distance << endl;
//   }
// int main()
// {
//   point p(2, 4);
//   p.displaypoint();
//   point q(4, 5);
//   q.displaypoint();
//   distance(p, q);
//   return 0;
// }
// _____________________________________________________________________________________________
// making of interest calculater with the help of Constructer
class bankdeposite
{
    int principal;
    int years;
    float interestrate;
    int returnvalue;

public:
    bankdeposite(){};
    bankdeposite(int p, int y, float r);
    bankdeposite(int p, int y, int r);
    void show();
};
bankdeposite::bankdeposite(int p, int y, float r)
{
    principal=p;
    years=y;
    interestrate=r;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+interestrate);
    }
}
bankdeposite::bankdeposite(int p, int y, int r)
{
    principal=p;
    years=y;
    interestrate=float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+interestrate);
    }
}
void bankdeposite::show(){
    cout<<"principal amount was"<<principal
      <<". return vakue after"<<years
      <<"year is"<<returnvalue<<endl;
}
int main()
{
    bankdeposite bd1,bd2, bd3;
    int p,y;
    float r;
    int R;
    cout<<"enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposite(p,y,r);
    bd1.show();
    return 0; 
}
