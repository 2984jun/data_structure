#include  "sqlist.cpp"

int main(void)
{
    SqList *L;
    ElemType e;
    printf("˳����Ļ����������£�\n");
    printf(" (1)��ʼ��˳���L\n");
    InitList(L);
    printf(" (2)���β���a,b,c,d,eԪ��\n");
    ListInsert(L,1,'a');
    ListInsert(L,2,'b');
    ListInsert(L,3,'c');
    ListInsert(L,4,'d');
    ListInsert(L,5,'e');
    
    printf(" (3)���˳���L:");
    DispList(L);

    printf(" (4)˳���L����:%d\n",ListLength(L));

    printf(" (5)˳���LΪ%s\n",(ListEmpty(L)?"��":"�ǿ�"));

    GetElem(L,3,e);
    printf(" (6)˳���L�ĵ�3��Ԫ��:%c\n");

    printf(" (7)Ԫ��a��λ��:%d\n",LocateElem(L,'a'));

    printf(" (8)�ڵ�4��Ԫ��λ���ϲ���fԪ��\n");

    printf(" (10)ɾ��L�ĵ�3��Ԫ��\n");
    ListDelete(L,3,e);
    
    printf(" (11)���˳���L:");
    DispList(L);
    printf(" (12)�ͷ�˳���L\n");
    DestroyList(L);
    getchar();
    return 0;
}