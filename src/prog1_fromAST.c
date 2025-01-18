#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _aAAAA;
   int _bBBBB;
   int _xXXXX;
   int _yYYYY;
   printf("Enter _aAAAA:");
   scanf("%d", &_aAAAA);
   printf("Enter _bBBBB:");
   scanf("%d", &_bBBBB);
   printf("%d\n", (_aAAAA + _bBBBB));
   printf("%d\n", (_aAAAA - _bBBBB));
   printf("%d\n", (_aAAAA * _bBBBB));
   printf("%d\n", (_aAAAA / _bBBBB));
   printf("%d\n", (_aAAAA % _bBBBB));
   _xXXXX = (((_aAAAA - _bBBBB) * 10) + ((_aAAAA + _bBBBB) / 10));
   _yYYYY = (_xXXXX + (_xXXXX % 10));
   printf("%d\n", _xXXXX);
   printf("%d\n", _yYYYY);
   system("pause");
    return 0;
}
