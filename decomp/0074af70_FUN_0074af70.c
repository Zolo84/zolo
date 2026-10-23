// FUN_0074af70 @ 74af70 size=396

void __fastcall FUN_0074af70(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_18 [4];
  undefined4 *local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007df71c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007fa22c;
  local_4 = 3;
  param_1[0x18] = &PTR_FUN_007fa228;
  if (param_1 + 0x18 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 0x19;
  }
  uVar6 = puVar4[1];
  local_14 = param_1;
  puVar3 = (undefined4 *)FUN_00748ca0(local_18);
  FUN_00748cb0(local_10,*puVar3,uVar6);
  FUN_00796cd8(puVar4[1]);
  puVar4[1] = 0;
  puVar4[3] = 0;
  FUN_00798acc();
  iVar2 = DAT_00d4bdfc;
  DAT_00d4bdf8 = DAT_00d4bdf8 + -1;
  iVar5 = 0;
  if (DAT_00d4bdf8 == 0) {
    DAT_00d4bdfc = 0;
    iVar5 = iVar2;
  }
  FUN_00798b68();
  if (iVar5 != 0) {
    FUN_00796cd8(iVar5);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0xd] = &PTR_FUN_007fa230;
  FUN_00674910(1);
  iVar2 = param_1[0xf];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar2 = param_1[10];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}


