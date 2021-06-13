# Chapter 12

## 类的定义

### 类成员

每个类可以没有成员，也可以有多个成员。

所有成员必须在类的内部声明，一旦类定义完成后,就不能在新增成员了。

### 构造函数

创建一个类类型的对象时，编译器会自动调用一个构造函数来初始化该对象。

构造函数是一个与类同名的函数。

### 成员函数

在类内部，必须声明一个成员函数，而定义一个函数是可选。

在类内部定义的函数默认为inline函数。

在类外部定义的函数必须指明它们的类作用域。

将关键字const加在形参表后，可以将该函数声明为常量。
```
double function(void) const;
```
const成员不能改变它所访问对象的成员。
const声明必须同时出现在声明和定义中。

### 数据抽象和封装

使用访问标号来实现数据抽象和封装。

+ 程序的所有部分可以访问带有public标号的成员
+ 使用类的代码不能访问带有private标号的成员

在第一个访问标号之前定义的类成员，如果是struct定义的类，则是公有的；
如果是class定义的类，则是私有的。

### 关于类定义

成员函数可以被重载

两个成员的形参数量和类型不能完全相同。

可以声明一个类，而不是定义它。
```
class Screen;
```

这个声明有时称为前向声明。
在声明之后，定义之前，类Screen是一个不完全类型。

定义类类型的对象
```
class_name item;
class class_name item;
```

类的定义必须以分号结束，因为类的最后可以接对象定义列表。
```
class name{...};
class name{...}a,b,c;
```

## this指针

this指针即指向类对象的指针。

通过this指针来访问类对象
```
返回该类对象
return *this;
```

可变数据成员
通过声明mutable来实现类数据成员可以改变。
```
mutable int nums;
```

## 构造函数

使用构造函数初始化列表来初始化
```
person():age(20),salary(100){}
```

构造函数可以被重载
```
person();
person(int age);
```
通过实参来选择调用构造函数

### 构造函数初始化式

可以包含一个构造函数初始化列表
```
person(string name):
	age(20),salary(100){}
```

### 默认构造函数

只有没有定义构造函数时，编译器才会自动生成一个默认的构造函数。

使用默认构造函数来创建对象
```
Person student;
Person student = Person();
```

### 友元

允许特定的非成员函数访问其私有成员

```
class person{
	friend class student;
};
```
student类的所有成员函数可以访问person类中的私有成员

```
class person{
	friend int student::get_age();
};
```
student类的get_age可以访问person类中的私有成员

### static类成员

每个static成员是与类相关的，而不是与类的对象相关

static成员函数可以直接访问static成员，但不能使用非static成员

static数据成员必须在类外定义

static的const型成员可以在类中初始化
