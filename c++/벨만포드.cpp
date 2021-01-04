#include  <stdio.h>

#include  <stdlib.h>

#include  <string.h>

#include  <limits.h>



//  °£¼±  ±¸Á¶Ã¼

//  src  =  ½ÃÀÛÁ¡,  dest  =  µµÂøÁ¡,  weight  =  °¡ÁßÄ¡

struct Edge
{
    int src, dest, weight;
};

// ±×·¡ÇÁ ±¸Á¶Ã¼

// V :: Á¤Á¡ÀÇ ¼ö E :: °£¼±ÀÇ ¼ö

// edge :: Æ÷ÀÎÅÍ Çü½ÄÀ¸·Î ¼ ·Î ´Ù¸¥  Á¤Á¡À»  ¿¬°áÇÏ±â  À§ÇØ  Á¸Àç

struct  Graph
{
        int  V,  E;
        struct  Edge*  edge;

};

//  V¿Í  E¸¦  ÅëÇØ  Á¤Á¡°ú  °£¼±ÀÇ  ¼ö¸¦  °¡Áø  ±×·¡ÇÁ¸¦  »ı¼ºÇÑ´Ù.

struct  Graph*  createGraph(int  V,  int  E)

{

        struct  Graph*  graph  =  (struct  Graph*)  malloc(sizeof(struct  Graph));
        graph->V  =  V;
        graph->E  =  E;
        graph->edge  =  (struct  Edge*)  malloc(graph->E  *  sizeof(struct  Edge));
        return  graph;
}

  

//  °á°ú¸¦  Ãâ·ÂÇÏ±â  À§ÇÑ  ÇÔ¼ö

void  printArr(int  dist[],  int  n)

{

        printf("Vertex      Distance  from  Source\n");

        for  (int  i  =  0;  i  <  n;  ++i){
                dist[i]==INT_MAX ? printf("%d\t\tINF\n",i) : printf("%d\t\t%d\n",i,dist[i]);
			}

}

  

//  src¿¡¼    ¸ğµç  ´Ù¸¥  Á¤Á¡±îÁöÀÇ  ÃÖ´Ü  °Å¸  ¸¦  Ã£¾ÆÁÖ´Â  BellmanFord  ÇÔ¼öÀÌ´Ù.

//  À½ÀÇ  °¡ÁßÄ¡  ±îÁö  Àû¿ëÀÌ  °¡´ÉÇÏ´Ù.

void  BellmanFord(struct  Graph*  graph,  int  src)

{

        int  V  =  graph->V;

        int  E  =  graph->E;

        int  *dist  =  (int*)malloc(sizeof(int)*V);  //  int  dist[V+1]°ú  °°´Ù.

  

                                                                                          //  ¸ğµç  ÃÖ´Ü  °Å¸  ¸¦  ¹«ÇÑ´ë·Î  ÁöÁ¤ÇØÁÖ°í,  ½ÃÀÛÁ¡(src)¸¸  0À¸·Î  ÃÊ±âÈ    ÇÑ´Ù.

        for  (int  i  =  0;  i  <  V;  i++)

                dist[i]  =  INT_MAX;

        dist[src]  =  0;

  

        //  º§¸¸  Æ÷µå  ¾Ë°í¸  Áò

        for  (int  i  =  1;  i  <=  V  -  1;  i++)

        {

                for  (int  j  =  0;  j  <  E;  j++)

                {

                        int  u  =  graph->edge[j].src;

                        int  v  =  graph->edge[j].dest;

                        int  weight  =  graph->edge[j].weight;

                        //  Á¤Á¡u°¡(½ÃÀÛÁ¡ÀÌ)  ¹«ÇÑ´ë°¡  ¾Æ´Ï°í,  

                        //  ½ÃÀÛÁ¡±îÁöÀÇ  ÃÖ´Ü  °Å¸    +  °¡ÁßÄ¡°¡  µµÂøÁ¡ÀÇ  °¡ÁßÄ¡  

                        //  º¸´Ù  ÀÛÀ»  ¶§  ¾÷µ¥ÀÌÆ    ÇØÁØ´Ù.

                        if  (dist[u]  !=  INT_MAX  &&  dist[u]  +  weight  <  dist[v])

                                dist[v]  =  dist[u]  +  weight;

                }

        }

  

        //  À½ÀÇ  °¡ÁßÄ¡  ¶§¹  ¿¡  ¹«ÇÑÈ÷  ÃÖ´Ü  °æ·Î°¡  ÀÛ¾ÆÁö´Â  °ÍÀÌ  ÀÖ´Ù¸é

        //  Å½»öÇÏ¿©  ¾Ë·ÁÁØ´Ù.

        for  (int  i  =  0;  i  <  E;  i++)

        {

                int  u  =  graph->edge[i].src;

                int  v  =  graph->edge[i].dest;

                int  weight  =  graph->edge[i].weight;

                //  if¹  ¿¡¼    ÇöÀçÀ§Ä¡  ÃÖ´Ü°Å¸    +  °¡ÁßÄ¡°¡  °è¼ÓÇØ¼    ´õ  ÀÛ¾ÆÁú  °æ¿ì

                //  À½ÀÇ  »çÀÌÅ¬ÀÌ  ÀÖ´Ù°í  ÆÇ´ÜÇÑ´Ù.

                if  (dist[u]  !=  INT_MAX  &&  dist[u]  +  weight  <  dist[v])

                        printf("Graph  contains  negative  weight  cycle\n");

        }

  

        printArr(dist,  V);

  

        return;

}

  

  

int  main(void)

{

        int  V  =  8;    //  Á¤Á¡ÀÇ  ¼ö

        int  E  =  11;    //  °£¼±ÀÇ  ¼ö

        struct  Graph*  graph  =  createGraph(V,  E);

  

        //  ±×·¡ÇÁ  Á¤º¸¸¦  ÀÔ·ÂÇØÁØ´Ù.

        graph->edge[0].src  =  4;  //  0¿¡¼    

        graph->edge[0].dest  =  5;  //  2·Î  °¡´Â  °£¼±ÀÇ

        graph->edge[0].weight  =  250;  //  °¡ÁßÄ¡´Â  1·Î  Á¤ÇÑ´Ù.

  

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
