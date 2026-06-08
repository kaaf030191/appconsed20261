#ifndef NODE_CPP
#define NODE_CPP

struct Node {
public:
	Node() {}
	Node(int value): value(value), next(nullptr){}
//	Node(int value) {
//		this->value = value;
//		this->next = nullptr;
//	}
	
	int value;
	
	Node *next;
};

#endif
