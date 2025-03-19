#include<bits/stdc++.h>
using namespace std ;
// class Add 
// {
//  public:
//   int add(int a,int b)
//   {
//      return a + b;
//   }
//   int add(int a,int b ,int c)
//   {
//     return (a+b+c);
//   }
// };
// int main ()
// {
//     Add obj;
//     int res1 = obj.add (2,3);
//     int res2 = obj.add(2,3,4);
//     cout<<res1<<" "<<res2<<endl;
//     return 0;

// }
  
// class base {
//     public :
//     virtual void show ()
//     {
//         cout<<"this is parent class"<<endl;
//     }
// };

// class child : public base
// { 
  
//   public:
//   string name ;
//     void show()
//     {
//         cout<<"this is child class "<<endl;
//     }

// };
// int main ()
// {
//     base * ptr ;
//     ptr->show();
//     child a ;
//     a.name = "vipul";
//     ptr = &a;
//     a.show();
//     ptr->show();
//     return 0;

// }

// class add {
//     public:
//     int a,b;
//     add ()
//     {
         
//     }
//     add(int a ,int b )
//     {
//         this->a = a;
//         this->b = b;
//     }
    
// };
// int main ()
// {
//     add obj(5,6);
//     cout<<obj.a <<" "<<obj.b <<endl;
// }


// class A{
//     int a = 2;
//     int b = 4;
//     public :
//     friend int add (A k)
//     {
//         return k.a + k.b;
//     }
// };
// int main ()
// {
//     A obj;
//     int res = add(obj);
//     cout<<res <<endl;
// }

class Complex {
    private:
    int real ;
    int imag;
    public:
    Complex()
    {
        real =0;
        imag = 0;

    }
   Complex (int r,int i)
   {
    real = r;
    imag = i;
   }
   Complex operator+(Complex c)
   {
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
   }
   void print ()
   {
    cout<<real<<" + "<<imag <<"i"<<endl;
   }
};
int main ()
{
    Complex c1(2,4);
    Complex c2(5,6);
    Complex c3;
    c3 = c1+c2;
    c3.print();
    return 0;
}

// nth highest salary 

select salary from worker  order by salary desc limit n-1,1;
select distinct salary from worker w1 where n>= (select count(distinct salary)from worker w2 where w2>=w1);

select salary from worker w1 where 3>= (select count(distinct salary) from worker w2 where w2>=w1);

select * from wokrer order by worker _id desc limit 5;
select * frome left table,right table where left.id = right.id;