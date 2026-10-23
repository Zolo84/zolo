// FUN_00608160 @ 608160 size=102

undefined4 __fastcall FUN_00608160(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_EBX;
  int iVar3;
  undefined4 *puVar4;
  
  (**(code **)(**(int **)(param_1 + 0x32) + 0x18))
            (*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x12));
  (**(code **)(**(int **)(param_1 + 0x32) + 0x10))(unaff_EBX);
  iVar3 = *(int *)(param_1 + 0x12);
  iVar1 = *(int *)(param_1 + 0xe);
  if (*(undefined4 **)(param_1 + -0xe) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_1 + -0xe);
    do {
      puVar2 = (undefined4 *)puVar4[2];
      FUN_00413483(*puVar4,iVar1 + 0x16,iVar3,DAT_00bd1bac,0xffff,0);
      iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x2e) + 0x10);
      puVar4 = puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return 0;
}


