// FUN_0052b0a0 @ 52b0a0 size=48

uint __fastcall FUN_0052b0a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (**(code **)(*param_1 + 4))();
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar1 = (int *)param_1[1];
    do {
      if (piVar1 == (int *)0x0) {
        return 1;
      }
      piVar3 = (int *)piVar1[2];
      iVar2 = *piVar1;
      piVar1 = piVar3;
    } while (*(int *)(*(int *)param_1[1] + 0xc) == *(int *)(iVar2 + 0xc));
  }
  return (uint)piVar3 & 0xffffff00;
}


