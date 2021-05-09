# Chapter 6

## 简单语句

大多数语句以分号结束。

空语句
`   ;`

## 语句作用域

在条件表达式中定义的变量必须进行初始化。

在语句中定义的变量，其作用域限制在语句中。

## if语句

```
if (conditon)
	statement
else
	statement
```

悬垂else问题
产生的一个if语句多于else语句时，对于每一个else语句到底归属与哪一个if语句。

可以通过增加花括号来避免。

## switch语句

需在每一个`case`后面加上`break`，否则，会继续执行其它语句
```
switch (case){
	case A:statement
	case B:statement
	case C:statement
	}
```

default
如果所有case都不匹配，则执行default后面的语句

如果default不需要执行任何任务，后面一定要以空语句结束

case标号必须是整型常量表达式

## while语句

```
while (condition)
{statement}
```

在循环条件中定义的变量在每一次循环中都要经历创建和撤销的过程。

## for语句

```
for (initializer;conditon;expression)
{statement}
```

可以在初始化多个同一类型的变量
```
for (int i = 0,j = 1;condition;expression)
{statement}
```

## dowhile语句

```
do
	statement
while(condition);
```

在求解condition之前，先执行do语句

要在do语句中定义变量
以下方法是错误的
```
do
	statement
while(int i = 0);
```

## continue语句

continue语句导致最近的一次迭代提前结束

## 异常处理

### throw表达式

通过throw表达式抛出异常

`throw runtime_error("Error");`

### try

```
try {
	program-statements
}catch(exception-specifier){
	handlers-statements
}catch(exception-specifier){
	handlers-statements
}
```
catch后面的是异常说明符

如果不存在处理该异常的catch语句，则跳转到标注库函数terminate，终止程序的运行。

## 使用预处理器进行调试

如果NDEBUG未定义，则会执行该语句；
如果被定义，则会跳过该语句。
```
#ifndef NDEBUG
cerr << "error" << endl
#endif
```

如果NDEBUG未定义，则会执行expr,如果结果为false，则终止程序的运行。
`assert(expr)`


