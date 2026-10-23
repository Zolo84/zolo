// FUN_006d8610 @ 6d8610 size=127

undefined4 __fastcall FUN_006d8610(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  puVar3 = *(undefined4 **)
            (*(int *)(DAT_00ab27b4 + 0x1c2 + *(int *)(param_1 + 0x22206) * 0x4b2) + 4);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    piVar2 = (int *)*puVar3;
    cVar4 = (**(code **)(*piVar2 + 0x28))();
    puVar3 = puVar1;
    if (cVar4 != '\0') {
      iVar5 = (**(code **)(*piVar2 + 0xac))();
      iVar6 = iVar6 + iVar5;
    }
  }
  iVar5 = *(int *)(param_1 + 0x2220e);
  if (*(int *)(iVar5 + 0x18) <= iVar6) {
    if (iVar5 != 0) {
      FUN_006d65d0();
      FUN_00796cd8(iVar5);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
  }
  return 1;
}


