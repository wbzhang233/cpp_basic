cmake_minimum_required(VERSION 3.14)
project(cppBasic)

set(CMAKE_CXX_STANDARD 14)

# c++基础：编程题输入cin与getline
add_executable(main main.cpp)

# lambda表达式
add_executable(lambda lambda.cpp reloadOperator.cpp)

# 字符串比较1
add_executable(strTest strTest.cpp)

# 字符串比较
add_executable(strTest2 strTest2.cpp)

# 最大公约数
add_executable(gcd mathBasic/gcd.cpp)

# 友元函数
add_executable(friendFunc friendFunc.cpp)

# 内联函数
add_executable(inlienFunc inlienFunc.cpp)

# 类的继承
add_executable(classInheritance classInheritance.cpp)
# 重载运算符
add_executable(reloadOperator reloadOperator.cpp)
# 动态内存分配
# 异常处理
add_executable(exception exception.cpp)
# 多线程
add_executable(thread thread.cpp)
# 类定义
add_executable(classTest classTest.cpp)

############ 以下为C++标准库 ############

# 标准库cctype
add_executable(cctype cctypeTest.cpp)

# 数组和指针
add_executable(numsUsage numsUsage.cpp)

# 自定义比较函数
add_executable(sortCmpFunc sortCmpFunc.cpp)
add_executable(sortCmpFunc2 sortCmpFunc2.cpp)

############ 以下为高频面试题测试 ############
# const char* 与char const*的区别
add_executable(charConst charConstP.cpp)

# 结构体对齐问题
add_executable(structAlign structAlign.cpp)

# 虚函数动态绑定问题
add_executable(virtualFunc virtualFunc.cpp)

# 四种智能指针
add_executable(intelligentPtrs intelligentPtrs.cpp)

# sizeof与strlen
add_executable(sizeofAndStrlen sizeofAndStrlen.cpp)
