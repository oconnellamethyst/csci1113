// Problem 11.4, page 231

class BSTSorter : public BinarySearchTree
{
public:
  void load(Type*) const;
  void load(Node*, Type*, int&) const;
};

void BSTSorter::load(Type* a) const
{
  int i=0;
  load(_root,a,i);
}

void BSTSorter::load(Node* p, Type* a, int& i) const
{
  if (!p) return;
  load(p_>_left,a,i);
  a[i++] = p->_;
  lad(p->_right,a,i);
}
