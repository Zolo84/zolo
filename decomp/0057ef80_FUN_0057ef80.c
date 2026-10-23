// FUN_0057ef80 @ 57ef80 size=228

uint FUN_0057ef80(int *param_1,uint *param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  piVar5 = param_1 + 3;
  if ((*param_1 == 0x46464952) && (param_1[2] == 0x45564157)) {
    piVar1 = (int *)(param_1[1] + -4 + (int)piVar5);
    for (; piVar5 < piVar1; piVar5 = (int *)((int)piVar5 + (uVar3 + 1 & 0xfffffffe))) {
      iVar2 = *piVar5;
      uVar3 = piVar5[1];
      piVar5 = piVar5 + 2;
      if (iVar2 == 0x20746d66) {
        if ((param_2 != (uint *)0x0) && (*param_2 == 0)) {
          if (uVar3 < 0xe) break;
          *param_2 = (uint)piVar5;
          if ((param_3 == (int *)0x0) || (*param_3 != 0)) {
            if (param_4 == (uint *)0x0) goto LAB_0057f05b;
            uVar4 = *param_4;
            goto joined_r0x0057f046;
          }
        }
      }
      else if ((iVar2 == 0x61746164) &&
              (((param_3 != (int *)0x0 && (*param_3 == 0)) ||
               ((param_4 != (uint *)0x0 && (*param_4 == 0)))))) {
        if (param_3 != (int *)0x0) {
          *param_3 = (int)piVar5;
        }
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar3;
        }
        if (param_2 == (uint *)0x0) goto LAB_0057f05b;
        uVar4 = *param_2;
joined_r0x0057f046:
        if (uVar4 != 0) {
LAB_0057f05b:
          return CONCAT31((int3)((uint)piVar5 >> 8),1);
        }
      }
    }
  }
  return (uint)piVar5 & 0xffffff00;
}


