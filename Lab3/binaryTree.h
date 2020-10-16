struct Node {
	int value;
	Node* left, *right;
};

class Tree {
private:
	int setValue();
	void insert(int value, Node* leaf); //auxiliary func for public method
	void delTree(Node* leaf); //auxiliary func for destructor
public:
	Node* root;
	Tree();
	Tree(int n); 
	~Tree();
	Node* copyTree(Node* oldRoot, Node* newRoot); //copy tree
	void insert(int value); // pushing the value 
	unsigned int leavesCount(Node* root); //count of leaves
};