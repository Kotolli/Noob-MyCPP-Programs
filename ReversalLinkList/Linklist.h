#pragma once
#include<iostream>
#include"LinklistNode.h"
//����������
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
//��ת����_������
Node* Linklist::ReversalList_itera() {
	if (!this->head->next) {
		cout << "����Ϊ�ա�\n";
		return this->head;
	}
	else if( !this->head->next->next) {
		cout << "�����һԪ�ء�\n";
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
//˳���ӡ���������ֵ
Node* Linklist::PrintLinklist() {
	if (this->head->next == nullptr) {
		cout << "����Ϊ�ա�";
		return this->head;
	}
	else {
		Node* temp = this->head->next;//tempָ��ͷ�ڵ����һ���ڵ�
		int num=1;
		while (temp) {
			cout << "��<" << num << ">���ڵ�Ԫ��ֵΪ��" << temp->PrintValue()<<endl;
			temp = temp->next;
			num++;
		}
		delete temp;
		cout << "�ͷ���ʱ������";
	}
	return this ->head;
}
//ͷ�巨�������Ԫ�ؽڵ�
Node* Linklist::AddNode() {
	Node* newNode = new Node;
	newNode->next = this->head->next;
	newNode->SetValue();
	head->next = newNode;
	return head;
}
//����һ������ͷ�ڵ����Ϊnode_num������
Linklist::Linklist(int node_num)
{
	this->head = new Node;
	for (int i = 0; i < node_num;i++) {
		cout << "��ʼ����<" << node_num - i << ">���ڵ�...";
		AddNode();
	}
	cout << "�ѽ���һ������Ϊ<" << node_num << ">������\n";
}
//Ĭ�ϳ�ʼ��һ��������
Linklist::Linklist()
{
	this->head = new Node;
}

Linklist::~Linklist()
{
	delete head;
	//cout << "�������١�";
}