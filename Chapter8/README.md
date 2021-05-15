# Chapter 8

IO类型在三个独立的头文件中定义。
+ iostream
+ fstream
读写已存在的文件
+ sstream
读写在内存中存储的string对象

IO对象不可赋值和复制。
形参和返回类型不能为流类型。

如果需要传递或返回IO对象，则需要返回该对象的引用或指针。

## 输出缓冲区的管理

每个IO对象管理一个缓冲区。

刷新缓冲区
+ 程序正常结束，作为main返回工作的一部分，将会刷新缓冲区。
+ 缓冲区满的情况下，可能会刷新缓冲区。
+ 用操作符显式刷新缓冲区。
+ 用unitbuf操作符清空缓冲区。
+ 可将输入流和输出流关联起来，从而在读输入流时，刷新其关联的输出缓冲区。

### 输出缓冲区的刷新

+ endl操作符，输出一个换行符，并刷新缓冲区
+ flush操作符，不输出任何字符，刷新缓冲区
+ ends操作符，插入空字符null，刷新缓冲区

unitbuf操作符
刷新所有输出，在每次执行完写操作后，都刷新流。

下列语句等价
```
cout << unitbuf << "first" << "second" << nounitbuf;

cout << "first" << flush << "second" << flush;
```

### 将输入流与输出流绑在一起

标准库已将cin和cout绑在一起。
在执行写操作后，与之相关联的读缓冲区将被刷新。

`tie`函数可用于istream和ostream对象调用。
```
cin.tie(0);        break the tie
cin.tie(&cout);    tie cin and cout
```

## 文件的输入和输出

fstream提供了三种读写文件的类型
+ ifstream 读文件
+ ofstream 写文件
+ fstream  读写文件

### 文件流对象的使用

定义流对象
```
ifstream infile;
ofstream outfile;
```

将流对象与特定的文件绑定
```
infile = open("file.txt");
outfile = open（"file.txt");
```

或者定义和绑定一起完成
```
ifstream infile("file.txt");
```

检查文件是否打开成功
```
if (!infile)
{
	cout << "error" << endl;
}
```

将文件流与新文件捆绑,需关闭当前的文件，再打开另一个文件
```
ifstream infile("file");
infile.close();
infile.open("file2");
```

如果需要重用文件流读取多个文件，必须在读另一个文件前调用clear清除该流的状态。

### 文件模式

在打开文件时，需要指定文件模式。

+ in 打开文件做读操作
+ out 打开文件做写操作
+ app 在每次写之前，找到文件尾
+ ate 打开文件后，立刻将文件定位到尾部
+ trunc 打开文件时，清空已存在的文件流
+ binary 以二进制模式，进行IO操作

out,trunc和app只能用于ofstream和fstream
in只能用于ifstream和fstream

## 字符串流

三种类型的字符串流
+ istringstream 读string
+ osringstream 写string
+ stringstream 读写string

### 特定操作

创建自由的stringstream对象
`stringstream strm;`

创建储存s副本的是stringstream对象
`stringstream strm(s);`

返回strm中储存的string类型对象
`strm.str();`

将string类型的s复制给strm
`strm.str(s);`



