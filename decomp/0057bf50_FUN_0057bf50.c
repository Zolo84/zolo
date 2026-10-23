// FUN_0057bf50 @ 57bf50 size=221

undefined4 __fastcall FUN_0057bf50(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x37a) == '\0') {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xb70)) {
      piVar2 = (int *)(param_1 + 0x3b0);
      while (*piVar2 != *(int *)(param_1 + 0x380)) {
        iVar1 = iVar1 + 1;
        piVar2 = (int *)((int)piVar2 + 0x3e);
        if (*(int *)(param_1 + 0xb70) <= iVar1) {
          return 0;
        }
      }
      *(int *)(param_1 + 900) = iVar1;
    }
    return 0;
  }
  if (*(char *)(param_1 + 0x37b) == '\0') {
    return 0;
  }
  piVar2 = (int *)(param_1 + 0x3b0);
  iVar1 = (**(code **)(**(int **)(param_1 + 0xbc4) + 0x30))
                    (*(int **)(param_1 + 0xbc4),0,&LAB_0057c6c0,piVar2,8);
  *(int *)(param_1 + 0x3ac) = iVar1;
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0xbc4) + 0x30))
                    (*(int **)(param_1 + 0xbc4),0,&LAB_0057c6c0,piVar2,0x10);
  *(int *)(param_1 + 0x3ac) = iVar1;
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xb70)) {
    while (*piVar2 != *(int *)(param_1 + 0x380)) {
      iVar1 = iVar1 + 1;
      piVar2 = (int *)((int)piVar2 + 0x3e);
      if (*(int *)(param_1 + 0xb70) <= iVar1) {
        return 1;
      }
    }
    *(int *)(param_1 + 900) = iVar1;
  }
  return 1;
}


