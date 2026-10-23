// FUN_00439520 @ 439520 size=196

void __fastcall FUN_00439520(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *pvStack_18;
  int local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007baadb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(local_14);
  iVar1 = FUN_004136a0(s_eurostilecond20bold_bmp_0082f024);
  pvVar2 = operator_new(0x72);
  iVar4 = 0;
  puStack_8 = (undefined1 *)0x0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00434930(0x104,*(int *)(iVar1 + 0x10) * 0xd,0,0);
  }
  *(int *)(param_1 + 0x20) = iVar3;
  *(int *)(iVar3 + 0x56) = iVar1;
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x20) + 0x34))((int)pvStack_18 + 0x2a,local_14[0] + 0x40);
  *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x5c) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar4 = *(int *)(param_1 + 0x20) + 0x12;
  }
  FUN_0040fe60(iVar4);
  ExceptionList = pvStack_18;
  return;
}


