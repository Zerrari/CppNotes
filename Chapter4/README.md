# Chapter 4

## 数组

### 初始化

+ 数组的维数必须由常量表达式定义。
+ 此常量表达式只能包含整型字面值常量，枚举常量以及初始化的const常量。
+ 非const以及要到运行时才知道值的const常量不能用来定义数组的维数。

```
const int bufsize = 512;
int staffsize = 256;
int array1[bufsize];
int array2[staffsize];    error
```

显示初始化数组元素
```
int array[3];
array[3] = {1,2,3};
```

如果没有显式初始化，则按照普通变量进行初始化。
+ 在函数体外定义，数组的元素自动初始化为0
+ 在函数体内定义，数组的元素不进行自动初始化
+ 不管在哪定义，如果数组的元素为类类型，则调用默认构造函数进行初始化，否则必须进行显式初始化
 
特殊的字符数组

用字符串字面值来初始化数组时，会添加一个额外的空字符来结束字符串。
```
char ch1[] = {'a','b','c'};      len: 3
char ch2[] = {'a','b','c','\0'}; len :4
char ch3[] = {"abc"};            len:4
```

## 指针

指针保存的是一个对象的地址。

### 指针的定义和初始化

```
int *p1;
string *p2;
string *p1,p2;    p1 is a pointer to string,p2 is a string;
```

`void*`可以保存任何类型的地址。

### 指针的操作

通过解引用来修改指针指向的值。
```
int val = 10;
int *p1 = &val;
*p1 = 20;
```

指向指针的指针
```
int val = 10;
int *p = &val;
int **ppi = &p;   ppi points to a pointer;
```

### 指针和const

指针指向const类型的数据时，指针也必须是const类型的
不能试图通过指针来修改const类型的数据
可以修改const指针指向的非const对象
```
const int val = 10;
const int *p = &val;
int *p = &val;      error
void *p = &val;     error
const void *p = &val;
```

## 字符串

c风格字符串的使用

```
char *cp = "some value";
while (*cp)
{
	//do something to *p
	cp++;
}
```

字符串结束符NULL


## 创建动态数组

### 创建 

`int *p = new int[10];`

可以在表达式后面加上一对圆括号来进行初始化
`int *p = new int[10]();`

const对象一定要进行初始化
`const int *p = new int[10]();`

new操作允许创建长度为零的动态数组。

### 释放

释放p指针指向的数组
`delete [] p`

## 多维数组

### 初始化

```
int array[2][2] = {{1,1},{2,2}};
int array[2][2] = {1,1,2,3};

其他元素被初始化为0
int array[2][2] = {{0},{1}};

只初始化了第一行元素
int array[2][2] = {0,1};
```

### 数组的指针

```
int *p[4];   array of pointers to int
int (*p)[4]; pointers to an array of 4 ints
```

