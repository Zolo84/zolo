// FUN_006a8f10 @ 6a8f10 size=110

void __thiscall FUN_006a8f10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x13c84) + 0xe) != '\0') {
    iVar1 = FUN_004694b0(*(undefined4 *)(*(int *)(param_2 + 4) + 0x12));
    iVar2 = _rand();
    if (iVar2 % 100 < iVar1) {
      FUN_0045fb90(*(undefined4 *)(*(int *)(param_2 + 4) + 0x12));
      FUN_00488dc0(param_2);
      return;
    }
    FUN_0045fa80(*(undefined4 *)(*(int *)(param_2 + 4) + 0x12));
  }
  FUN_00488dc0(param_2);
  return;
}


