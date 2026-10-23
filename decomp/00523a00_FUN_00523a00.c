// FUN_00523a00 @ 523a00 size=175

undefined4 __fastcall FUN_00523a00(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (DAT_00d610dc != '\0') {
    return 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 == '\0') {
    return 1;
  }
  if (*(char *)((int)param_1 + 0x17b) != '\0') {
    return 1;
  }
  iVar2 = (**(code **)(param_1[0x47] + 4))();
  if (iVar2 != 0) {
    return 1;
  }
  if (*(int *)((int)param_1 + 0x176) != 0) {
    return 1;
  }
  cVar1 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6));
  if (cVar1 == '\0') {
    iVar2 = (&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)];
    if (iVar2 == 0) {
      iVar2 = param_1[0x92];
    }
    cVar1 = FUN_0044b280(*(undefined4 *)(iVar2 + 6));
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}


