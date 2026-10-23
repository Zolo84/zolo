// FUN_00789c90 @ 789c90 size=73

undefined4 __thiscall FUN_00789c90(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_0087769c <= param_2) {
    return 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x153ee + param_2 * 0x12);
  iVar3 = 0;
  puVar2 = puVar1;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return *puVar1;
    }
    if (iVar3 == param_3) break;
    puVar2 = (undefined4 *)puVar2[2];
    iVar3 = iVar3 + 1;
  }
  return *puVar2;
}


