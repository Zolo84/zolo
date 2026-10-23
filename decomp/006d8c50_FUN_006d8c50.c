// FUN_006d8c50 @ 6d8c50 size=116

undefined4 __fastcall FUN_006d8c50(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x4504) + 4))();
  iVar5 = 0;
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      puVar1 = *(undefined4 **)(param_1 + 0x4508);
      for (iVar4 = iVar6; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = (undefined4 *)puVar1[2];
      }
      cVar2 = (**(code **)(*(int *)*puVar1 + 0x28))();
      if (cVar2 != '\0') {
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x2220e);
  if (*(int *)(iVar3 + 0x18) <= iVar5) {
    if (iVar3 != 0) {
      FUN_006d65d0();
      FUN_00796cd8(iVar3);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
  }
  return 1;
}


