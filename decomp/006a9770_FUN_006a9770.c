// FUN_006a9770 @ 6a9770 size=208

void __fastcall FUN_006a9770(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007d5ade;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f6b7c;
  DAT_00d126ec = DAT_00d126ec + -1;
  DAT_00d126f0 = DAT_00d126f0 + 1;
  local_4 = 2;
  piVar4 = *(int **)((int)param_1 + 0x1a);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar1;
  }
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  uVar5 = (uint)local_4 >> 8;
  local_4 = CONCAT31((int3)uVar5,1);
  FUN_00527230();
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007e8ad4;
  iVar3 = *(int *)((int)param_1 + 0x1a);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  local_4 = 0xffffffff;
  FUN_006adef0();
  ExceptionList = pvStack_c;
  return;
}


