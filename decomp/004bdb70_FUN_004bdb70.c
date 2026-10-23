// FUN_004bdb70 @ 4bdb70 size=70

void __fastcall FUN_004bdb70(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  cVar1 = FUN_0042e980();
  if (cVar1 != '\0') {
    piVar2 = (int *)(**(code **)(*param_1 + 0xc))();
    cVar1 = (**(code **)(*piVar2 + 8))();
    while (cVar1 == '\0') {
      iVar3 = (**(code **)(*param_1 + 0xc))();
      FUN_004bdbc0(**(undefined4 **)(iVar3 + 4));
      piVar2 = (int *)(**(code **)(*param_1 + 0xc))();
      cVar1 = (**(code **)(*piVar2 + 8))();
    }
  }
  return;
}


