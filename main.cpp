#include <iostream>

using namespace std;

int main()
{
  int a[]={12, -14, 7, 23, 5, -71, 4};
  int i, n, p, flag, aux;
  n=7;
  p=0;
  do
     {
       flag = 0;                     // initializare in afara ciclului de parcurgere a sirului
       for (i = 0; i < n-1-p; i++)
           {
             if(a[i] > a[i+1])
                {
                   aux = a[i];
                   a[i] = a[i+1];
                   a[i+1] = aux;
                   flag = 1;         // marchez ca s=a facut o inversare
                  }
             }
         p++;
       }

   while(flag != 0);                 // cand flag ramane 0 sirul este ordonat si ciclul nu se mai reia
   // afisez sirul
   for(i = 0; i < n; i++)
      {
        cout << a[i] << " ";
      }
     return 0;
}

