#pragma once
#ifndef Link_List_Node_H

#endif Link_List_Node_H
#include<iostream>
using namespace std;
class Node { //��������Ԫ�ؽڵ㣬˽�г�Ա��ֵm_val��
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
	cout << "����ڵ��ֵ��";
	cin >> val;
	m_val = val;
}
Node::Node() {	
}

Node::~Node() {
	delete next;
	//cout << "�ڵ����١�\n";
}
