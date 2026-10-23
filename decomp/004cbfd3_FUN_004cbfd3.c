// FUN_004cbfd3 @ 4cbfd3 size=297

void __thiscall FUN_004cbfd3(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_c;
  
  if (param_2 != param_1) {
    (**(code **)(*param_1 + 0x10))(param_3);
    (**(code **)(*param_2 + 0xc))(param_3);
  }
  *(int **)(param_3 + 0x482) = param_2;
  FUN_004c968b();
  iVar1 = *(int *)(param_3 + 0x290);
  for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
    iVar3 = DAT_00ab27b4 + *(int *)(*(int *)(param_3 + 0x298) + local_c * 0xc) * 0x4b2;
    piVar2 = *(int **)(iVar3 + 0x482);
    if (piVar2 == (int *)0x0) {
      if ((*(int *)(iVar3 + 0x3d8) == param_4) && (*(char *)(iVar3 + 0x180) != '\0')) {
        FUN_004cbfd3(param_2,iVar3,param_4);
      }
    }
    else if ((param_2 != param_1) && (param_2 != piVar2)) {
      FUN_004ca017(piVar2,1);
      FUN_004ca017(param_2,1);
      FUN_004c968b();
    }
  }
  return;
}


