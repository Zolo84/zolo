// FUN_0058cb40 @ 58cb40 size=187

void __fastcall FUN_0058cb40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007c9a2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eaf84;
  param_1[2] = &PTR_LAB_007eaf80;
  iVar2 = 0;
  local_4 = 1;
  if (0 < (int)param_1[4]) {
    do {
      if ((iVar2 < 0) || ((int)param_1[5] <= iVar2)) {
        FUN_00405ad0(s_Array_bounds_violation__00857f9c);
        piVar1 = (int *)param_1[3];
      }
      else {
        piVar1 = (int *)(param_1[3] + iVar2 * 4);
      }
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00796cd8(param_1[3]);
  local_4 = 2;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


