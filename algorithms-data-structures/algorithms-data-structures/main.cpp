#include "includes.h"
#include "hash.h"
#include "trieSearchDFS.h"
#include "linkedlist.h"
#include "doublylinkedlist.h"
#include "circularlylinkedlist.h"

int main() {

	//testing binary tree class
	binaryTree btree = binaryTree();
	btree.insert(8);
	btree.insert(2);
	btree.insert(3);
	btree.insert(5);
	btree.insert(10);
	btree.insert(7);
	btree.print_tree();

	//testing stack class
	stack tStack = stack(2);
	stack_el e1 = stack_el();
	stack_el e2 = stack_el();
	e1.val = 1;
	e2.val = 2;
	tStack.push(e1);
	tStack.push(e2);
	tStack.print_size();
	tStack.print_stack();
	tStack.pop();
	tStack.pop();
	tStack.print_size();
	
	//testing sorting algs
	const int size = 10;
	int arr1[size];

	int* arr = genRand(size, arr1);
	insertionSort(arr, 10);

	arr = genRand(size, arr1);
	bubbleSort(arr, 10);

	arr = genRand(size, arr1);
	selectionSort(arr, 10);


	cout << "Running MergeSort: ";
	clock_t start = clock();
	double duration;
	vector<int> arrv = { 0, 2, 6, 4, 3, 5, 7, 9, 8 };
	arrv = mergeSort(arrv);
	for (vector<int>::iterator it = arrv.begin(); it != arrv.end(); it++)
		cout << *it << " ";
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout << " // Run time on " << size << " elements: " << duration;
	cout << endl;

	//testing search algs
	int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size2 = 9;
	int val = 3;
	cout << "Binary Search: " << binarySearch(arr2, val, 0, size2) << endl;


	//binary search of rotated array
	int arr3[] = { 5, 6, 7, 8, 1, 2, 3 };
	int size3 = 7;
	int val2 = 1;
	cout << "Rotated Binary Search: " << binaryRotated(arr3, val2, 0, size3) << endl;
    val2 = 8;
	cout << "Rotated Binary Search: " << binaryRotated(arr3, val2, 0, size3) << endl;
	val2 = 6;
	cout << "Rotated Binary Search: " << binaryRotated(arr3, val2, 0, size3) << endl;
	val2 = 2;
	cout << "Rotated Binary Search: " << binaryRotated(arr3, val2, 0, size3) << endl;
	
	//hash
	hash_arr h = hash_arr(5);
	int arr4[] = { 1, 3, 5, 7, 8 };
	int arr5[] = { 3, 4, 7, 1, 2};

	for (int i = 0; i < 5; i++) {
		h.insert(arr4[i]);
		h.insert(arr5[i]);
	}
	
	//find common elements
	cout << "Common elements: ";
	h.commonElements();

	//primes
	findPrimes(50);
    
    //fibonacci sequences
    //fibRecur(10);
    //fibDynam(10);
    
    decryptShiftCypher(2, encryptShiftCypher(2, "Hello World"));
    
    cout << "\nTesting Trie DFS Search: " << endl;
    list<string>* foundStrings = new list<string>();
    trieNode* rootNode = new trieNode();
    trieInsert(rootNode, "Michael");
    trieInsert(rootNode, "Dwight");
    trieInsert(rootNode, "Jim");
    trieInsert(rootNode, "Pam");
    trieInsert(rootNode, "Angela");
    trieInsert(rootNode, "Oscar");
    trieInsert(rootNode, "Mark");
    trieInsert(rootNode, "Mathew");
    trieInsert(rootNode, "Luke");
    trieInsert(rootNode, "John");

    cout << "Search term 'M': " << endl;
    trieSearch(rootNode, "M", "", foundStrings);
    cout << "Search term 'Ma': " << endl;;
    trieSearch(rootNode, "Ma", "", foundStrings);
    cout << "Search term 'Mar': " << endl;;
    trieSearch(rootNode, "Mar", "", foundStrings);
    cout << "Search term 'J': " << endl;;
    trieSearch(rootNode, "J", "", foundStrings);
    cout << "Search term 'Ji': " << endl;;
    trieSearch(rootNode, "Ji", "", foundStrings);
    
    delete foundStrings;
    delete rootNode;
    
    cout << "Testing LinkedList: " << endl;
    Node* node = new Node();
    node->value = 1;
    LinkedList* list1 = new LinkedList(node);
    list1->append(2);
    list1->push(3);
    list1->insert(1, 4);
    list1->print();
    cout << "index 2: " << list1->get(2)->value << endl;
    cout << "size: " << list1->size() << endl;
    cout << "recursiveSize: " << list1->sizeRecursive(list1->headNode) << endl;
    list1->deleteIndex(2);
    list1->print();
    list1->deleteKey(1);
    list1->print();
    list1->erase();
    list1->print();
    
    cout << "Testing DoublyLinkedList: " << endl;
    Node* node2 = new Node();
    node2->value = 1;
    DoublyLinkedList* list2 = new DoublyLinkedList(node2);
    list2->append(2);
    list2->push(3);
    list2->insert(1, 4);
    list2->print();
    cout << "index 2: " << list2->get(2)->value << endl;
    cout << "size: " << list2->size() << endl;
    cout << "recursiveSize: " << list2->sizeRecursive(list2->headNode) << endl;
    list2->deleteIndex(2);
    list2->print();
    list2->deleteKey(1);
    list2->print();
    list2->erase();
    list2->print();
    
    cout << "Testing CircularlyLinkedList: " << endl;
    Node* node3 = new Node();
    node3->value = 1;
    CircularlyLinkedList* list3 = new CircularlyLinkedList(node3);
    list3->append(2);
    list3->push(3);
    list3->insert(1, 4);
    list3->print();
    cout << "index 2: " << list3->get(2)->value << endl;
    cout << "size: " << list3->size() << endl;
    cout << "recursiveSize: " << list3->sizeRecursive(list3->headNode) << endl;
    list3->deleteIndex(2);
    list3->print();
    list3->deleteKey(1);
    list3->print();
    list3->erase();
    list3->print();

    return 0;
}
