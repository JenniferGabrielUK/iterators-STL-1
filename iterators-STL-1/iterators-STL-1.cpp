// iterators-STL-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <iterator>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <list>

void display(const std::vector<int>& vec) {
    std::cout << "[ ";
    for (const auto& i : vec) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << std::setw(33) << std::setfill('-') << "\n" << std::endl;
    std::vector<int> nums1{ 1,2,3,4,5,6,7,8,9,10};
    auto it1 = nums1.begin(); //point to 1
    std::cout << *it1 << std::endl;

    it1++;
    std::cout << *it1 << std::endl; //points to the 2

    it1 += 2;
    std::cout << *it1 << std::endl; //points to the 4

    it1 -= 2;
    std::cout << *it1 << std::endl; //points to the 2

    it1 = nums1.end() - 1;
    std::cout << *it1 << std::endl; //points to the 10
}

void test2() {
    std::cout << std::setw(33) << "\n" << std::setfill('-') << std::endl;
    std::vector<int> nums1{ 1,2,3,4,5,6,7,8,9,10 };
    auto it1 = nums1.begin(); //points to the 1
    while (it1 != nums1.end()) {
        std::cout << *it1 << " ";
        it1++;
    } 
    std::cout << std::endl;

    it1 = nums1.begin();
    while (it1 != nums1.end()) {
        *it1 = 0;
        it1++;
    }
    display(nums1);
}

void test3() {
    std::cout << std::setw(33) << "\n" << std::setfill('-') << std::endl;
    std::vector<int> nums1{ 1,2,3,4,5,6,7,8,9,10 };
    std::vector<int>::const_iterator it1 = nums1.begin();
    //auto it1 = nums1.cbegin();
    while (it1 != nums1.end()) {
        std::cout << *it1 << " ";
        it1++;
    }
    std::cout << std::endl;
    display(nums1);
}

void test4() {
    std::cout << std::setw(33) << "\n" << std::setfill('-') << std::endl;
    std::vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
    auto it1 = vec.rbegin(); //reverse iterator over vector of ints satrts at 10
    while (it1 != vec.rend()) {
        std::cout << *it1 << " ";
        it1++;
    }
    std::cout << std::endl;
    //const reverse iterator over a list
    std::list<std::string> name{ "Jenny", "Elizabeth", "Gabriel" };
    auto it2 = name.crbegin(); //iterator points to Gabriel
    std::cout << *it2 << " ";
    it2++;
    std::cout << *it2 << " ";
    std::cout << std::endl;
    //iterator over a map
    std::map<std::string, std::string> favourites{
        {"Jenny", "C++"},
        {"Elizabeth", "Coding"},
        {"Gabriel", "C++17"}
    };
    auto it3 = favourites.begin(); //iterator over a map of string to string pairs
    while (it3!= favourites.end()) {
        std::cout << it3->first << " : " << it3->second << std::endl;
        it3++;
    }
}

void test5() {
    std::cout << std::setw(33) << "\n" << std::setfill('-') << std::endl;
    //iterate over a subset of a container
    std::vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
    auto start = vec.begin() +2; //starts at 3
    auto finish = vec.end() -3; //finish at 8
    while (start != finish) {
        std::cout << *start << std::endl;
        start++;
    }
    std::cout << std::setw(33) << "\n" << std::setfill('-') << std::endl;
}

int main()
{
    std::cout << std::setw(33) << std::setfill('-') << "\n" << std::endl;
    std::vector <int> vec1{ 1,2,3,4,5 };
    display(vec1);
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}

