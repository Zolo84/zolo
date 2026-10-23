// FUN_00406300 @ 406300 size=1204

undefined1 __thiscall
FUN_00406300(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7,
            uint *param_8,int param_9,int *param_10)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint *puVar6;
  uint local_10 [3];
  int local_4;
  
  iVar4 = param_9;
  iVar2 = param_3;
  uVar3 = param_2;
  param_2 = param_2 & 0xfffffffe;
  param_4 = param_4 & 0xfffffffe;
  param_6 = param_6 & 0xfffffffe;
  if (param_8 == (uint *)0x0) {
    local_10[2] = *(int *)(param_9 + 4);
    local_4 = *(int *)(param_9 + 8);
    local_10[0] = 0;
    local_10[1] = 0;
    puVar6 = local_10;
  }
  else {
    *param_8 = *param_8 & 0xfffffffe;
    param_8[2] = param_8[2] & 0xfffffffe;
    puVar6 = param_8;
  }
  cVar5 = FUN_004061a0(&param_2,&param_3,&param_4,puVar6);
  if (cVar5 == '\0') {
    return 0;
  }
  if (param_10 != (int *)0x0) {
    local_10[2] = ((int)(param_6 - param_4) >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) +
                  param_2;
    local_4 = (param_7 - param_5 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + param_3;
    if ((((*param_10 <= (int)param_2) && (param_10[1] <= param_3)) &&
        ((int)local_10[2] <= param_10[2])) && (local_4 <= param_10[3])) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    *(short *)(iVar1 + 4) = (short)((int)param_4 / (int)*(short *)(iVar1 + 10));
    iVar1 = *(int *)(param_1 + 0x34);
    param_4 = param_4 - (int)*(short *)(iVar1 + 10) * (int)*(short *)(iVar1 + 4);
    param_6 = param_6 - (int)*(short *)(iVar1 + 10) * (int)*(short *)(iVar1 + 4);
    FUN_00409150(iVar4,uVar3,iVar2,param_4,param_5,param_6,param_7);
    return 1;
  }
  param_2 = param_2 + *(int *)(iVar4 + 0x246);
  param_3 = param_3 + *(int *)(iVar4 + 0x24a);
  if (*(int *)(iVar4 + 4) <= (int)param_2) {
    param_2 = param_2 - *(int *)(iVar4 + 4);
  }
  if (*(int *)(iVar4 + 8) <= param_3) {
    param_3 = param_3 - *(int *)(iVar4 + 8);
  }
  if ((int)param_2 < 0) {
    param_2 = param_2 + *(int *)(iVar4 + 4);
  }
  if (param_3 < 0) {
    param_3 = param_3 + *(int *)(iVar4 + 8);
  }
  iVar2 = *(int *)(param_1 + 0x238);
  if (iVar2 != 3) {
    if (iVar2 == 1) {
      if (*(int *)(iVar4 + 0x238) == 1) {
        if ((*(int *)(param_1 + 0x10) == 8) && (*(int *)(iVar4 + 0x10) == 8)) {
          FUN_00406960(param_2,param_3,param_4,param_5,param_6,param_7,iVar4);
        }
        if ((*(int *)(param_1 + 0x10) == 0x10) && (*(int *)(iVar4 + 0x10) == 0x10)) {
          FUN_00406a30(param_2,param_3,param_4,param_5,param_6,param_7,iVar4);
        }
        if ((*(int *)(param_1 + 0x10) == 8) && (*(int *)(iVar4 + 0x10) == 0x10)) {
          switch(*(undefined4 *)(param_1 + 0x23e)) {
          case 0:
            FUN_00406c00(param_2,param_3,param_4,param_5,param_6,param_7,iVar4);
            return 1;
          case 1:
            FUN_00406eb0(param_2,param_3,param_4,param_5,param_6,param_7,iVar4);
            return 1;
          case 2:
            FUN_00407180(param_2,param_3,param_4,param_5,param_6,param_7,iVar4);
            return 1;
          case 3:
            FUN_00407450(param_2,param_3,param_4,param_5,param_6,param_7,iVar4);
            return 1;
          case 4:
            FUN_00407720(param_2,param_3,param_4,param_5,param_6,param_7,iVar4);
            return 1;
          }
        }
      }
      else if (*(int *)(iVar4 + 0x238) == 2) {
        FUN_00407a00(iVar4,&param_4,param_8);
        return 1;
      }
    }
    else if (iVar2 == 0) {
      iVar2 = *(int *)(iVar4 + 0x238);
      if (iVar2 == 1) {
        (**(code **)(**(int **)(iVar4 + 0x2c) + 0x1c))
                  (*(int **)(iVar4 + 0x2c),param_2,param_3,*(undefined4 *)(param_1 + 0x2c),&param_4,
                   0x11);
        return 1;
      }
      if ((iVar2 == 0) || (iVar2 == 2)) {
        (**(code **)(**(int **)(iVar4 + 0x2c) + 0x1c))
                  (*(int **)(iVar4 + 0x2c),param_2,param_3,*(undefined4 *)(param_1 + 0x2c),&param_4,
                   0x11);
        return 1;
      }
    }
    else if (iVar2 == 6) {
      if (*(int *)(param_1 + 0x2c) != 0) {
        *(undefined1 *)(param_1 + 0x23c) = 1;
        FUN_0057adc0(*(int *)(param_1 + 0x2c));
        FUN_00406a30(param_2,param_3,param_4,param_5,param_6,param_7,iVar4);
        *(undefined1 *)(param_1 + 0x23c) = 0;
        FUN_0057ae50(*(undefined4 *)(param_1 + 0x2c));
      }
    }
    return 1;
  }
  FUN_004079f0(param_2,param_3,param_4,param_5,param_6,param_7,iVar4);
  return 1;
}


