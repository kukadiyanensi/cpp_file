/*single inheritance
  distructer
  public,private,protected
  encapsulation
  this keyword
  constructer
*/
#include<iostream.h>
#include<conio.h>

class employee
 {
  public:
    int a;
    int b;
    int n;
  protected:
    int c;
    int d;
    int e;
  private:
    int x;
    int y;

   public:
      employee()
       {
	cout<<"enter the value of n:";
	cin>>n;
	cout<<"mul is =>"<<n*n;
       }
 public:
    void sum()
    {
	cout << "enter the value of a:";
	cin >> a;

	cout << "enter the value of b:";
	cin >> b;

	cout << "your sum is =>" << a+b;
    }
 public:
    void setterx()
    {
    cout<<endl<<"enter the value of x:";
    cin>>x;

    }
    void getterx()
    {
     cout<<"x value is=>"<<x;

    }
    void settery()
    {

      cout<<endl<<"enter the value of y:";
      cin>>y;

    }
    void gettery()
    {
      cout<<"y value is=>"<<y;

    }
    void mul()
    {
      cout<<endl<<"mul is =>"<<x*y;
    }
};

class manager : public employee
 {
public:
    void sub(int c)
    {
	this->c;
	d = 50;
	e = c - d;
	cout <<endl<<"your sub is =>" << e;
    }

};

void main()
 {
 clrscr();
    employee e;
    e.sum();
    e.setterx();
    e.getterx();
    e.settery();
    e.gettery();
    e.mul();
    manager m;
    m.sub(150);

    getch();
}
