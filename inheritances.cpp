// SINGLE_LEVEL - INHERITANCE
#include<iostream>
using namespace std;
/*class Shape{
    protected:
    int width , height;
    public:
    void setwidth(int w){
        width = w;
    }
    void setheight(int h){
        height = h;
    }

};
class Rectangle :public Shape{
    public:
    int getarea(){
        return width * height;
    }
};
int main(){
    Rectangle R1;
    R1.setwidth(95);
    R1.setheight(56);
    cout<<R1.getarea()<<endl;
    return 0;
}
class Base{
    public:
    int x,y;
    Base(){
         cout<<"Base class "<<endl;
    x=10;
    y=20;}
};
class Derived:public Base{
    public:
    int a,b;
    Derived(){
    cout<<"Derived class"<<endl;
    a=30;
    b=40;}
};
int main(){
    Derived d;
    cout<<"base class variables"<<endl;
    cout<<d.x<<" "<<d.y<<endl;
    cout<<"derived class variables"<<endl;
    cout<<d.a<<" "<<d.b<<endl;
    return 0;
}
//Base class
class Parent
{
	public:
	int id_p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
	public:
	int id_c;
};

//main function
int main()
{
	
		Child obj1;
		
		// An object of class child has all data members
		// and member functions of class parent
		obj1.id_c = 7;
		obj1.id_p = 91;
		cout << "Child id is " << obj1.id_c << endl;
		cout << "Parent id is " << obj1.id_p << endl;
		
		return 0;
}
class Animal {  
   public:  
 void eat() {   
    cout<<"Eating..."<<endl;   
 }    
   };  
   class Dog: public Animal    
   {    
       public:  
     void bark(){  
    cout<<"Barking...";   
     }    
   };   
int main(void) {  
    Dog d1;  
    d1.eat();  
    d1.bark();  
    return 0;  
} 
class A  
{  
    int a = 4;  
    int b = 5;  
    public:  
    int mul()  
    {  
        int c = a*b;  
        return c;  
    }     
};  
  
class B : private A  
{  
    public:  
    void display()  
    {  
        int result = mul();  
        std::cout <<"Multiplication of a and b is : "<<result<< std::endl;  
    }  
};  
int main()  
{  
   B b;  
   b.display();  
    return 0;  
} 
//MULTILEVEL INHERITANCE
class gparent{
  public:
  void display(){
      cout<<"GRAND PARENTS CLASS"<<endl;
  }
};
class parent:public gparent{
  public:
  void show(){
      cout<<"PARENT CLASS"<<endl;
  }
};
class child:public parent{
  public:
  void childdisp(){
      cout<<"CHILDREN CLASS"<<endl;
  }
  
};
int main(){
    child c;
    c.display();
    c.show();
    c.childdisp();
    return 0;
}
class mother{
    public:
    void mdisp(){
        cout<<"MOTHER CLASS"<<endl;
    }

};
class father{
    public:
    void fdisp(){
        cout<<"FATHER CLASS"<<endl;
    }

};
class child:public mother,public father{
    public:
    void cdisp(){
        cout<<"CHILDREN CHILD"<<endl;
    }

};
int main(){
    child c;
    mother m;
   // c.mdisp();
    //c.fdisp();
   // c.cdisp();
   m.mdisp();
    return 0;
}
// first base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};

// second base class
class FourWheeler {
public:
	FourWheeler()
	{
	cout << "This is a 4 wheeler Vehicle" << endl;
	}
};

// sub class derived from two base classes
class Car: public Vehicle, public FourWheeler {

};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}
// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}
class vehicle{
    public:
    vehicle(){
        cout<<"This is a vehicle"<<endl;
    }
};
class fourwheel:public vehicle{
    public:
    fourwheel(){
        cout<<"objects with four wheels "<<endl;
    }

};
class car:public fourwheel{
    public:
    car(){
        cout<<"car has 4 wheels"<<endl;
    }


};
int main(){
    car c;
    return 0;
}
//"MULTIple  INHERITANCE"
class A  
{  
    protected:  
     int a;  
    public:  
    void get_a(int n)  
    {  
        a = n;  
    }  
};  
  
class B  
{  
    protected:  
    int b;  
    public:  
    void get_b(int n)  
    {  
        b = n;  
    }  
};  
class C : public A,public B  
{  
   public:  
    void display()  
    {  
        std::cout << "The value of a is : " <<a<< std::endl;  
        std::cout << "The value of b is : " <<b<< std::endl;  
        cout<<"Addition of a and b is : "<<a+b;  
    }  
};  
int main()  
{  
   C c;  
   c.get_a(10);  
   c.get_b(20);  
   c.display();  
  
    return 0;  
}  
class Base{
    protected:
    int val;
};
class Derived1:virtual public Base{
    public:
    Derived1(){
        val=1;
    }
    void getvalue(){
        cout<<"DERIVED 1 OF DATA MEMBER IS:"<<val<<endl;
    }

};
class Derived2:virtual public Base{
    public:
    Derived2(){
        val=2;
    }
    void getvalue(){
        cout<<"DERIVED 2 OF DATA MEMBER IS:"<<val<<endl;
    }

};
class Derived3:public Derived1,public Derived2{
    public:
    void getvalue(){
        //Derived1::getvalue();
        Derived1::getvalue();
    }

};
int main(){
    Derived3 obj;
    obj.getvalue();
}*/
// base class
class Vehicle
{
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};

//base class
class Fare
{
	public:
	Fare()
	{
		cout<<"Fare of Vehicle\n";
	}
};

// first sub class
class Car: public Vehicle
{

};

// second sub class
class Bus: public Vehicle, public Fare
{
	
};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base class
	Bus obj2;
	return 0;
}



