#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aAAAA;
   int _aAAA2;
   int _bBBBB;
   int _xXXXX;
   int _cCCC1;
   int _cCCC2;
   printf("Enter _aAAAA:");
   scanf("%d", &_aAAAA);
   printf("Enter _bBBBB:");
   scanf("%d", &_bBBBB);
   for (int _aAAA2 = _aAAAA; _aAAA2 <= _bBBBB; _aAAA2++)
   printf("%d\n", (_aAAA2 * _aAAA2));
   for (int _aAAA2 = _bBBBB; _aAAA2 <= _aAAAA; _aAAA2++)
   printf("%d\n", (_aAAA2 * _aAAA2));
   _xXXXX = 0;
   _cCCC1 = 0;
   while (_cCCC1 < _aAAAA)
   {
   {
   _cCCC2 = 0;
   while (_cCCC2 < _bBBBB)
   {
   {
   _xXXXX = (_xXXXX + 1);
   _cCCC2 = (_cCCC2 + 1);
   }
   }
   _cCCC1 = (_cCCC1 + 1);
   }
   }
   printf("%d\n", _xXXXX);
   _xXXXX = 0;
   _cCCC1 = 1;
   do
   {
   _cCCC2 = 1;
   do
   {
   _xXXXX = (_xXXXX + 1);
   _cCCC2 = (_cCCC2 + 1);
   }
   while (!(_cCCC2 > _bBBBB));
   _cCCC1 = (_cCCC1 + 1);
   }
   while (!(_cCCC1 > _aAAAA));
   printf("%d\n", _xXXXX);
   system("pause");
    return 0;
}
