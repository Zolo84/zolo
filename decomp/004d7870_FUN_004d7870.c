// FUN_004d7870 @ 4d7870 size=94

int * FUN_004d7870(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == -1) {
    param_2 = 1;
  }
  iVar2 = *(int *)(DAT_00ab27b4 + 0x3b2 + param_2 * 0x4b2);
  iVar1 = DAT_00ab27b4 + 0x3b2 + param_2 * 0x4b2;
  iVar3 = *(int *)(iVar1 + 4);
  iVar1 = *(int *)(iVar1 + 0xc);
  *param_1 = (*(int *)(DAT_00ab27b4 + 0x3ba + param_2 * 0x4b2) - iVar2) / 2 + iVar2;
  param_1[1] = (iVar1 - iVar3) / 2 + iVar3;
  return param_1;
}


