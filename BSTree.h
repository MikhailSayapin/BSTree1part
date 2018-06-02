using namespace std;
namespace BSTree
{
	bool a = false;
	struct Node
	{
		int data;
		Node *Right;
		Node *Left;
	};

	class Tree
	{
		Node * root = nullptr;
		void add_node(int data, Node *&NTree)
		{
			if (NTree == nullptr)
			{
				NTree = new Node{ data, nullptr, nullptr };
			}

			if (data < NTree->data)
			{
				if (NTree->Left != nullptr)
				{
					add_node(data, NTree->Left);
				}
				else
				{
					NTree->Left = new Node{ data, nullptr, nullptr };
				}
			}


			if (data > NTree->data)
			{
				if (NTree->Right != nullptr)
				{
					add_node(data, NTree->Right);
				}
				else
				{
					NTree->Right = new Node{ data, nullptr, nullptr };
				}
			}
		}

		void check_tree()
		{
			if (root == nullptr)
			{
				cerr << "Дерево пусто" << endl;
				return;
			}
		}
		void print_tree(Node *root, int space)
		{
			if (root == nullptr)
			{
				return;
			}
			int count = 1;
			space = space + count;
			print_tree(root->Right, space);
			cout << endl;

			for (int i = count; i < space; i++)
			{
				std::cout << "	";
			}
			cout << "--" << root->data << endl;
			print_tree(root->Left, space);
		}
		void straight(Node * root)
		{
			check_tree();
			cout << root->data << " ";
			if (root->Left != nullptr)
			{
				straight(root->Left);
			}
			if (root->Right != nullptr)
			{
				straight(root->Right);
			}
		}
		void symmetric(Node *root)
		{
			check_tree();
			if (root->Left != nullptr)
			{
				symmetric(root->Left);
			}

			std::cout << root->data << " ";

			if (root->Right != nullptr)
			{
				symmetric(root->Right);
			}
		}
		void inverse(Node *root)
		{
			check_tree();
			if (root->Left != nullptr)
			{
				inverse(root->Left);
			}

			if (root->Right != nullptr)
			{
				inverse(root->Right);
			}

			cout << root->data << " ";
		}
		
	public:
		Tree();
		void straight()
		{
			straight(root);
		}
		void symmetric()
		{
			symmetric(root);
		}
		void inverce()
		{
			inverse(root);
		}
		void add_node(int data)
		{
			add_node(data, root);
		}
		void print_tree()
		{
			check_tree();
			print_tree(root, 0);
		}
		
		~Tree();
	};

}
