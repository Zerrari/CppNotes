# Chapter 11

泛型算法可以操作在多种容器类型上。

## find

使用两个迭代器和一个值调用find函数，只要找到与该值相同的元素，即返回该元素的迭代器，否则，返回第二个实参。

find从第一个迭代器遍历到第二个迭代器的前一个位置。

由于指针的行为和迭代器类似，也可以用find来查找数组。


## 只读算法

只读算法，只读取输入范围内的元素，而不会写这些元素。

accumulate将第三个实参作为初值，并将输入范围内的值累加起来
该算法在numeric头文件中定义
```
accumulate(iter1,iter2,val);
```

## 写容器的算法


fill将值写入输入范围指定的元素中去
```
fill(iter1,iter2,val);
```

fill_n
```

fill_n(ivec.begin(),10,0);
```

### back_inserter

使用插入迭代器，会在容器中插入一个新元素。

此时，fill_n的操作类似于在容器尾部插入10个元素。
```
vector<int> ivec;

fill_n(back_inserter(ivec),10,0);
```

将输入范围内的元素复制到指定的容器中
```
vector<int> ivec;

copy(iter1,iter2,back_inserter(ivec));
```

将输入范围内的每一个等于第三个实参的值替换为第四个值
```
replace(iter1,iter2,val1,val2);
```

如果不想改变原来的序列，则使用replace_copy
```
vector<int> ivec;

replace_copy(iter1,iter2,back_inserter(ivec),val1,val2);
```

## 排序算法

```
sort(iter1,iter2);
```

unique将排序后的容器进行处理，将重复元素移动到容器尾部，返回第一个重复元素的迭代器
```
unique(iter1,iter2);
```

## 迭代器

+ 插入迭代器
+ iostream迭代器
+ reverse_iterator

### 插入迭代器

+ back_inserter 创建使用push\_back实现插入的迭代器
+ front_inserter 使用push\_front实现插入
需要容器支持push\_front操作
+ inserter 带有第二实参，指向插入位置的迭代器

### iostream迭代器

+ istream_iterator 读取输入流
+ ostream_iterator 写输入流

```
创建从输入流strm读取T类型对象的迭代器
istream_iterator<T> in(strm);

istream_iterator的超出末端迭代器
istream_iterator<T> in;

ostream_iterator<T> out(strm);

ostream_iterator<T> out(strm,delim);
```

### 反向迭代器

从最后一个元素向前遍历到第一个元素，++运算访问前一个元素，--运算访问后一个元素。

### 五种迭代器

+ Input iterator 读，不能写，只支持自增运算
+ Output iterator 写，不能读，只支持自增运算
+ Forward iterator 读和写，只支持自增运算
+ Bidirectional iterator 读和写，支持自增和自减运算
+ Random access iterator 读和写，支持完整的迭代器算术运算

## 泛型算法

大多数算法采用下面四种形式之一
```
alg(beg,end,other parms);
alg(beg,end,dest,other parms);
alg(beg,end,beg2,other parms);
alg(beg,end,beg2,end2,other parms);
```



