// FUN_00661960 @ 661960 size=91

void __thiscall FUN_00661960(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    cVar2 = FUN_006a8720();
    iVar1 = param_3;
    if ((cVar2 == '\0') && (param_2 == *(int *)(param_1 + 10))) {
      piVar3 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x174) + 0x28
                                  ))(&param_2,*(undefined4 *)(param_3 + 0x288));
      if (*piVar3 == 0) {
        FUN_00664c10(*(undefined4 *)(iVar1 + 0x288));
      }
    }
  }
  return;
}


