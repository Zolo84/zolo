// FUN_005f1bf0 @ 5f1bf0 size=114

void __fastcall FUN_005f1bf0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_007ed714;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
  }
  if (param_1[1] != 0) {
    iVar2 = param_1[2];
    iVar1 = iVar2 + -1;
    param_1[2] = iVar1;
    while (iVar2 != 0) {
      puVar3 = *(undefined4 **)(param_1[1] + iVar1 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(param_1[1] + param_1[2] * 4) = 0;
      iVar2 = param_1[2];
      iVar1 = iVar2 + -1;
      param_1[2] = iVar1;
    }
    FUN_00796cd8(param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


