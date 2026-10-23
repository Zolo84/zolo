// FUN_00419170 @ 419170 size=317

bool __thiscall FUN_00419170(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  int unaff_retaddr;
  int local_10;
  int iStack_c;
  int iStack_8;
  
  iVar4 = FUN_00415bd0();
  if (iVar4 < 0x33) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x20))(param_2,param_3);
    return (bool)uVar3;
  }
  iVar4 = FUN_00415be0();
  if (iVar4 < 0x33) {
    if (iVar4 < 1) {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 0x32;
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(&local_10);
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1a);
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x1e);
  iVar5 = FUN_00415bd0();
  iVar6 = FUN_00415be0();
  FUN_004d8ba0(unaff_EBX - ((iVar1 * 5000) / iVar5) / 100,
               local_10 - ((iVar2 * iVar4 * 100) / iVar6) / 100,&iStack_c);
  if (unaff_retaddr < iStack_c) {
    return false;
  }
  if ((0x32 >> ((byte)DAT_00a98464 & 0x1f)) + iStack_c <= unaff_retaddr) {
    return false;
  }
  if (param_2 < iStack_8) {
    return false;
  }
  return param_2 < (iVar4 >> ((byte)DAT_00a98464 & 0x1f)) + iStack_8;
}


