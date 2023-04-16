#include "btree.cpp"
#include<stdlib.h>

int main(void)
{
    BTNode *b,*p,*lp,*rp;
    printf("�������Ļ�����������:\n");
    printf("    (1)����������\n");
    CreateBTree(b,"A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))");
    printf("    (2)���������:");
    DispBTree(b);
    printf("\n");
    printf("    (3)H�ڵ�:");
    p=FindNode(b,'H');
    if(p!=NULL)
    {
        lp=LchildNode(p);
        if(lp!=NULL)
            printf("����Ϊ%c ",lp->data);
        else
            printf("������");
        rp=RchildNode(p);
        if(rp!=NULL)
            printf("�Һ���Ϊ%c",rp->data);
        else 
            printf("���Һ���");
    }

    printf("\n");
    printf("    (4)������b�ĸ߶�:%d\n",BTHeight(b));
    printf("    (5)�ͷŶ�����b\n");
    DestroyBTree(b);

    system("pause");
    return 0;
}