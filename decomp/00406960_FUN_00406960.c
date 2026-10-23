// FUN_00406960 @ 406960 size=206

void __thiscall
FUN_00406960(int *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7
            ,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = (**(code **)(*param_1 + 8))();
  iVar4 = (**(code **)(*param_8 + 8))();
  iVar1 = param_1[6];
  iVar2 = param_8[6];
  iVar5 = (param_6 & 0xfffffffe) - (param_4 & 0xfffffffe);
  param_7 = param_7 - param_5;
  if ((iVar5 != 0) && (param_7 != 0)) {
    iVar4 = iVar4 + (param_2 & 0xfffffffe) + iVar5 + iVar2 * param_3;
    iVar3 = iVar3 + param_5 * iVar1 + iVar5 + (param_4 & 0xfffffffe);
    do {
      iVar6 = -iVar5;
      do {
        if (*(char *)(iVar3 + iVar6) != '\0') {
          *(char *)(iVar4 + iVar6) = *(char *)(iVar3 + iVar6);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0);
      iVar4 = iVar4 + iVar2;
      iVar3 = iVar3 + iVar1;
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  (**(code **)(*param_1 + 0xc))();
  (**(code **)(*param_8 + 0xc))();
  return;
}


