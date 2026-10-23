// FUN_006ac880 @ 6ac880 size=164

void __fastcall FUN_006ac880(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d5d58;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  cVar4 = (**(code **)(*param_1 + 8))();
  while (cVar4 == '\0') {
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x30))(auStack_10);
    uVar1 = *(undefined4 *)*puVar5;
    (**(code **)(*param_1 + 0x38))(&stack0xffffffe4);
    FUN_00796cd8(unaff_ESI);
    FUN_00796cd8(uVar1);
    cVar4 = (**(code **)(*param_1 + 8))();
  }
  *param_1 = (int)&PTR_LAB_007f6db4;
  iVar3 = param_1[1];
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


