#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aAAAA, _bBBBB, _cCCCC;
   printf("Enter _aAAAA:");
   scanf("%d", &_aAAAA);
   printf("Enter _bBBBB:");
   scanf("%d", &_bBBBB);
   printf("Enter _cCCCC:");
   scanf("%d", &_cCCCC);
   if ((_aAAAA > _bBBBB))
   {
   if ((_aAAAA > _cCCCC))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _cCCCC);
   goto Outofif;
Abigger:
   printf("%d\n", _aAAAA);
   goto Outofif;
   }
   }
   if ((_bBBBB < _cCCCC))
   {
   printf("%d\n", _cCCCC);
   }
   else
   {
   printf("%d\n", _bBBBB);
   }
Outofif:
   if (((_aAAAA == _bBBBB) && (_aAAAA == _cCCCC) && (_bBBBB == _cCCCC)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_aAAAA < 0) || (_bBBBB < 0) || (_cCCCC < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(_aAAAA < (_bBBBB + _cCCCC))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
