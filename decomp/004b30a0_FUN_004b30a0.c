// FUN_004b30a0 @ 4b30a0 size=93

void __thiscall FUN_004b30a0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    while( true ) {
      piVar1 = piVar4 + 1;
      puVar2 = (undefined4 *)*piVar4;
      if (puVar2[1] == param_2) break;
      piVar4 = (int *)*piVar1;
      if ((int *)*piVar1 == (int *)0x0) {
        return;
      }
    }
    (**(code **)(*(int *)(param_1 + 4) + 0x18))(puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = puVar2[1];
      if (iVar3 != 0) {
        FUN_004b1b50();
        FUN_00796cd8(iVar3);
      }
      FUN_00796cd8(*puVar2);
      FUN_00796cd8(puVar2);
    }
  }
  return;
}


