// FUN_006cb590 @ 6cb590 size=241

void __fastcall FUN_006cb590(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d8ca0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f726c;
  param_1[2] = &PTR_LAB_007f7268;
  param_1[3] = &PTR_LAB_007f7264;
  local_4 = 0;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
  }
  piVar3 = param_1 + 5;
  iVar2 = 5;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0040fe60(param_1);
  FUN_006d43c0(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 3));
  DAT_00d12a38 = 0;
  cVar1 = FUN_0042e910();
  if (cVar1 == '\0') {
    FUN_0042cc70();
  }
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


