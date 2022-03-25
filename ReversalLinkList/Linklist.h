#pragma once
#include<iostream>
#include"LinklistNode.h"
//定义链表类
class Linklist
{
public:
	Linklist();
	Linklist(int node_num);
	~Linklist();
	Node* AddNode();
	Node* PrintLinklist();
	Node* ReversalList_itera();
	Node* ReversalList_recur();


private:
	Node* head = nullptr;
};
//反转链表_迭代法
Node* Linklist::ReversalList_itera() {
	if (!this->head->next) {
		cout << "链表为空。\n";
		return this->head;
	}
	else if( !this->head->next->next) {
		cout << "链表仅一元素。\n";
		return this->head;
	}
	else {
		Node* curr = head->next;
		Node* prev = nullptr;
		Node* nextt = nullptr;
		while (curr!=nullptr)
		{
			nextt = curr->next;
			curr->next = prev;
			prev = curr;
			curr = nextt;
			/*prev = nextt;
			nextt = nextt->next;
			prev->next = curr;
			curr = prev;*/

		}
		
		this->head->next = prev;
	}
	return this->head;
}
//顺序打印所有链表的值
Node* Linklist::PrintLinklist() {
	if (this->head->next == nullptr) {
		cout << "链表为空。";
		return this->head;
	}
	else {
		Node* temp = this->head->next;//temp指向头节点的下一个节点
		int num=1;
		while (temp) {
			cout << "第<" << num << ">个节点元素值为：" << temp->PrintValue()<<endl;
			temp = temp->next;
			num++;
		}
		delete temp;
		cout << "释放临时变量。";
	}
	return this ->head;
}
//头插法添加链表元素节点
Node* Linklist::AddNode() {
	Node* newNode = new Node;
	newNode->next = this->head->next;
	newNode->SetValue();
	head->next = newNode;
	return head;
}
//建立一个不含头节点个数为node_num的链表
Linklist::Linklist(int node_num)
{
	this->head = new Node;
	for (int i = 0; i < node_num;i++) {
		cout << "初始化第<" << node_num - i << ">个节点...";
		AddNode();
	}
	cout << "已建立一个长度为<" << node_num << ">的链表。\n";
}
//默认初始化一个空链表
Linklist::Linklist()
{
	this->head = new Node;
}

Linklist::~Linklist()
{
	delete head;
	//cout << "链表销毁。";
}