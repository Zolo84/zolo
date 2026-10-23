// FUN_00789ce0 @ 789ce0 size=56

undefined4 __thiscall FUN_00789ce0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x15dc6 + param_2 * 0x12);
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


