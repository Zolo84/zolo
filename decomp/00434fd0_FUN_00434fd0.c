// FUN_00434fd0 @ 434fd0 size=84

undefined4 __fastcall FUN_00434fd0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x3e);
  do {
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)puVar4[2];
    piVar2 = (int *)*puVar4;
    iVar5 = (**(code **)(*piVar2 + 0x18))();
    iVar3 = *(int *)(param_1 + 0x2a);
    iVar6 = iVar6 + iVar5;
    puVar4 = puVar1;
  } while ((iVar6 < iVar3) || (iVar5 = (**(code **)(*piVar2 + 0x18))(), iVar6 - iVar3 < iVar5));
  return 1;
}


