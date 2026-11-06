#include <iostream>
#include "../include/sqlite3.h"
using namespace std;

int main(){
	sqlite3* db = nullptr;
	const char* filename = "../resources/inventory.db";

	int rc = sqlite3_open(filename, &db);

	if (rc != SQLITE_OK){
		cerr << "Error connecting to the database: " << sqlite3_errmsg(db) << endl;
		sqlite3_close(db);
		return 1;
	}

	cout << "Opened database successfully\n";
	cout << "SQLite version: " << sqlite3_libversion() << "\n";

	sqlite3_close(db);
	return 0;
}
