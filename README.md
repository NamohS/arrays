# Introduction

This repository contains a collection of basic C++ programs that demonstrate the use of arrays. The programs are written in C++ and have only been tested on Windows.

The programs cover a variety of topics, including:

* Creating and printing arrays 

* Accessing elements of arrays to find the maximum and minimum integer

* Linear searching in arrays

* Finding peak values in arrays

* Modifying arrays to store zeroes at end of the array

* To find peak values in a array

The programs are well-commented and easy to understand. They can be used as a learning resource for students and programmers who are interested in learning about arrays in C++.

## How to use

To run the programs, you will need to have a C++ compiler installed on your computer. You can then open the programs in a C++ IDE, such as Visual Studio Code.

The level of difficulty of the programs is basic. They are suitable for people who are new to C++ or arrays.

## Program wise explanation



#### 1] [Creating and printing arrays](exp_to_input_and_print_array.cpp) :

This code is a simple C++ program that demonstrates how to read and write integers from an array. The program first declares an array of 10 integers. Then, it prompts the user to enter 10 integers. The integers  entered by the user are stored in the array. Finally, the code prints the 10 integers stored in the array.
  
The code is divided into three main parts:
  
##### Declaring the array
The first line of code, int arr[10];, declares an array of 10 integers. The int keyword tells the compiler that the array will store integers. The [10] after the int keyword specifies that the array will have 10 elements.
  
##### Prompting the user to enter integers
The next loop, for (int i = 0; i < 10; i++), loops 10 times. Inside the loop, the cout object is used to prompt the user to enter an integer. The cin object is then used to read the integer from the user and store it in the array at index i.

###### Printing the integers
The next loop, for (int i = 0; i < 10; i++), loops 10 times. Inside the loop, the cout object is used to display the array.

The code is a simple example of how to read and write integers from an array. It can be modified to read and write other types of data, such as strings or floats. It can also be modified to perform more complex operations on the data stored in the array.
Output for the code is shown below:

<div align="left">
  <img src="exp_ar_01.jpg" width="17.5%" height="17.5%"/>
</div><br/>

#### 2] [Accessing elements of arrays to find the maximum and minimum integer](exp_max_and_min_in_arrays.cpp)

This code reads 10 integers from the user and prints the maximum and minimum values. It first declares an array of 10 integers. Then, it prompts the user to enter 10 integers. The integers entered by the user are stored in the array.

Next, the code declares two variables, max and min, to store the maximum and minimum values of the array, respectively. The max variable is initialized to the first element of the array, and the min variable is also initialized to the first element of the array.

The code then iterates over the array, comparing each element to the max and min variables. If the current element is greater than the max variable, the max variable is updated to the current element. If the current element is less than the min variable, the min variable is updated to the current element.

After the loop is finished, the code prints the max and min variables.

In other words, the code first reads 10 integers from the user. Then, it finds the largest and smallest of the 10 integers and prints them out.

Output of the code can be shown below:

<div align="left">
  <img src="exp_ar_03.jpg" width="17.5%" height="17.5%"/>
</div><br/>

#### 3]  [Linear searching in arrays](exp_linear_search_in_arrays.cpp)
The program first declares an array of 10 integers, arr[10]. Then, it prompts the user to enter 10 integers. The integers entered by the user are stored in the array.

Next, the program declares a variable, num, to store the number to search for. The program also declares a variable, count, to store the number of times the number is found in the array. Finally, the program declares an array, pos[10], to store the positions of the number in the array.

A for loop is then used to iterate over the array. Inside the loop, the if statement is used to compare the current element of the array to the num variable. If the current element is equal to the num variable, the pos[count] variable is updated to the current element. The count variable is also incremented by 1.

After the for loop is finished, the if statement is used to check if the count variable is greater than 0. If the count variable is greater than 0, the program prints the positions of the number in the array. Otherwise, the program prints a message saying that the number was not found.

Output of the program can be shown as:

<div align="left">
  <img src="expar02.jpg" width="17.5%" height="17.6%"/>
</div><br/>

#### 4] [Finding peak values in arrays](exp_to_find_peak_values_in_arrays.cpp)

This code is for finding the peak elements in an array. A peak element is an element that is greater than both of its adjacent elements. The code first takes in an array of 10 integers. Then, it iterates through the array and compares each element to its adjacent elements. If an element is greater than both of its adjacent elements, then it is a peak element and its position is stored in an array. Finally, the code prints out the positions of the peak elements.

Output of the program can be shown as:

<div align="left">
  <img src="exp_ar_04.jpg" width="17.5%" height="17.6%"/>
</div><br/>

#### 5] [Printing zeroes at last](exp_to_print_zeroes_at_last_in_arrays_by_updating.cpp)

Output of the program can be shown as:

<div align="left">
  <img src="exp_ar_05.jpg" width="17.5%" height="17.6%"/>
</div><br/>
