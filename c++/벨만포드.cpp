#include  <stdio.h>

#include  <stdlib.h>

#include  <string.h>

#include  <limits.h>



//  ����  ����ü

//  src  =  ������,  dest  =  ������,  weight  =  ����ġ

struct Edge
{
    int src, dest, weight;
};

// �׷��� ����ü

// V :: ������ �� E :: ������ ��

// edge :: ������ �������� � �� �ٸ�  ������  �����ϱ�  ����  ����

struct  Graph
{
        int  V,  E;
        struct  Edge*  edge;

};

//  V��  E��  ����  ������  ������  ����  ����  �׷�����  �����Ѵ�.

struct  Graph*  createGraph(int  V,  int  E)

{

        struct  Graph*  graph  =  (struct  Graph*)  malloc(sizeof(struct  Graph));
        graph->V  =  V;
        graph->E  =  E;
        graph->edge  =  (struct  Edge*)  malloc(graph->E  *  sizeof(struct  Edge));
        return  graph;
}

  

//  �����  ����ϱ�  ����  �Լ�

void  printArr(int  dist[],  int  n)

{

        printf("Vertex      Distance  from  Source\n");

        for  (int  i  =  0;  i  <  n;  ++i){
                dist[i]==INT_MAX ? printf("%d\t\tINF\n",i) : printf("%d\t\t%d\n",i,dist[i]);
			}

}

  

//  src���    ���  �ٸ�  ����������  �ִ�  �Ÿ  ��  ã���ִ�  BellmanFord  �Լ��̴�.

//  ����  ����ġ  ����  ������  �����ϴ�.

void  BellmanFord(struct  Graph*  graph,  int  src)

{

        int  V  =  graph->V;

        int  E  =  graph->E;

        int  *dist  =  (int*)malloc(sizeof(int)*V);  //  int  dist[V+1]��  ����.

  

                                                                                          //  ���  �ִ�  �Ÿ  ��  ���Ѵ��  �������ְ�,  ������(src)��  0����  �ʱ��    �Ѵ�.

        for  (int  i  =  0;  i  <  V;  i++)

                dist[i]  =  INT_MAX;

        dist[src]  =  0;

  

        //  ����  ����  �˰�  ��

        for  (int  i  =  1;  i  <=  V  -  1;  i++)

        {

                for  (int  j  =  0;  j  <  E;  j++)

                {

                        int  u  =  graph->edge[j].src;

                        int  v  =  graph->edge[j].dest;

                        int  weight  =  graph->edge[j].weight;

                        //  ����u��(��������)  ���Ѵ밡  �ƴϰ�,  

                        //  ������������  �ִ�  �Ÿ    +  ����ġ��  ��������  ����ġ  

                        //  ����  ����  ��  �������    ���ش�.

                        if  (dist[u]  !=  INT_MAX  &&  dist[u]  +  weight  <  dist[v])

                                dist[v]  =  dist[u]  +  weight;

                }

        }

  

        //  ����  ����ġ  ���  ��  ������  �ִ�  ��ΰ�  �۾�����  ����  �ִٸ�

        //  Ž���Ͽ�  �˷��ش�.

        for  (int  i  =  0;  i  <  E;  i++)

        {

                int  u  =  graph->edge[i].src;

                int  v  =  graph->edge[i].dest;

                int  weight  =  graph->edge[i].weight;

                //  if�  ���    ������ġ  �ִܰŸ    +  ����ġ��  ����ؼ    ��  �۾���  ���

                //  ����  ����Ŭ��  �ִٰ�  �Ǵ��Ѵ�.

                if  (dist[u]  !=  INT_MAX  &&  dist[u]  +  weight  <  dist[v])

                        printf("Graph  contains  negative  weight  cycle\n");

        }

  

        printArr(dist,  V);

  

        return;

}

  

  

int  main(void)

{

        int  V  =  8;    //  ������  ��

        int  E  =  11;    //  ������  ��

        struct  Graph*  graph  =  createGraph(V,  E);

  

        //  �׷���  ������  �Է����ش�.

        graph->edge[0].src  =  4;  //  0���    

        graph->edge[0].dest  =  5;  //  2��  ����  ������

        graph->edge[0].weight  =  250;  //  ����ġ��  1��  ���Ѵ�.

  

        graph->edge[1].src  =  4;

        graph->edge[1].dest  =  3;

        graph->edge[1].weight  =  1500;

  

        graph->edge[2].src  =  3;

        graph->edge[2].dest  =  2;

        graph->edge[2].weight  =  1200;

  

        graph->edge[3].src  =  2;

        graph->edge[3].dest  =  1;

        graph->edge[3].weight  =  800;

  

        graph->edge[4].src  =  1;

        graph->edge[4].dest  =  0;

        graph->edge[4].weight  =  300;

  

        graph->edge[5].src  =  2;

        graph->edge[5].dest  =  0;

        graph->edge[5].weight  =  1000;

  

        graph->edge[6].src  =  7;

        graph->edge[6].dest  =  0;

        graph->edge[6].weight  =  1700;

  

        graph->edge[7].src  =  5;

        graph->edge[7].dest  =  7;

        graph->edge[7].weight  = 1400;

  

        graph->edge[8].src  =  5;

        graph->edge[8].dest  =  6;

        graph->edge[8].weight  =  900;
        
        
        graph->edge[9].src  =  6;

        graph->edge[9].dest  =  7;

        graph->edge[9].weight  =  1000;

  

        graph->edge[10].src  =  5;

        graph->edge[10].dest  =  3;

        graph->edge[10].weight  =  1000;
  

        BellmanFord(graph,  4);

  

        return  0;

}
