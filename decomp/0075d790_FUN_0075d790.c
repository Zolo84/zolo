// FUN_0075d790 @ 75d790 size=349

void FUN_0075d790(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e038b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = FUN_004e9370(param_3);
  param_3 = iVar6;
  cVar5 = FUN_004e8480();
  if ((cVar5 == '\0') && (*(int *)(iVar6 + 0x254) != 9)) {
    iVar6 = FUN_00428ee0(&param_1);
    if ((iVar6 == 0) || (iVar6 == 8)) {
      pvVar7 = operator_new(0x3c);
      local_4 = 0;
      if (pvVar7 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0075f210();
      }
      local_4 = 0xffffffff;
      (**(code **)(*(int *)(iVar6 + 8) + 4))(&param_1);
      *(undefined4 *)(iVar6 + 0x32) = uVar4;
      iVar1 = *(int *)(iVar6 + 0x1e);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = uVar4;
        puVar8[1] = iVar1;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar2 = *(int *)(iVar6 + 0x22);
      *(undefined4 **)(iVar6 + 0x1e) = puVar8;
      *(int *)(iVar6 + 0x22) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 **)(iVar6 + 0x1a) = puVar8;
      }
      else {
        *(undefined4 **)(iVar1 + 8) = puVar8;
      }
      *(undefined4 *)(iVar6 + 0x2c) = 1000000;
      *(undefined1 *)(iVar6 + 0x3a) = 1;
      *(undefined4 *)(param_3 + 0x3ac) = param_4;
      piVar3 = DAT_00d546c0;
      DAT_00d546c0 = operator_new(0xe);
      if (DAT_00d546c0 == (int *)0x0) {
        DAT_00d546c0 = (int *)0x0;
      }
      else {
        *DAT_00d546c0 = iVar6;
        DAT_00d546c0[1] = (int)piVar3;
        DAT_00d546c0[2] = 0;
        *(undefined1 *)(DAT_00d546c0 + 3) = 0;
      }
      if (DAT_00d546c4 != 0) {
        DAT_00d546c4 = DAT_00d546c4 + 1;
        piVar3[2] = (int)DAT_00d546c0;
        ExceptionList = local_c;
        return;
      }
      DAT_00d546c4 = 1;
      DAT_00d546bc = DAT_00d546c0;
    }
  }
  ExceptionList = local_c;
  return;
}


