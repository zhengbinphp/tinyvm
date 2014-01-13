#ifndef TVM_TREE_H_
#define TVM_TREE_H_

typedef struct tvm_tree_t
{
	char *keystr;
	char *val;
	struct tvm_tree_t *left;
	struct tvm_tree_t *right;
} tvm_tree_t;

tvm_tree_t *tvm_tree_create(tvm_tree_t *node, const char *str, const void *val, int len);
int tvm_tree_add(tvm_tree_t *node, const char *str, const void *val, int len);
void *tvm_tree_find(tvm_tree_t *node, const char *str);
void tvm_tree_destroy(tvm_tree_t *node);

#endif