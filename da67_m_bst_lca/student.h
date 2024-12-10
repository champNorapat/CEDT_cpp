#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "map_bst.h"
#include<cmath>

template <typename KeyT,
          typename MappedT,
          typename CompareT>
typename CP::map_bst<KeyT,MappedT,CompareT>::iterator CP::map_bst<KeyT,MappedT,CompareT>::recursive(node* n,CP::map_bst<KeyT,MappedT,CompareT>::iterator p, CP::map_bst<KeyT,MappedT,CompareT>::iterator q) const
{
    // You may need this function
    if(n->left == NULL && n->right == NULL) return 1;
    size_t  cnt = 0;
    if(n->left!=NULL) cnt += recursive(n->left);
    if(n->right!=NULL) cnt += recursive(n->right);
    return cnt;
}


template <typename KeyT,
          typename MappedT,
          typename CompareT>
typename CP::map_bst<KeyT,MappedT,CompareT>::iterator CP::map_bst<KeyT,MappedT,CompareT>::lca(CP::map_bst<KeyT,MappedT,CompareT>::iterator p, CP::map_bst<KeyT,MappedT,CompareT>::iterator q) const
{
    // Write your code here
    return cnt;
}

#endif
