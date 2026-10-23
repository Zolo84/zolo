// FUN_00527ab0 @ 527ab0 size=75

int __thiscall FUN_00527ab0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = *(undefined4 **)(param_1 + 4);
  iVar5 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    puVar1 = (undefined4 *)puVar6[2];
    piVar2 = (int *)*puVar6;
    cVar3 = FUN_0044b280(*(undefined4 *)(param_2 + 6));
    if (cVar3 != '\0') {
      iVar4 = (**(code **)(*piVar2 + 0xa8))();
      iVar5 = iVar5 + iVar4;
    }
    puVar6 = puVar1;
  } while (puVar1 != (undefined4 *)0x0);
  return iVar5;
}


