#pragma once
#ifndef Link_List_Node_H

#endif Link_List_Node_H
#include<iostream>
using namespace std;
class Node { //定义链表元素节点，私有成员数值m_val，
public:
	Node();
	~Node();	
	void SetValue();
	int PrintValue();
	Node* next=nullptr;
	
private:
	int m_val;

};
int Node::PrintValue() {
	return m_val;
}
void Node::SetValue() {
	int val;
	cout << "输入节点的值：";
	cin >> val;
	m_val = val;
}
Node::Node() {	
}

Node::~Node() {
	delete next;
	//cout << "节点销毁。\n";
}
