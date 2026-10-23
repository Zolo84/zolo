// FUN_00528300 @ 528300 size=61

int __fastcall FUN_00528300(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = *(undefined4 **)(param_1 + 4);
  iVar5 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    puVar1 = (undefined4 *)puVar6[2];
    piVar2 = (int *)*puVar6;
    cVar3 = (**(code **)(*piVar2 + 0x28))();
    if (cVar3 != '\0') {
      (**(code **)(*piVar2 + 0x10))();
      iVar4 = FUN_00508160();
      iVar5 = iVar5 + iVar4;
    }
    puVar6 = puVar1;
  } while (puVar1 != (undefined4 *)0x0);
  return iVar5;
}


