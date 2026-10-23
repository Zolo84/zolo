// FUN_00584bc0 @ 584bc0 size=197

undefined4 __fastcall FUN_00584bc0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  
  piVar2 = *(int **)(*(int *)((int)param_1 + 0x22) + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar4 = *piVar2;
    piVar2 = piVar1;
    if ((&DAT_0089cad8)[iVar4] == 0) {
      (**(code **)(**(int **)((int)param_1 + 0x22) + 0x18))(iVar4);
    }
  }
  if ((((*(char *)((int)param_1 + 0x16) == '\0') && (param_1[6] == 0)) &&
      (iVar4 = (**(code **)(**(int **)((int)param_1 + 0x22) + 4))(), iVar4 < 2)) &&
     (((cVar3 = (**(code **)(*param_1 + 0x14))(), cVar3 == '\0' &&
       (cVar3 = (**(code **)(*param_1 + 0x18))(), cVar3 == '\0')) &&
      ((cVar3 = (**(code **)(*param_1 + 0x1c))(), cVar3 == '\0' &&
       (iVar4 = (**(code **)(**(int **)((int)param_1 + 0x26) + 4))(), iVar4 == 0)))))) {
    if (*(char *)((int)param_1 + 0x16) == '\0') {
      iVar4 = *(int *)(*(int *)((int)param_1 + 0x22) + 4);
      while (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 8);
        FUN_004512f0(0);
      }
    }
    (**(code **)(**(int **)((int)param_1 + 0x22) + 0x14))();
    *(undefined1 *)((int)param_1 + 0x1d) = 1;
    FUN_005886c0();
    return 1;
  }
  return 0;
}


