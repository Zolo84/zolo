// FUN_004e24b0 @ 4e24b0 size=185

void __thiscall FUN_004e24b0(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar1 = __ftol();
    iVar2 = __ftol();
    iVar3 = __ftol();
    iVar3 = iVar3 << (param_4 & 0x1f);
    iVar4 = __ftol();
    iVar4 = iVar4 << (param_4 & 0x1f);
    if (0 < *(int *)(param_1 + 0x3c)) {
      FUN_004e2920();
    }
    FUN_004e2570((iVar1 + 8) - iVar3,(iVar2 + 0x294) - iVar4,iVar1 + 8 + iVar3,iVar4 + iVar2 + 0x294
                );
  }
  return;
}


