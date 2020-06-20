#include <iostream>
#include <iomanip>
#include <fstream>
#include <chrono>

#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"

using namespace std;

double bst_tree(const std::string& filename, const std::string& search_file, const std::string& delete_file){
    int x;
    int sum;
	ifstream inFile;
	inFile.open(filename);
	if (!inFile) {
		cerr << "Unable to open file datafile.txt";
		exit(1);   // call system to stop
	}

	BST tree_obj;
	tree_obj.print_in_order();

	// Record start time
	auto start = std::chrono::high_resolution_clock::now();

	while (inFile >> x) {
		tree_obj.put(x,123);
	}

	// Record end time
	auto finish = std::chrono::high_resolution_clock::now();

//	bst_obj.print_in_order();
	cout << "BST Tree" << endl;
	cout << "Filename: " << filename << endl;

	// Print elapsed time
	std::chrono::duration<double> elapsed = finish - start;
	cout << "Elapsed time for insert: " << elapsed.count() * 1000 * 1000 << " micro seconds\n";
	cout << "Tree height: " << tree_obj.height() << endl;

	inFile.close();

	ifstream searchFile;
	searchFile.open(search_file);
	if (!searchFile) {
		cerr << "Unable to open searchFile datafile.txt";
		exit(1);   // call system to stop
	}

	// Record start time
	auto start2 = std::chrono::high_resolution_clock::now();

	while (searchFile >> x) {
		tree_obj.get(x);
	}

	// Record end time
	auto finish2 = std::chrono::high_resolution_clock::now();

	// Print elapsed time
	std::chrono::duration<double> elapsed2 = finish2 - start2;
	cout << "Elapsed time for search: " << elapsed2.count() * 1000 * 1000 << " micro seconds\n";
	cout << "Tree height: " << tree_obj.height() << endl;

	searchFile.close();

	ifstream deleteFile;
	deleteFile.open(delete_file);
	if (!deleteFile) {
		cerr << "Unable to open searchFile datafile.txt";
		exit(1);   // call system to stop
	}

	// Record start time
	auto start3 = std::chrono::high_resolution_clock::now();

	while (deleteFile >> x) {
		tree_obj.del(x);
	}

	// Record end time
	auto finish3 = std::chrono::high_resolution_clock::now();

	// Print elapsed time
	std::chrono::duration<double> elapsed3 = finish3 - start3;
	cout << "Elapsed time for delete: " << elapsed3.count() * 1000 * 1000 << " micro seconds\n";
	cout << "Tree height: " << tree_obj.height() << endl;

	deleteFile.close();

	return elapsed.count();
}

double splay_tree(const std::string& filename, const std::string& search_file, const std::string& delete_file){
    int x;
    int sum;
	ifstream inFile;
	inFile.open(filename);
	if (!inFile) {
		cerr << "Unable to open file datafile.txt";
		exit(1);   // call system to stop
	}

	SplayTree tree_obj;
	tree_obj.print_in_order();

	// Record start time
	auto start = std::chrono::high_resolution_clock::now();

	while (inFile >> x) {
		tree_obj.put(x,123);
	}

	// Record end time
	auto finish = std::chrono::high_resolution_clock::now();

	cout << "Splay Tree" << endl;
//	bst_obj.print_in_order();
	cout << "Filename: " << filename << endl;

	// Print elapsed time
	std::chrono::duration<double> elapsed = finish - start;
	cout << "Elapsed time for insert: " << elapsed.count() * 1000 * 1000 << " micro seconds\n";
	cout << "Tree height: " << tree_obj.height() << endl;

	inFile.close();

	ifstream searchFile;
	searchFile.open(search_file);
	if (!searchFile) {
		cerr << "Unable to open searchFile datafile.txt";
		exit(1);   // call system to stop
	}

	// Record start time
	auto start2 = std::chrono::high_resolution_clock::now();

	while (searchFile >> x) {
		tree_obj.get_ele(x);
	}

	// Record end time
	auto finish2 = std::chrono::high_resolution_clock::now();

	// Print elapsed time
	std::chrono::duration<double> elapsed2 = finish2 - start2;
	cout << "Elapsed time for search: " << elapsed2.count() * 1000 * 1000 << " micro seconds\n";
	cout << "Tree height: " << tree_obj.height() << endl;

	searchFile.close();

	ifstream deleteFile;
	deleteFile.open(delete_file);
	if (!deleteFile) {
		cerr << "Unable to open searchFile datafile.txt";
		exit(1);   // call system to stop
	}

	// Record start time
	auto start3 = std::chrono::high_resolution_clock::now();

	while (deleteFile >> x) {
		tree_obj.del(x);
	}

	// Record end time
	auto finish3 = std::chrono::high_resolution_clock::now();

	// Print elapsed time
	std::chrono::duration<double> elapsed3 = finish3 - start3;
	cout << "Elapsed time for delete: " << elapsed3.count() * 1000 * 1000 << " micro seconds\n";
	cout << "Tree height: " << tree_obj.height() << endl;

	deleteFile.close();

	return elapsed.count();
}


double rb_tree(const std::string& filename, const std::string& search_file, const std::string& delete_file){
    int x;
    int sum;
	ifstream inFile;
	inFile.open(filename);
	if (!inFile) {
		cerr << "Unable to open file datafile.txt";
		exit(1);   // call system to stop
	}

	RBTree tree_obj;
	tree_obj.print_in_order();

	// Record start time
	auto start = std::chrono::high_resolution_clock::now();

	while (inFile >> x) {
		tree_obj.put(x,123);
	}

	// Record end time
	auto finish = std::chrono::high_resolution_clock::now();

	cout << "RB Tree" << endl;
//	bst_obj.print_in_order();
	cout << "Filename: " << filename << endl;

	// Print elapsed time
	std::chrono::duration<double> elapsed = finish - start;
	cout << "Elapsed time for insert: " << elapsed.count() * 1000 * 1000 << " micro seconds\n";
	cout << "Tree height: " << tree_obj.height() << endl;

	inFile.close();


	ifstream searchFile;
	searchFile.open(search_file);
	if (!searchFile) {
		cerr << "Unable to open searchFile datafile.txt";
		exit(1);   // call system to stop
	}

	// Record start time
	auto start2 = std::chrono::high_resolution_clock::now();

	while (searchFile >> x) {
		tree_obj.get(x);
	}

	// Record end time
	auto finish2 = std::chrono::high_resolution_clock::now();

	// Print elapsed time
	std::chrono::duration<double> elapsed2 = finish2 - start2;
	cout << "Elapsed time for search: " << elapsed2.count() * 1000 * 1000 << " micro seconds\n";
	cout << "Tree height: " << tree_obj.height() << endl;

	searchFile.close();

	ifstream deleteFile;
	deleteFile.open(delete_file);
	if (!deleteFile) {
		cerr << "Unable to open searchFile datafile.txt";
		exit(1);   // call system to stop
	}

	// Record start time
	auto start3 = std::chrono::high_resolution_clock::now();

	while (deleteFile >> x) {
		tree_obj.del(x);
	}

	// Record end time
	auto finish3 = std::chrono::high_resolution_clock::now();

	// Print elapsed time
	std::chrono::duration<double> elapsed3 = finish3 - start3;
	cout << "Elapsed time for delete: " << elapsed3.count() * 1000 * 1000 << " micro seconds\n";
	cout << "Tree height: " << tree_obj.height() << endl;

	deleteFile.close();


	return elapsed.count();
}



int main() {

	string filename1 = "/home/dulanj/eclipse-workspace/CS5701_assignment_1/src/data/data_1.txt";
	string filename2 = "/home/dulanj/eclipse-workspace/CS5701_assignment_1/src/data/data_2.txt";
	string search_file = "/home/dulanj/eclipse-workspace/CS5701_assignment_1/src/data/search_data.txt";
	string delete_file = "/home/dulanj/eclipse-workspace/CS5701_assignment_1/src/data/delete_data.txt";

    bst_tree(filename1, search_file, delete_file);
    bst_tree(filename2, search_file, delete_file);

    splay_tree(filename1, search_file, delete_file);
    splay_tree(filename2, search_file, delete_file);

    rb_tree(filename1, search_file, delete_file);
    rb_tree(filename2, search_file, delete_file);

    return 0;
}
