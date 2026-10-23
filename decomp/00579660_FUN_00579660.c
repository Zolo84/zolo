// FUN_00579660 @ 579660 size=208

void __thiscall FUN_00579660(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
LAB_0057966a:
  do {
    while ((int *)param_1[1] == (int *)0x0) {
      if (param_1[2] == 0) {
LAB_00579727:
        *param_1 = param_2;
        return;
      }
      cVar3 = FUN_0042ddd0(*(int *)(param_2 + 4) + 2);
      if (cVar3 != '\0') goto LAB_00579727;
      *param_1 = *(int *)param_1[2];
      param_1 = (int *)param_1[2];
    }
    if ((int *)param_1[2] == (int *)0x0) {
      cVar3 = FUN_0042ddd0(*(int *)(param_2 + 4) + 2);
      if (cVar3 != '\0') goto LAB_00579727;
      *param_1 = *(int *)param_1[1];
      param_1 = (int *)param_1[1];
      goto LAB_0057966a;
    }
    iVar1 = *(int *)param_1[2];
    iVar2 = *(int *)param_1[1];
    cVar3 = FUN_0042dd70(*(int *)(iVar1 + 4) + 2);
    if (cVar3 == '\0') {
      cVar3 = FUN_0042ddd0(*(int *)(param_2 + 4) + 2);
      if (cVar3 == '\0') {
        *param_1 = iVar2;
        param_1 = (int *)param_1[1];
        goto LAB_0057966a;
      }
    }
    cVar3 = FUN_0042ddd0(*(int *)(param_2 + 4) + 2);
    if (cVar3 != '\0') goto LAB_00579727;
    *param_1 = iVar1;
    param_1 = (int *)param_1[2];
  } while( true );
}


