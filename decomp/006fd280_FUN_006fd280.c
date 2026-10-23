// FUN_006fd280 @ 6fd280 size=119

void __thiscall FUN_006fd280(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  if (0 < iVar1) {
    piVar2 = (int *)(param_1 + 0x10);
    do {
      if (*(int *)(*piVar2 + 0xac) == param_2) {
        FUN_00433950();
        *(int *)(param_1 + 0x90) = iVar3;
        return;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = (int *)(param_1 + 0x10);
    do {
      if (*(char *)(*piVar2 + 0x86) == '\0') {
        FUN_00433930();
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xa0));
  }
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  return;
}


