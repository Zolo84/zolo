// FUN_004bd910 @ 4bd910 size=94

void __fastcall FUN_004bd910(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = FUN_0042e980();
  if (cVar3 != '\0') {
    (**(code **)(param_1[10] + 0x10))();
    iVar4 = (**(code **)(*param_1 + 0xc))();
    piVar2 = *(int **)(iVar4 + 4);
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[2];
      iVar4 = *piVar2;
      cVar3 = (**(code **)(param_1[10] + 0x24))(*(undefined4 *)(*(int *)(iVar4 + 0x248) + 6));
      piVar2 = piVar1;
      if (cVar3 == '\0') {
        FUN_00459f50(*(undefined4 *)(*(int *)(iVar4 + 0x248) + 6));
      }
    }
  }
  return;
}


