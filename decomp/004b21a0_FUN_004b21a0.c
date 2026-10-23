// FUN_004b21a0 @ 4b21a0 size=304

void __fastcall FUN_004b21a0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007be46b;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e70d8;
  local_4 = 0;
  piVar6 = (int *)param_1[2];
  while (piVar6 != (int *)0x0) {
    piVar1 = (int *)piVar6[2];
    puVar2 = (undefined4 *)*piVar6;
    piVar6 = piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = puVar2[1];
      if (iVar3 != 0) {
        *(undefined ***)(iVar3 + 0x76) = &PTR_LAB_007e6edc;
        FUN_0049a150();
        *(undefined ***)(iVar3 + 0x5c) = &PTR_LAB_007e4a74;
        FUN_0045a920();
        *(undefined ***)(iVar3 + 0x4a) = &PTR_LAB_007e4a74;
        iVar5 = *(int *)(iVar3 + 0x4e);
        while (iVar5 != 0) {
          iVar4 = *(int *)(iVar5 + 10);
          FUN_00796cd8(iVar5);
          iVar5 = iVar4;
        }
        *(undefined4 *)(iVar3 + 0x4e) = 0;
        *(undefined4 *)(iVar3 + 0x52) = 0;
        *(undefined4 *)(iVar3 + 0x56) = 0;
        *(undefined ***)(iVar3 + 0x32) = &PTR_LAB_007e6edc;
        FUN_0049a150();
        *(undefined ***)(iVar3 + 0x18) = &PTR_LAB_007e4a74;
        FUN_0045a920();
        *(undefined ***)(iVar3 + 6) = &PTR_LAB_007e4a74;
        FUN_0045a920();
        FUN_00796cd8(iVar3);
      }
      FUN_00796cd8(*puVar2);
      FUN_00796cd8(puVar2);
    }
  }
  (**(code **)(param_1[1] + 0x10))();
  param_1[1] = &PTR_LAB_007e70dc;
  iVar3 = param_1[2];
  while (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar5;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = pvStack_c;
  return;
}


