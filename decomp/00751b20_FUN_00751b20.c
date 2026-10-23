// FUN_00751b20 @ 751b20 size=188

void __fastcall FUN_00751b20(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dfcdb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x72);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar2 = FUN_00434930(0xaa,*(int *)(iVar2 + 0x10) * 0x1b + 1,0,0);
  }
  *(int *)(param_1 + 0x168) = iVar2;
  *(undefined2 *)(iVar2 + 0x5a) = 0xffff;
  local_4 = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x168) + 0x34))
            ((*(int *)(DAT_00bd1bac + 4) + -0x400 >> 1) + 0x224,
             (*(int *)(DAT_00bd1bac + 8) + -0x300 >> 1) + 0xd2);
  ExceptionList = unaff_ESI;
  return;
}


