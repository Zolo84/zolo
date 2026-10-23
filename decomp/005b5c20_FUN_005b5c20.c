// FUN_005b5c20 @ 5b5c20 size=139

void __fastcall FUN_005b5c20(int *param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cbef8;
  local_c = ExceptionList;
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (0 < param_1[1]) {
    do {
      if ((iVar4 < 0) || (param_1[2] <= iVar4)) {
        FUN_00405ad0(s_Array_bounds_violation__00857f9c);
        piVar3 = (int *)*param_1;
      }
      else {
        piVar3 = (int *)(*param_1 + iVar4 * 4);
      }
      puVar1 = (undefined4 *)*piVar3;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_007a77fa(*puVar1);
        FUN_00796cd8(puVar1);
      }
      iVar4 = iVar4 + 1;
      ppvVar2 = ExceptionList;
    } while (iVar4 < param_1[1]);
  }
  ExceptionList = ppvVar2;
  FUN_00796cd8(*param_1);
  ExceptionList = local_c;
  return;
}


