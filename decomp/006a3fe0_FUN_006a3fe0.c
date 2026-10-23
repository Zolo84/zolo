// FUN_006a3fe0 @ 6a3fe0 size=93

void __fastcall FUN_006a3fe0(int *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  bVar1 = false;
  iVar4 = 5;
  piVar3 = param_1 + 0x26;
  do {
    if (piVar3[10] < *piVar3) {
      bVar1 = true;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (bVar1) {
    (**(code **)(*param_1 + 0x224))();
    return;
  }
  if (*(char *)((int)param_1 + 0xe) != '\0') {
    cVar2 = (**(code **)(*(int *)((int)param_1 + 0xfa) + 8))();
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 200))();
    }
  }
  return;
}


