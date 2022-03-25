// ReversalLinkList.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<vector>
#include <iostream>
#include"LinklistNode.h"
#include"Linklist.h"
int testReversalList_itera();

int main()
{
    testReversalList_itera();
}
//测试迭代反转链表
int testReversalList_itera() {

    Linklist list1(5);//自定义修改产生链表长度
    cout << "顺序打印当前链表的值：\n";
    list1.PrintLinklist();
    list1.ReversalList_itera();
    cout << "反转后顺序打印当前链表的值：\n";
    list1.PrintLinklist();
    return 1;
}
