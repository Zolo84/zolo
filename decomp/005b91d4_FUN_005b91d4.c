// FUN_005b91d4 @ 5b91d4 size=85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b91d4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x244) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x244) + 4);
    *(undefined4 *)(iVar1 + 8) = _DAT_0088f28c;
    *(undefined2 *)(iVar1 + 0xc) = DAT_0088f28e._2_2_;
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  return;
}


