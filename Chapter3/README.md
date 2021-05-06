# Chapter 3

## 内置变量的初始化
+ 函数体外的变量被初始化为0
+ 函数体内的变量不进行自动初始化

## string

### 初始化

```
定义一个空字符串
string x; 
将x1初始化为x2的副本
string x1(x2);
将x3初始化为字符串副本
string x3('abcd');
将x4初始化为n个字符的副本
string x4(n,'c');
```

### string变量的读写

+ 读取并忽略开头的空白字符（如空格，换行符和制表符）
+ 读取到下一个空白字符停止

#### 读入未知数目的字符串

```
while (cin >> s)
{statement}
```

#### getline

+ 不忽略换行符，即使读取到的第一个字符为换行符，也将他输出

### string对象的基本操作

```
s.empty();
s.size();
s[n];
s1+s2;
s1 = s2;
s1 == s2;
```

#### 和字符串字面值的连接

```
string s1("hello");
string s2("world"');
string s3 = s1 + s2;
string s4 = s1 + "world";
string s5 = "hello" + s2;
string s6 = "hello" + ","; error
string s7 = "hello" + " " + s2; error
```


## vector

*vector*是同一种类型对象的集合。

### 构造函数

```
vector<T> v1;
vector<T> v1(v2);
vector<T> v1(n,i);
vector<T> v1(n); 根据类型初始化，如int为0，string为空字符串
```

### vector对象的操作

```
v.empty();
v.size();
v.push_back(); 将一个新元素添加到vector的尾部
v[n];
v1 = v2;
v1 == v2;
```

下标操作只能对已知元素进行操作。

## 迭代器

`vector<int>::iterator iter = v.begin();`

+ begin 指向第一个元素
+ end 指向末端元素的下一个

用解引用来访问迭代器指向的元素
`*iter`

用自增来迭代
`iter++`

### 迭代器的算术操作

+ iter + n
+ iter - n
+ iter1 -iter2 迭代器必须指向同一个容器中的元素

## bitset

### 初始化

```
bitset<n> b;
bitset<n> b(u); 
bitset<n> b(s);
bitset<b> b(s,pos,n);
```

用unsigned long和string来初始化bitset对象，高位不足置0，溢出舍弃，值得注意的是string来初始化要反向写入。
