// FUN_00734c30 @ 734c30 size=213

uint __thiscall FUN_00734c30(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 0x16);
  if (uVar3 == 0) {
    iVar4 = (&DAT_0089cad8)[*(int *)(param_1 + 0x12)];
  }
  else {
    iVar4 = (&DAT_0089cad8)[uVar3];
    param_2 = (&DAT_0089cad8)[*(int *)(param_1 + 0x12)];
  }
  if ((iVar4 != 0) && (param_2 != 0)) {
    iVar5 = *(int *)(param_1 + 0x1e);
    if (iVar5 == 1) {
      uVar1 = *(undefined4 *)(iVar4 + 6);
      iVar4 = FUN_004a5c40(0xc,*(undefined4 *)(param_2 + 6));
      iVar5 = FUN_004a5c40(0xc,uVar1);
      fVar2 = (float)(iVar5 - iVar4);
    }
    else if (iVar5 == 2) {
      uVar1 = *(undefined4 *)(param_2 + 6);
      iVar4 = FUN_00451250(*(undefined4 *)(iVar4 + 6));
      iVar5 = FUN_00451250(uVar1);
      fVar2 = (float)(iVar5 - iVar4);
    }
    else {
      uVar3 = iVar5 - 3;
      if (uVar3 != 0) goto LAB_00734cfc;
      iVar4 = FUN_004a5c40(0xc,*(undefined4 *)(iVar4 + 6));
      fVar2 = (float)iVar4;
    }
    if (fVar2 < *(float *)(param_1 + 0x1a)) {
      return 0;
    }
    return 1;
  }
LAB_00734cfc:
  return uVar3 & 0xffffff00;
}


