// FUN_005f1c90 @ 5f1c90 size=148

int __thiscall FUN_005f1c90(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x12) + 4))(param_2);
  if ((((iVar3 != 0) && (iVar4 = (**(code **)(*param_2 + 8))(), iVar4 == 0xe)) &&
      (*(int *)(*(int *)(param_1 + 0xc) + 0x22) != 0)) && (*(int *)(param_1 + 4) != 0)) {
    iVar1 = *(int *)(param_1 + 8);
    iVar4 = iVar1 + -1;
    *(int *)(param_1 + 8) = iVar4;
    while (iVar1 != 0) {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + iVar4 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4) = 0;
      iVar1 = *(int *)(param_1 + 8);
      iVar4 = iVar1 + -1;
      *(int *)(param_1 + 8) = iVar4;
    }
    FUN_00796cd8(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return iVar3;
}


