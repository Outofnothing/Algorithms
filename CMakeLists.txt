cmake_minimum_required(VERSION 2.8.3)
set(name "AlgorithmCplus")
project ( ${name} )

add_compile_options(-std=c++11)

add_executable(MergeSort
        MergeSort.cpp)

add_executable(InsertionSort 
		InsertionSort.cpp)

