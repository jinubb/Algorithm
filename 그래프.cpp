
//Program.c

//���⼺ ���� �׷���

#include <stdio.h>

#include <stdlib.h>

#include <memory.h>

  

 typedef struct{//�׷��� ���� ����

     int vn; //���� ����

     int **matrix;//�׷��� ���� ���

 }Graph;

  

 Graph *MakeGraph();//�׷��� �����

 void ViewNeighbors(Graph *g);//�̿� ���� �����ֱ�

 void DeleteGraph(Graph *graph);//�׷��� �Ҹ�

 

 int main(void)

 {         

     Graph *graph;

     graph = MakeGraph();//�׷��� �����     

     ViewNeighbors(graph); //�̿� ���� �����ֱ�

     DeleteGRaph(graph);//�׷��� �Ҹ�

     return 0;

 }

  

 Graph *NewGraph(int max_vertex);//�׷��� ���� ����

 void AddEdge(Graph *graph, int start, int goal);//���� �߰�

 Graph *MakeGraph()

 {

     Graph *graph;

     graph = NewGraph(9);//�׷��� ���� ����

     AddEdge(graph, 0, 1);//���� �߰�

     AddEdge(graph, 0, 2);//���� �߰�

     AddEdge(graph, 1, 2);//���� �߰�

     AddEdge(graph, 1, 3);//���� �߰�

     AddEdge(graph, 2, 4);//���� �߰�

     AddEdge(graph, 3, 6);//���� �߰�

     AddEdge(graph, 4, 5);//���� �߰�

     AddEdge(graph, 4, 6);//���� �߰�

     AddEdge(graph, 4, 7);//���� �߰�

     AddEdge(graph, 6, 8);//���� �߰�

     return graph;

 }

 Graph *NewGraph(int max_vertex)

 {

     int i = 0;

     Graph *graph = (Graph *)malloc(sizeof(Graph));//�׷��� �޸� ���� �Ҵ�

     graph->vn = max_vertex;//�ִ� ���� ���� ����

     graph->matrix = (int **)malloc(sizeof(int *)*max_vertex);//��Ʈ���� �޸� �Ҵ�

     for (i = 0; i < max_vertex; i++)

     {

         graph->matrix[i] = (int *)malloc(sizeof(int)*max_vertex);//��ũ���� [i-row] �޸� �Ҵ�

         memset(graph->matrix[i], 0, sizeof(int)*max_vertex);//�޸� 0���� �ʱ�ȭ

     }

     return graph;

 }

 void DeleteGRaph(Graph *graph)

 {

     int i = 0;

     

     for (i = 0; i < graph->vn; i++)//�ִ� ���� ������ŭ

     {

         free(graph->matrix[i]);//��Ʈ���� [i-row]  �޸� �Ҹ�

     }

     free(graph->matrix);//��Ʈ���� �޸� ����

     free(graph);//�׷��� �޸� ����

 }

 void AddEdge(Graph *graph, int start, int goal)

 {

     graph->matrix[start][goal] = 1;//���� ����

     graph->matrix[goal][start] = 1;//���� ����

 }

 void ViewNeighbor(Graph *g,int vt);

 void ViewNeighbors(Graph *g)

 {

     int i;     

     printf("=== �̿� ���� ===\n");

     for (i = 0; i < g->vn; i++)

     {

         printf("%d�� �̿�: ",i);

         ViewNeighbor(g,i);//i������ �̿� �����ֱ�

         printf("\n");

     }     

 }

 void ViewNeighbor(Graph *g,int vt)

 {

     int i;

     for (i = 0; i < g->vn; i++)

     {

         if(g->matrix[vt][i])

         {

             printf("%d ",i);

         }

     }

 }

 

