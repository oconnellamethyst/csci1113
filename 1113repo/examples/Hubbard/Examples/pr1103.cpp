// Problem 11.3, page 231

void sort(Type* a, int n)
{
  BinarySearchTree t;
  for (int i=0; i < n; i++)
    t.insert(a[i]);
  t.load(a);
}
