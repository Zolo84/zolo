// FUN_00404f90 @ 404f90 size=272

void __thiscall
FUN_00404f90(int param_1,int param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar5 = *param_3;
  if (((((-1 < iVar5) || (-1 < *param_4)) &&
       ((iVar5 <= *(int *)(param_1 + 4) || (*param_4 <= *(int *)(param_1 + 4))))) &&
      ((iVar1 = param_3[1], -1 < iVar1 || (-1 < param_4[1])))) &&
     ((iVar1 <= *(int *)(param_1 + 8) || (param_4[1] <= *(int *)(param_1 + 8))))) {
    iVar6 = param_4[1];
    if (iVar1 == iVar6) {
      *(int *)(param_2 + iVar1 * 8) = iVar5;
      *(int *)(param_2 + 4 + param_3[1] * 8) = param_5 << 0x10;
      return;
    }
    if (iVar6 < iVar1) {
      iVar3 = iVar5 - *param_4;
      param_3 = (int *)(iVar1 - iVar6);
      iVar4 = param_6;
      iVar8 = *param_4;
      param_4 = (int *)iVar5;
      iVar1 = iVar6;
    }
    else {
      param_4 = (int *)*param_4;
      param_3 = (int *)(iVar6 - iVar1);
      iVar3 = (int)param_4 - iVar5;
      iVar4 = param_5;
      param_5 = param_6;
      iVar8 = iVar5;
    }
    iVar8 = iVar8 << 0x10;
    iVar5 = iVar4 << 0x10;
    iVar6 = (int)param_3 + -1;
    piVar2 = (int *)(param_2 + iVar1 * 8);
    do {
      piVar7 = piVar2;
      piVar7[1] = iVar5;
      *piVar7 = iVar8 >> 0x10;
      iVar8 = iVar8 + (iVar3 << 0x10) / (int)param_3;
      iVar5 = iVar5 + ((param_5 - iVar4) * 0x10000) / (int)param_3;
      iVar6 = iVar6 + -1;
      piVar2 = piVar7 + 2;
    } while (-1 < iVar6);
    piVar7[3] = param_5 << 0x10;
    piVar7[2] = (int)param_4;
  }
  return;
}


