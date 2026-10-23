// FUN_0050a2b0 @ 50a2b0 size=41

void __fastcall FUN_0050a2b0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x42);
  while (((int)*(short *)(DAT_00893530 + 0x18) < *piVar2 || (*(int *)(param_1 + 0x22) <= iVar1))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (3 < iVar1) {
      return;
    }
  }
  *(int *)(param_1 + 0x22) = iVar1;
  return;
}


