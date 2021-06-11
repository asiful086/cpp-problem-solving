// 2. ==============basic structure , cout with std and without std;

// #include <iostream>

// int main()
// {
// 	int a = 30;
// 	std::cout << a;
// 	return 0;
// }
// 3. ============comment ,
// This is my the third video
// 4. ============ data types, char mistakes, global variables
// #include <iostream>
// using namespace std;

// int glo = 9;
// int main()
// {
// 	glo = 20;
// 	int a = 12, b = 13;
// 	char character = 'dd';
// 	cout << "The value of a is " << a << " And the value of b is " << b << endl;
// 	float pi = 3.1416;
// 	cout << "This is tutorial four.\nThe value of pi is " << pi << endl;
// 	cout << "This is global variable " << glo << endl;
// 	return 0;
// }

// 5. ============ cout << "enter the value of number one :\n"; cin>>a; and without \n

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int a, b;
// 	cout << "Enter the value of number one :\n";
// 	cin>>a;
// 	cout <<a;
// 	return 0;
// }

// 6. ============ a++, a--, less than equal to , Greater than equal to, && , || :glo

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int a = 0;
// 	cout << "The value of a is " << a << endl;
// 	cout << "The value of a++ is " << a++ << endl;
// 	cout << "The value of a-- is " << a-- << endl;
// 	int x = 10, y = 20;
// 	cout << ((x == y) && (x < y)) << endl;
// 	cout << ((x == y) || (x < y)) << endl;
// 	cout << ((x == y) || (x < y)) << endl;
// 	return 0;
// }

// 7. ============reference varialbe typecasting

// #include <iostream>

// using namespace std;

// int main()
// {
// 	float d = 34.4;
// 	long double e = 34.4;
// 	34.4l; // will pass as a double 34.4L
// 	34.4f; // will pass as a folating point number 34.4F
// 	// sizeof()
// 	// float x = 4;
// 	// float &y = x;
// 	// y = 2;
// 	// cout << x << y;
// 	int a = 45;
// 	float z = 2.222;
// 	cout << "The value of a is " << float(a) << endl;
// 	cout << "The value of a is " << (float)a << endl;
// 	cout << "The value of z is " << int(z) << endl;

// 	return 0;
// }

// 8. ============const int a = 3, <ismanip>,  setw(24),
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
// 	const float pi = 3.34;
// 	// pi = 30;
// 	cout << "The value of pi is " << pi << endl;
// 	cout << "The value of pi is " << setw(20) << pi << endl;
// 	return 0;
// }

// 9. ============ if(){}else if(){}else{}

// #include <iostream>
// using namespace std;

// int main()
// {
// if(){

// }else if(){

// }else{

// }

// if ((age > 18) && (age > 0))
// {
// }
// 	int age = 20;
// 	switch (age)
// 	{
// 	case 18:
// 	{
// 		break;
// 	}
// 	case 20:
// 	{
// 		cout << "The value is " << age << endl;
// 		break;
// 	}
// 	default:
// 	{
// 		break;
// 	}
// 	}
// 	return 0;
// }

// 10. ============loops, do while loop

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int i = 1;
// 	do
// 	{
// 		cout << i << endl;
// 		i++;
// 	} while (false);

// 	return 0;
// }

// 11. ============ Break and continue

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i <= 5; i++)
//     {
//         if (i == 2)
//         {
//             continue;
//         }
//         cout << i << endl;
//     }

//     return 0;
// }

// 12. ============ pointers

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a = 30;
//     int *b = &a;

//     int **c = &b;

//     int ***d = &c;
//     cout << "The value of a is " << a << endl;
//     cout << "The value of b is " << b << endl;
//     cout << "The value of *b is " << *b << endl;
//     cout << "===========" << endl;
//     cout << "The value of c is " << c << endl;
//     cout << "The value of **c is " << **c << endl;
//     cout << "The value of *c is " << *c << endl;
//     cout << "===========" << endl;
//     cout << "The value of d is " << d << endl;
//     cout << "The value of ***d is " << ***d << endl;
//     cout << "The value of **d is " << **d << endl;
//     cout << "The value of *d is " << *d << endl;

//     // joida star ase oi gor ager variable a jar address othoba jei address store kora ase

//     return 0;
// }

// 13. ============ int arr[]={} or int arr[4]={4 ta item}

// #include <iostream>
// using namespace std;

// int main()
// {

//     int makrs[] = {1, 3, 40, 2};
//     // makrs[0] = 20;
//     // cout << makrs[0] << endl;
//     // cout << makrs[3] << endl;
//     // cout << "==============" << endl;

//     // for (int i = 0; i < sizeof(makrs) / sizeof(makrs[0]); i++)
//     // {
//     //     cout << makrs[i] << endl;
//     // }

//     int *p = makrs;
//     cout << *p << endl;
//     cout << *(p + 1) << endl;
//     cout << *(p + 2) << endl;
//     cout << *(p + 3) << endl;
//     return 0;
// }

// 14. ============ Structures, Unions, Enums

// #include <iostream>
// using namespace std;

// typedef struct employee
// {
//     int id;
//     char favChar;
//     float salary;
// } ep;

// union money
// {
//     int rice;
//     char car;
//     float pounds;
// };

// enum meal
// {
//     breakfast,
//     launch,
//     dinner
// };

// int main()
// {

//     // // struct employee mridul;
//     // ep mridul;

//     // mridul.id = 2039432;
//     // mridul.favChar = 'd';
//     // mridul.salary = 23.32;

//     // cout << "Mrduls id is " << mridul.id << endl;
//     // cout << "Mrduls favChar is " << mridul.favChar << endl;
//     // cout << "Mrduls salary is " << mridul.salary << endl;

//     // union money m1;
//     // m1.rice = 34;
//     // m1.car = 'd';
//     // cout << m1.car << endl;

//     // cout << breakfast << endl;
//     // cout << launch << endl;
//     // cout << dinner << endl;

//     // meal m1 = launch;

//     // cout << m1 << endl;
//     // cout << (m1 == 1) << endl;

//     return 0;
// }

// 15. ============ Functions and Functions prototypes
// #include <iostream>

// using namespace std;

// // int sum(int a, int b);
// int sum(int, int);

// void g(void);
// void g();

// int main()
// {

//     // actual parameter
//     cout << "The sum of two number is : " << sum(5, 2) << endl;
//     g();
//     return 0;
// }

// // formal parameter
// int sum(int a, int b)
// {
//     return a + b;
// }

// void g(void) // void oise optional
// {
//     cout << "hello world from c++";
// }

// 16. ============call by value and call by reference

// #include <iostream>
// using namespace std;

// void swapWithPointer(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int &swapWithRefVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }

// int main()
// {
//     int a = 2, b = 3;

//     cout << "a is " << a << endl;
//     cout << "b is " << b << endl;

//     // int temp = a;
//     // a = b;
//     // b = temp;

//     // swapWithPointer(&a, &b);
//     swapWithRefVar(a, b) = 766;

//     cout << "a is " << a << endl;
//     cout << "b is " << b << endl;

//     return 0;
// }

// 17. ============ inline function, static var,  Default argument, constant argument

// #include <iostream>
// using namespace std;

// inline int mul(int a, int b)
// {
//     // static int c = 0;
//     // c = c + 1; static variable is not recommended in inline function;
//     return a * b;
// }

// int sum(int a = 10, int b = 10)
// {
//     return a + b;
// }

// // int cnstArg(const char* p){

// // }

// int main()
// {
//     int a, b;
//     cout << "Enter the value of a and b" << endl;
//     cin >> a >> b;
//     cout << "multi is " << mul(a, b) << endl;
//     cout << "multi is " << mul(a, b) << endl;
//     cout << "multi is " << mul(a, b) << endl;
//     cout << "multi is " << mul(a, b) << endl;
//     cout << "sum is " << sum(a, b) << endl;
//     return 0;
// }

// 18. ============ recursions and recursive

// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main()
// {
//     int a = 10;
//     cout << factorial(a) << endl;
//     int total = a * (a - 1);
//     return 0;
// }

// 19. ============ Function overloading

// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     return a + b;
// }

// int sum(int a, int b, int c)
// {
//     return a + b + c;
// }

// int main()
// {
//     int a = 3, b = 9, c = 10;
//     cout << sum(a, b) << endl;
//     cout << sum(a, b, c) << endl;
//     return 0;
// }

// 21. ============ classes, public, private access modifiers

// #include <iostream>
// using namespace std;

// class Employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setData(int a, int b, int c);
//     void getData()
//     {
//         cout << "a is " << a << endl;
//         cout << "b is " << b << endl;
//         cout << "c is " << c << endl;
//         cout << "d is " << d << endl;
//         cout << "e is " << e << endl;
//     }
// };

// void Employee::setData(int x, int y, int z)
// {
//     a = x;
//     b = y;
//     c = z;
// }

// int main()
// {

//     Employee mridul;
//     mridul.d = 20;
//     mridul.e = 10;
//     mridul.setData(2, 3, 4);
//     mridul.getData();
//     cout << "===========" << endl;

//     cout << mridul.d;

//     return 0;
// }

// 22. ============ Nesting of memebers function

// class Employee
// {
//     // properties and function
// } asiful, haque, mridul;

// #include <iostream>

// using namespace std;

// class Binary
// {
//     string s;
//     void chk_bin();

// public:
//     void read()
//     {
//         cout << "Enter the string :" << endl;
//         cin >> s;
//         chk_bin();
//     }
// };

// void Binary::chk_bin()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "Incorrect binary format" << endl;
//             exit(0);
//         }
//     }
// }

// int main()
// {

//     Binary b1;

//     b1.read();
//     // b1.chk_bin();

//     return 0;
// }

// 23. ============ object memory allocation & using classes.
// #include <iostream>
// using namespace std;

// class Shop
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;

// public:
//     void initCounter(void)
//     {
//         counter = 0;
//     }
//     void setPrice(void);
//     void displayPrice(void);
// };

// void Shop::setPrice(void)
// {
//     cout << "Enter Id of your item is no " << counter + 1 << endl;
//     cin >> itemId[counter];
//     cout << "Enter price of your item" << endl;
//     cin >> itemPrice[counter];
//     counter++;
// }

// void Shop::displayPrice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i];
//     }
// }

// int main()
// {

//     Shop myDokan;
//     myDokan.initCounter();
//     myDokan.setPrice();
//     myDokan.displayPrice();

//     return 0;
// }

// 24. ============static data memebers and methods.

// #include <iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     static int count;

// public:
//     void setData()
//     {
//         cout << "Enter the id :" << endl;
//         cin >> id;
//         count++;
//     }
//     void getData()
//     {
//         cout << "The id is " << id << " and the employee is " << count << endl;
//     }

//     static void getCount(void)
//     {
//         cout << "The value of count is " << count << endl;
//     }
// };

// int Employee::count = 1000; //Default value is 0

// int main()
// {

//     Employee asiful, mridul, haque;

//     asiful.setData();
//     asiful.getData();

//     mridul.setData();
//     mridul.getData();

//     haque.setData();
//     haque.getData();

//     Employee::getCount();
//     return 0;
// }

// 25. ============ array of objects &  Passing objecta as function Argument

// #include <iostream>
// using namespace std;

// // class Employee
// // {
// //     int id;
// //     int salary;

// // public:
// //     void setId()
// //     {
// //         salary = 122;
// //         cout << "Enter the id :" << endl;
// //         cin >> id;
// //     }
// //     void getId()
// //     {
// //         cout << "The id is " << id << " and the employee is " << endl;
// //     }
// // };

// class Complex
// {
//     int a;
//     int b;

// public:
//     void setData(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void setDataBySum(Complex o1, Complex o2)
//     {
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }

//     void printNumber()
//     {
//         cout << "Your complex number is " << a << "+" << b << "i" << endl;
//     }
// };

// int main()
// {
//     // Employee fb[4];
//     // for (int i = 0; i < 4; i++)
//     // {
//     //     fb[i].setId();
//     //     fb[i].getId();
//     // }

//     Complex c1, c2, c3;

//     c1.setData(1, 2);
//     c1.printNumber();

//     c2.setData(3, 4);
//     c2.printNumber();

//     c3.setDataBySum(c1, c2);
//     c3.printNumber();
//     return 0;
// }

// 26. ============ Friend function

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

//     // friend Complex sumComplex(Complex o1, Complex o2); private a takle o kno problem nai.
// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void printNumber()
//     {
//         cout << "your number is " << a << "+" << b << "i" << endl;
//     }

//     friend Complex sumComplex(Complex o1, Complex o2);
// };

// Complex sumComplex(Complex o1, Complex o2)
// {
//     Complex o3;
//     o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
//     return o3;
// }

// int main()
// {

//     Complex c1, c2, sum;

//     c1.setNumber(1, 2);
//     c2.setNumber(3, 4);
//     c1.printNumber();
//     c2.printNumber();

//     sum = sumComplex(c1, c2);

//     sum.printNumber();

//     return 0;
// }

// 27. ============ Friend classes and members

// #include <iostream>
// using namespace std;

// // forward declaration // I will be here below
// class Complex;

// class Calculator
// {

// public:
//     int add(int a, int b)
//     {
//         return a + b;
//     }

//     int sumRealComplex(Complex o1, Complex o2);
//     int sumComComplex(Complex o1, Complex o2);
// };

// class Complex
// {
//     int a, b;
//     // indivudually make friend of function
//     // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
//     // friend int Calculator::sumComComplex(Complex o1, Complex o2);

//     //make the whole class a friend;
//     friend class Calculator;

// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void printNumber()
//     {
//         cout << "your number is " << a << "+" << b << "i" << endl;
//     }
// };

// int Calculator::sumRealComplex(Complex o1, Complex o2)
// {
//     return (o1.a + o2.a);
// }
// int Calculator::sumComComplex(Complex o1, Complex o2)
// {
//     return (o1.b + o2.b);
// }

// int main()
// {
//     Complex o1, o2;
//     o1.setNumber(1, 4);
//     o2.setNumber(5, 7);

//     Calculator calc;

//     int res = calc.sumRealComplex(o1, o2);
//     int resc = calc.sumComComplex(o1, o2);

//     cout << "The sum of real number is " << res << endl;
//     cout << "The sum of complex number is " << resc << endl;
//     return 0;
// }

// 28. ============ more on c++ Friend functions

// #include <iostream>

// using namespace std;

// // class Y;

// // class X
// // {
// //     int data;

// // public:
// //     void setValue(int value)
// //     {
// //         data = value;
// //     }
// //     friend void add(X, Y);
// // };

// // class Y
// // {
// //     int num;

// // public:
// //     void setValue(int value)
// //     {
// //         num = value;
// //     }
// //     friend void add(X, Y);
// // };

// // void add(X o1, Y o2)
// // {
// //     cout << "summing data of x and y objects gives me " << o1.data + o2.num << endl;
// // }
// class c2;

// class c1
// {
//     int val1;
//     friend void exchange(c1 &x, c2 &y);

// public:
//     void indata(int a)
//     {
//         val1 = a;
//     }
//     void display(void)
//     {
//         cout << val1 << endl;
//     }
// };

// class c2
// {
//     int val2;
//     friend void exchange(c1 &x, c2 &y);

// public:
//     void indata(int a)
//     {
//         val2 = a;
//     }
//     void display(void)
//     {
//         cout << val2 << endl;
//     }
// };

// void exchange(c1 &x, c2 &y)
// {
//     int temp = x.val1;
//     x.val1 = y.val2;
//     y.val2 = temp;
// }

// int main()
// {

//     // X a1;
//     // a1.setValue(3);
//     // Y b1;
//     // b1.setValue(5);

//     // add(a1, b1);

//     c1 oc1;
//     c2 oc2;

//     oc1.indata(34);
//     oc2.indata(67);

//     cout << "The value c1 after  exchanging become: " << endl;
//     oc1.display();
//     cout << "The value c2 after exchanging become: " << endl;
//     oc2.display();
//     exchange(oc1, oc2);
//     cout << "The value c1 after  exchanging become: " << endl;
//     oc1.display();
//     cout << "The value c2 after exchanging become: " << endl;
//     oc2.display();
//     // 12:50 min

//     return 0;
// }

// 29. ============ Constructor

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     Complex(void);
//     void printNumber()
//     {
//         cout << "your number is " << a << "+" << b << "i" << endl;
//     }
// };

// Complex ::Complex(void) // this is default constructor
// {
//     a = 0;
//     b = 0;
// }

// int main()
// {
//     Complex c;
//     c.printNumber();
//     return 0;
// }

// 30. ============ parameterized and Default Constructor

// #include <iostream>
// using namespace std;

// // class Complex
// // {
// //     int a, b;

// // public:
// //     Complex(int x, int y);
// //     void printNumber()
// //     {
// //         cout << "your number is " << a << "+" << b << "i" << endl;
// //     }
// // };

// // Complex ::Complex(int x, int y)
// // {
// //     a = x;
// //     b = y;
// // }

// class Point
// {
//     int x, y;

// public:
//     Point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }

//     void displayPoint()
//     {
//         cout << "The pont is (" << x << ", " << y << ")" << endl;
//     }
// };

// int main()
// {
//     // // Implicit call
//     // Complex a(4, 6);

//     // // explicit call
//     // Complex b = Complex(2, 3);

//     // a.printNumber();
//     // b.printNumber();

//     Point p(1, 1);
//     p.displayPoint();
//     Point q(4, 6);
//     q.displayPoint();

//     return 0;
// }