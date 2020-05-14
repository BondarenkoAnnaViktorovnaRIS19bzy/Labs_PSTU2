# include <iostream>
# include <conio.h>
using namespace std;
//структура
struct point
{
	int data; // поле
	
	point* left, * right;//лево и право
};

point* tree = NULL; //переменная

//функция-запись элем. в дерево//
void push(int a, point** t)
{
	if ((*t) == NULL) //нет дерева
	{
		(*t) = new point; 
		(*t)->data = a; 
		(*t)->left = (*t)->right = NULL; 
		return; 
	}
	//Дерево существует
	if (a > (*t)->data) push(a, &(*t)->right); //больше текущего - право
	else push(a, &(*t)->left); //если нет - лево
}

//Функция-печать//
void print(point* t, int u)
{
	if (t == NULL) return; //пусто
	else //если не пусто
	{
		print(t->left, ++u);//переход в лево
		for (int i = 0; i < u; ++i) cout << "|";
		cout << t->data << endl; //отображение  элемента
		u--;
	}
	print(t->right, ++u); //переход в право
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
	//int n; //Количество элементов
	int s1;
	int s2;
	int s3;
	int s4;

	cout << "KOLIHESTVO ELEMENTOV DLA VVODA=4 ";
	cout << " "<<endl;
	cin >> s1; //Считываем элемент
	cin >> s2; //Считываем элемент
		cin >> s3; //Считываем элемент
		cin >> s4; //Считываем элемент
	
	push(s1, &tree); //добавляем в дерево	  
	push(s2, &tree); //добавляем в дерево	
	push(s3, &tree); //добавляем в дерево	
	push(s4, &tree); //добавляем в дерево	
	

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
