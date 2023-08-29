#include <iostream>
using namespace std;

// class Base
// {
//     int data1;

// public:
//     int data2;
//     void setData();
//     int getData1();
//     int getData2();
// };
// void Base::setData(void)
// {
//     cout << "enter data1:" << endl;
//     cin >> data1;
//     cout << "enter data2:" << endl;
//     cin >> data2;
// }
// int Base::getData1()
// {
//     return data1;
// }
// int Base::getData2()
// {
//     return data2;
// }
// class derived : public Base
// {
//     int data3;

// public:
//     void process();
//     void display();
// };
// void derived::process()
// {
//     data3 = data2 * getData1();
//     EXAMPLE OF SINGLE INHERITANCE
// }
// void derived::display()
// {
//     cout << "value of data1 is" << getData1() << endl;
//     cout << "value of data2 is" << data2 << endl;
//     cout << "value of data3 is" << data3 << endl;
// }
// int main()
// {
//     derived der;
//     der.setData();
//     der.process();
//     der.display();

//     return 0;
// }
// __________________________________________________________________________________________________________
// class student
// {
// protected:
//     int roll_number;

// public:
//     void set_roll_number(int);
//     void get_roll_number(void);
// };
// void student::set_roll_number(int r)
// {
//     roll_number = r;
// }
// void student::get_roll_number()
// {
//     cout << "the roll no is:" << roll_number << endl;
// }
// class exam : public student
// {
// protected:
//     example of multilevel inheritance float maths;
//     float physics;

// public:
//     void set_marks(float, float);
//     void get_marks(void);
// };
// void exam::set_marks(float m1, float m2)
// {
//     maths = m1;
//     physics = m2;
// }
// void exam::get_marks()
// {
//     cout << "the marks obtained in maths are:" << maths << endl;
//     cout << "the marks obtained in physics are:" << physics << endl;
// }
// class result : public exam
// {
//     float precentage;

// public:
//     void display_rslt()
//     {
//         get_roll_number();
//         get_marks();
//         cout << "your result is:" << (maths + physics) / 2 << "%" << endl;
//     }
// };
// int main()
// {
//     result sujal;
//     sujal.set_roll_number(420);
//     sujal.set_marks(89, 54);
//     sujal.display_rslt();
//     return 0;
// }
// _______________________________________________________________________________________________________________
// class base1
// {
// protected:
//     int base1int;

// public:
//     void set_base1int(int a)
//     {
//         base1int = a;
//     }
// };
// class base2
// {
// protected:
//     int base2int;

// public:
//     void set_base2int(int b)
//     {
//         base2int = b;
//         EXAMPLE OF MULTIPLE INHERITANCE
//     }
// };
// class derived : public base1, public base2
// {
// public:
//     void show()
//     {
//         cout << "the value of base 1 is: " << base1int << endl;
//         cout << "the value of base 2 is: " << base2int << endl;
//         cout << "the sum of the both value is: " << base1int + base2int << endl;
//     }
// };
// int main()
// {
//     derived sujal;
//     sujal.set_base1int(88);
//     sujal.set_base2int(90);
//     sujal.show();
//     return 0;
// }
// _____________________________________________________________________________________________________________
// class simplecalculator
// {
// protected:
//     int a, b;

// public:
//     void get_number();
//     void process();                                                                       home work for parctice
// };
// void simplecalculator::get_number()
// {
//     cout << "enter your 1st number a:" << endl;
//     cin >> a;
//     cout << "enter your 2nd number b:" << endl;
//     cin >> b;
// }
// void simplecalculator::process()
// {
//     cout << "the value of a+b is:" << a + b << endl;
//     cout << "the value of a-b is:" << a - b << endl;
//     cout << "the value of a*b is:" << a * b << endl;
//     cout << "the value of a/b is:" << a / b << endl;
// }
// class scientificCalculator
// {
// };
// int main()
// {
//     simplecalculator sujal;
//     sujal.get_number();
//     sujal.process();
//     return 0;
// }
// _________________________________________________________
// class student
// {
// protected:
//     int roll_no;

// public:
//     void set_number(int a)
//     {
//         roll_no = a;
//     }
//   void print_number(void)                                                    example for virtual base class
//   {
//       cout << "your roll no is:" << roll_no << endl;
//   }
// };
// class test : public virtual student
// {
//   protected:
//   float maths, physics;

//   public:
//   void set_marks(float m1, float m2)
//   {
//       maths = m1;
//       physics = m2;
//   }
//   void print_marks(void)
//   {
//       cout << "your maths marks is: " << maths << endl;
//       cout << "your physics marks is: " << physics << endl;
//   }
// };
// class sports : public virtual student
// {
//   protected:
//   float score;

//   public:
//   void set_score(float scr)
//   {
//       score = scr;
//   }
//   void print_score(void)
//   {
//       cout << "your score is:" << score << endl;
//   }
// };
// class result : public test, public sports
// {
//   private:
//   float total;

//   public:
//   void display(void)
//   {
//       total = maths + physics + score;
//       print_number();
//       print_marks();
//       print_score();
//       cout << "your total score out of 300 is:" << total << endl;
//   }
// };

// int main()
// {
//   result sujal;
//   sujal.set_number(98);
//   sujal.set_marks(78, 89);
//   sujal.set_score(91);
//   sujal.display();

//   return 0;
// }
// _________________________________________________________
// class base1
// {
//   int data1;

//   public:
//   base1(int i)
//   {
//       data1 = i;
//       cout << "the base1 constructor called" << endl;
//   }
//   void printdata1(void)
//   {
//       cout << "the value of data1 is:" << data1 << endl;
//   }
// };
// class base2
// {
//   int data2;
//   example of constructor in derived classes

//       public : base2(int i)
//   {
//       data2 = i;
//       cout << "the base2 constructor called" << endl;
//   }
//   void printdata2(void)
//   {
//       cout << "the value of data2 is:" << data2 << endl;
//   }
// };
// class derived : public base1, public base2
// {
//   int derived1, derived2;

//   public:
//   derived(int a, int b, int c, int d) : base1(a), base2(b)
//   {
//       derived1 = c;
//       derived2 = d;
//       cout << "derived class constructor called" << endl;
//   }
//   void printdataderived(void)
//   {
//       cout << "the value of derived1 is:" << derived1 << endl;
//       cout << "the value of derived2 is:" << derived2 << endl;
//   }
// j};
// int main()
// {
//   derived sujal(1, 2, 3, 4);
//   sujal.printdata1();
//   sujal.printdata2();
//   sujal.printdataderived();
//   return 0;
// }
// _____________________________________________________________________________________________________________________________
//  class shop{
//     int id;
//     float price;
//     public:
//     void setData(int a, int b){
//         id=a;
//         price=b;
//     }
//     void getData(void){
//         cout<<"the id of this item is:"<<id<<endl;
//         cout<<"the price of this item is:"<<price<<endl;
//     }
//  };
//  int main(){                                                      
// int size =3;
// shop *ptr =new shop [size];
// shop *ptrtemp=ptr;
// /*general item
// veggies item
// harware item*/
// int p;
// float q;
// for (int i = 0; i < size; i++)
// {
// cout<<"Enter id and price of item "<<i+1<<endl;
// cin>>p>>q;
// ptr->setData(p,q);
// ptr++;
// }
// for(int i=0;i<size;i++){
//     cout<<"item number:"<<i+1<<endl;
//     ptrtemp->getData();
//     ptrtemp++;
// }

//     return 0;
//  }
// ____________________________________________________________
class shop
{
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "id of this item is:" << id << endl;
        cout << "price of this item is:" << price << endl;
    }
};
int main()
{
    int size;
    cout<<"enter how many product you want to buy:"<<endl;
    cin>>size;
    shop *ptr = new shop[size];
    shop *ptrtemp=ptr;
    int p ,i;
    float q;
    for(i=0;i<size;i++){
        cout<<"Enter ID and Price of item:"<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
    }
    for(i=0;i<size;i++){
        cout<<"item numbe"<<i+1<<endl;
           ptrtemp->getData();
    }

    return 0;
}