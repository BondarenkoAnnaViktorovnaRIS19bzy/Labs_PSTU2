# include <iostream>
# include <conio.h>
using namespace std;
//���������
struct point
{
	int data; // ����
	
	point* left, * right;//���� � �����
};

point* tree = NULL; //����������

//�������-������ ����. � ������//
void push(int a, point** t)
{
	if ((*t) == NULL) //��� ������
	{
		(*t) = new point; 
		(*t)->data = a; 
		(*t)->left = (*t)->right = NULL; 
		return; 
	}
	//������ ����������
	if (a > (*t)->data) push(a, &(*t)->right); //������ �������� - �����
	else push(a, &(*t)->left); //���� ��� - ����
}

//�������-������//
void print(point* t, int u)
{
	if (t == NULL) return; //�����
	else //���� �� �����
	{
		print(t->left, ++u);//������� � ����
		for (int i = 0; i < u; ++i) cout << "|";
		cout << t->data << endl; //�����������  ��������
		u--;
	}
	print(t->right, ++u); //������� � �����
}

int max(int a, int b)
{
	return (a < b) ? b : a;
}

int maxVal(point* t)

{
	
	if ((t->left == NULL) && (t->right == NULL))
	return	t->data;
	else
		if (t->left == NULL)
			return max(t->data, maxVal(t->right));
		else
			if (t->right == NULL)
				return max(t->data, maxVal(t->left));
			else
				return max(t->data, max(maxVal(t->left), maxVal(t->right)));

}

// dla dreva poiska//

point* Search(point* Tree, int key) {
	if (Tree == NULL) return NULL;
	if (Tree->data == key) return Tree;
	if (key < Tree->data) return Search(Tree->left, key);
	else
		return Search(Tree->right, key);
}









void main()
{
	//int n; //���������� ���������
	int s1;
	int s2;
	int s3;
	int s4;

	cout << "KOLIHESTVO ELEMENTOV DLA VVODA=4 ";
	cout << " "<<endl;
	cin >> s1; //��������� �������
	cin >> s2; //��������� �������
		cin >> s3; //��������� �������
		cin >> s4; //��������� �������
	
	push(s1, &tree); //��������� � ������	  
	push(s2, &tree); //��������� � ������	
	push(s3, &tree); //��������� � ������	
	push(s4, &tree); //��������� � ������	
	

	cout << "DEREVO\n";
	print(tree, 0);
	cout << "NAXODIM MAXIMAL ELEMENT V DEREVE= ";
	point* t, * Curr, * Next;

	t = new point;
	t->left = NULL;
	t->right = NULL;

	t->data = s1;

	Curr = new point;
	Curr->left = NULL;
	Curr->right = NULL;
	Curr->data = s2;

	t->left = Curr;

	Curr = new point;
	Curr->left = NULL;
	Curr->right = NULL;
	Curr->data = s3;

	t->right = Curr;

	Next = new point;
	Next->left = NULL;
	Next->right = NULL;
	Next->data = s4;

	Curr->right = Next;

	cout << maxVal(t) << endl;
	// derevo poiska//
	cout << "poisk" << endl;
	int key;
	cout << "znah-> ";
	cin >> key;
	point* Tree = NULL;
	point* Tree1 = Search(Tree, key);
	if (t == NULL)
		cout << "net";
	else
		cout << "el->" << t->data;
	cout << endl;


	return ;
	
}
