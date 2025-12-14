# 打印函数
## 简介
一个轻量的用于C++打印 std::vector 容器和数组的函数
## 快速使用
### 前置需求
- 支持C++11及以上的编译器
- 标准模板库STL
### 集成到你的项目
1.在源文件中包含.hpp文件
## 详细说明
### 函数文档
本库使用两个重载的TypePrint函数模板
```cpp 
template<typename VEC>
void TypePrint(const vector<VEC>& vec)
```
遍历并打印 std::vector 容器的所有元素，以空格分隔，最后换行
```cpp
template<typename ARR, size_t N>
void TypePrint(const ARR(&vec)[N])
```
遍历并打印C风格数组的所有元素，以空格分隔，最后换行
