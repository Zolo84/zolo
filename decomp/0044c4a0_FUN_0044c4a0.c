// FUN_0044c4a0 @ 44c4a0 size=75

int __thiscall FUN_0044c4a0(int param_1,int param_2)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = -1;
  for (psVar1 = *(short **)(param_1 + 0x55c4 + param_2 * 0x12); psVar1 != (short *)0x0;
      psVar1 = *(short **)(psVar1 + 3)) {
    if ((iVar3 < *psVar1) &&
       (cVar2 = (**(code **)(*(int *)(param_1 + param_2 * 0x12 + 0x6970) + 0x24))(*psVar1),
       cVar2 == '\0')) {
      iVar3 = (int)*psVar1;
    }
  }
  return iVar3;
}


