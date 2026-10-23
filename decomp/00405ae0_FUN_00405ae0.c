// FUN_00405ae0 @ 405ae0 size=235

void __fastcall FUN_00405ae0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007b970f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e3360;
  param_1[10] = &PTR_LAB_007e3370;
  local_4 = 1;
  if (param_1[0xd] == 0) {
    piVar1 = (int *)param_1[0xb];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xb] = 0;
    }
  }
  else {
    iVar2 = *(int *)(param_1[0xd] + 0xe);
    if (iVar2 != 0) {
      FUN_00796cd8(iVar2);
    }
    iVar2 = param_1[0xd];
    iVar3 = 0;
    if (0 < *(short *)(iVar2 + 2)) {
      do {
        iVar2 = *(int *)(iVar2 + 0x12 + iVar3 * 4);
        if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 4), iVar2 != 0)) {
          FUN_00796cd8(iVar2);
        }
        FUN_00796cd8(*(undefined4 *)(param_1[0xd] + 0x12 + iVar3 * 4));
        iVar2 = param_1[0xd];
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(short *)(iVar2 + 2));
    }
    FUN_00796cd8(param_1[0xd]);
    param_1[0xd] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_0040e980();
  ExceptionList = local_c;
  return;
}


