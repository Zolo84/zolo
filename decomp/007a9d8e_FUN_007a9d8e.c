// FUN_007a9d8e @ 7a9d8e size=249

uint FUN_007a9d8e(uint param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  piVar2 = param_2;
  if ((*(byte *)(param_2 + 3) & 0x40) != 0) {
LAB_007a9e64:
    piVar2 = param_2 + 1;
    *piVar2 = *piVar2 + -2;
    if (*piVar2 < 0) {
      param_1 = FUN_007b3960(param_1 & 0xffff,param_2);
    }
    else {
      *(undefined2 *)*param_2 = (undefined2)param_1;
      *param_2 = *param_2 + 2;
    }
    return param_1;
  }
  uVar7 = param_2[4];
  if (uVar7 == 0xffffffff) {
    puVar4 = &DAT_0087d520;
  }
  else {
    puVar4 = (undefined *)((&DAT_00dc5b60)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
  }
  if ((puVar4[4] & 0x80) == 0) goto LAB_007a9e64;
  iVar5 = FUN_007b3a87(&param_2,param_1);
  if (iVar5 == -1) {
    puVar6 = (undefined4 *)FUN_007aadca();
    *puVar6 = 0x2a;
    return 0xffff;
  }
  if (iVar5 == 1) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    bVar3 = (byte)param_2;
    if (-1 < *piVar1) {
      *(byte *)*piVar2 = (byte)param_2;
LAB_007a9e09:
      uVar7 = (uint)(byte)param_2;
      *piVar2 = *piVar2 + 1;
      goto LAB_007a9e1a;
    }
  }
  else {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar7 = FUN_007ad393((int)(char)(byte)param_2,piVar2);
    }
    else {
      *(byte *)*piVar2 = (byte)param_2;
      *piVar2 = *piVar2 + 1;
      uVar7 = (uint)param_2 & 0xff;
    }
    if (uVar7 == 0xffffffff) {
      return 0xffff;
    }
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    bVar3 = param_2._1_1_;
    if (-1 < *piVar1) {
      *(byte *)*piVar2 = param_2._1_1_;
      param_2._0_1_ = param_2._1_1_;
      goto LAB_007a9e09;
    }
  }
  uVar7 = FUN_007ad393((int)(char)bVar3,piVar2);
LAB_007a9e1a:
  if (uVar7 == 0xffffffff) {
    return 0xffff;
  }
  return param_1 & 0xffff;
}


