// FUN_004061a0 @ 4061a0 size=207

undefined4 __thiscall FUN_004061a0(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_2;
  bVar2 = (byte)*(undefined4 *)(param_1 + 0x23e);
  iVar3 = (param_4[3] - param_4[1] >> (bVar2 & 0x1f)) + *param_3;
  iVar4 = (param_4[2] - *param_4 >> (bVar2 & 0x1f)) + iVar1;
  if (iVar1 < *param_5) {
    *param_4 = (*param_5 - iVar1 << (bVar2 & 0x1f)) + *param_4;
    *param_2 = *param_5;
  }
  if (*param_3 < param_5[1]) {
    param_4[1] = param_4[1] +
                 (param_5[1] - *param_3 << ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f));
    *param_3 = param_5[1];
  }
  if (param_5[2] < iVar4) {
    param_4[2] = param_4[2] -
                 (iVar4 - param_5[2] << ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f));
  }
  if (param_5[3] < iVar3) {
    param_4[3] = param_4[3] -
                 (iVar3 - param_5[3] << ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f));
  }
  if ((*param_4 < param_4[2]) && (param_4[1] < param_4[3])) {
    return 1;
  }
  return 0;
}


