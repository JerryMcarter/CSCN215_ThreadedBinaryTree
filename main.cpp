// CSIN215 - Jeremiah Carter


// Includes
#include <iostream>
#include "BST.h"


int main() {
	BST<int, string> testTree;

	cout << "CSCN215 - Lab 2 - Jeremiah Carter" << endl << endl;

	// inserting KV pairs from docc

	testTree.insert(77, "seventy-seven");
	testTree.insert(70, "seventy");
	testTree.insert(75, "seventy-five");
	testTree.insert(66, "sixty-six");
	testTree.insert(79, "seventy-nine");
	testTree.insert(68, "sixty-eight");
	testTree.insert(67, "sixty-seven");
	testTree.insert(69, "sixty-nine");
	testTree.insert(90, "ninety");
	testTree.insert(85, "eighty-five");
	testTree.insert(83, "eighty-three");
	testTree.insert(87, "eighty-seven");
	testTree.insert(65, "sixty-five");

	// size test
	cout << "My BST tree size is " << testTree.size() << endl;

	// print/printHelp() test
	cout << "My Tree's Structure is..." << endl << endl;

	testTree.print(); // printing stree structure

	cout << endl << "Inorder printing of my tree..." << endl;
	cout << endl;

	// inorder test
	testTree.printInorder(); // printing values according to inorder traversal

	cout << endl << "Reverse printing of my tree..." << endl;
	cout << endl;

	// reverse test
    testTree.printReverse(); // printing values according to reverse inorder traversal.

	system("pause");
	return 0;
}