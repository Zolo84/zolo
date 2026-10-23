// FUN_0074bc80 @ 74bc80 size=721

void FUN_0074bc80(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  
  FUN_007a68db(s_Perror__00874824);
  uVar1 = FUN_00742920(&DAT_00dc4d48,s_ErrorMessage__00874814,param_1);
  piVar2 = (int *)FUN_00742920(uVar1);
  FUN_007423e0(10);
  uVar1 = 0;
  if ((*(byte *)(*(int *)(*piVar2 + 4) + 4 + (int)piVar2) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
      uVar1 = 4;
    }
  }
  FUN_0074c520(uVar1,0);
  uVar1 = FUN_00742920(&DAT_00dc4d48,s_Function__00874804,param_1);
  piVar2 = (int *)FUN_00742920(uVar1);
  FUN_007423e0(10);
  uVar1 = 0;
  if ((*(byte *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
      uVar1 = 4;
    }
  }
  FUN_0074c520(uVar1,0);
  uVar1 = FUN_00742920(&DAT_00dc4d48,s_File__008747f4,param_1);
  piVar2 = (int *)FUN_00742920(uVar1);
  FUN_007423e0(10);
  uVar1 = 0;
  if ((*(byte *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
      uVar1 = 4;
    }
  }
  FUN_0074c520(uVar1,0);
  FUN_00742920(&DAT_00dc4d48,s_Line__008747e4,param_1);
  piVar2 = (int *)FUN_0074bf60();
  FUN_007423e0(10);
  uVar1 = 0;
  if ((*(byte *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
      uVar1 = 4;
    }
  }
  FUN_0074c520(uVar1,0);
  DVar4 = GetLastError();
  FUN_00742920(&DAT_00dc4d48,s_GetLastError__008747cc,DVar4);
  piVar2 = (int *)FUN_0074c2e0();
  FUN_007423e0(10);
  uVar1 = 0;
  if ((*(byte *)(*(int *)(*piVar2 + 4) + 4 + (int)piVar2) & 6) == 0) {
    iVar3 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))();
    if (iVar3 == -1) {
      uVar1 = 4;
    }
  }
  FUN_0074c520(uVar1,0);
  FUN_007423e0(10);
  uVar1 = 0;
  if (((&DAT_00dc4d4c)[*(int *)(DAT_00dc4d48 + 4)] & 6) == 0) {
    iVar3 = (**(code **)(**(int **)(&DAT_00dc4d70 + *(int *)(DAT_00dc4d48 + 4)) + 0x2c))();
    if (iVar3 == -1) {
      uVar1 = 4;
    }
  }
  FUN_0074c520(uVar1,0);
  FUN_007423e0(10);
  uVar5 = 0;
  if (((&DAT_00dc4d4c)[*(int *)(DAT_00dc4d48 + 4)] & 6) == 0) {
    iVar3 = (**(code **)(**(int **)(&DAT_00dc4d70 + *(int *)(DAT_00dc4d48 + 4)) + 0x2c))();
    if (iVar3 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    FUN_0074c550(*(uint *)(&DAT_00dc4d4c + *(int *)(DAT_00dc4d48 + 4)) | uVar5,0);
  }
  uVar5 = 0;
  if (((&DAT_00dc4d4c)[*(int *)(DAT_00dc4d48 + 4)] & 6) == 0) {
    iVar3 = (**(code **)(**(int **)(&DAT_00dc4d70 + *(int *)(DAT_00dc4d48 + 4)) + 0x2c))();
    if (iVar3 == -1) {
      uVar5 = 4;
    }
  }
  if (uVar5 != 0) {
    FUN_0074c550(*(uint *)(&DAT_00dc4d4c + *(int *)(DAT_00dc4d48 + 4)) | uVar5,0);
  }
  return;
}


