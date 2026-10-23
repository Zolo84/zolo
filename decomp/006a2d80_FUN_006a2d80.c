// FUN_006a2d80 @ 6a2d80 size=84

undefined4 __fastcall FUN_006a2d80(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 10) == *(int *)(*(int *)(param_1 + 0x8c) + 0x3d4)) &&
     (*(int *)(*(int *)(param_1 + 0x8c) + 0x3d8) != *(int *)(param_1 + 10))) {
    return 0;
  }
  uVar2 = FUN_006a9d50();
  cVar1 = FUN_004e7d30(uVar2);
  if (cVar1 != '\0') {
    cVar1 = FUN_004a3020(*(undefined4 *)(param_1 + 0x8c),0);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}


