// FUN_007a4589 @ 7a4589 size=127

int __thiscall FUN_007a4589(int param_1,uint param_2,uint param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_00798da9();
  }
  if ((uint)(DAT_007f33d8 - *(int *)(param_1 + 8)) <= param_3) {
    FUN_00798b7d();
  }
  if (param_3 != 0) {
    iVar3 = param_3 + *(int *)(param_1 + 8);
    cVar1 = FUN_00674e40(iVar3,0);
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 4) + param_2;
      FUN_007a9270(iVar2 + param_3,iVar2,*(int *)(param_1 + 8) - param_2);
      _memset((void *)(*(int *)(param_1 + 4) + param_2),(int)param_4,param_3);
      *(int *)(param_1 + 8) = iVar3;
      *(undefined1 *)(*(int *)(param_1 + 4) + iVar3) = 0;
    }
  }
  return param_1;
}


