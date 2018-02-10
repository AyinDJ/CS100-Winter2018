#include <iostream>
#include <list>
#include "strategy.h"
#include "list_container.h"
#include "component.h"
#include "container.h"

using namespace std;

void ListContainer::add_element(Base* element) {
	container.push_back(element);
}

void ListContainer::print() {
	list<Base*>::iterator index;

	for (index = container.begin(); index != container.end(); ++index) {
		cout << (*index)->evaluate() << endl;
	}
}

void ListContainer::sort() {
	sort_function->sort(this);
}

void ListContainer::swap(int i, int j) {
	list<Base*>::iterator it1 = container.begin();
	int counter1 = i;

	while (counter1 != 0) {
		++it1;
		--counter1;
	}

	list<Base*>::iterator it2 = container.begin();
	int counter2 = j;

	while (counter2 != 0) {
		++it2;
		--counter2;
	}

	//swapping
	Base* temp = *it1;
	*it1 = *it2;
	*it2 = temp;
}

Base* ListContainer::at(int i) {
	list<Base*>::iterator index = container.begin();
	int counter = i;

	while (counter != 0) {
		++index;
		--counter;
	}

	return *index;
}

unsigned ListContainer::size() {
	return container.size();
}