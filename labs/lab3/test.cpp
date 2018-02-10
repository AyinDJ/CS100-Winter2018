#include <iostream>
#include "component.h"
#include "vectorContainer.h"
#include "list_container.h"
#include "strategy.h"
#include "op.h"
#include "add.h"
#include "sub.h"
#include "mult.h"
#include "div.h"
#include "sqr.h"
#include "decorator.h"
using namespace std;

int main() {
    Op* op1 = new Op(5);
    Op* op2 = new Op(3.5);
    Op* op3 = new Op(4);
    Op* op4 = new Op(6);
    Mult* A = new Mult(op1, op2);
    Sub* B = new Sub(op3, op4);
    Add* C = new Add(A, B);
    Sqr* D = new Sqr(C);

    cout << D->evaluate() << endl;

   // vectorContainer* container = new vectorContainer();
   // ListContainer* container = new ListContainer();
   // container->add_element(A);
   // container->add_element(B);
   // container->add_element(D);
   // cout << "Container Before Sort: " << endl;
   // container->print();
   // container->set_sort_function(new BubbleSort());
   // container->sort();	
   // cout << "Container After Sort: " << endl;
   // container->print(); 
   Floor* f = new Floor(A);
   cout << f->evaluate()<<endl;
   Ceil* ce = new Ceil(A);
   cout << ce->evaluate()<<endl;
   Abs* ab = new Abs(B);
   cout << ab->evaluate()<<endl;
  
};
