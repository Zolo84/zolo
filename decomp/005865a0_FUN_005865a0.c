// FUN_005865a0 @ 5865a0 size=95

void __thiscall FUN_005865a0(int param_1,undefined2 *param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x3b2c) + 0x3350) != 0) {
    cVar2 = FUN_00584e20(param_3);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0x3b2c) + 0x3350);
      *param_2 = *(undefined2 *)(iVar1 + 0xc);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(iVar1 + 0xe);
      return;
    }
  }
  *param_2 = DAT_0088f28c;
  *(undefined4 *)(param_2 + 1) = DAT_0088f28e;
  return;
}


