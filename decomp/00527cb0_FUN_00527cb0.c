// FUN_00527cb0 @ 527cb0 size=76

int __fastcall FUN_00527cb0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 4);
  iVar4 = 0;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  do {
    piVar1 = (int *)piVar5[2];
    iVar3 = *piVar5;
    cVar2 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar3 + 0x248) + 6));
    if (cVar2 != '\0') {
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x22) + 4))();
      iVar4 = iVar4 + iVar3;
    }
    piVar5 = piVar1;
  } while (piVar1 != (int *)0x0);
  return iVar4;
}


