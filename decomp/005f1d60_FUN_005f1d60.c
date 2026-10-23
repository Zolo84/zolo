// FUN_005f1d60 @ 5f1d60 size=108

void __fastcall FUN_005f1d60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = *(int *)(param_1 + 8);
    iVar1 = iVar2 + -1;
    *(int *)(param_1 + 8) = iVar1;
    while (iVar2 != 0) {
      puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + iVar1 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4) = 0;
      iVar2 = *(int *)(param_1 + 8);
      iVar1 = iVar2 + -1;
      *(int *)(param_1 + 8) = iVar1;
    }
    FUN_00796cd8(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


