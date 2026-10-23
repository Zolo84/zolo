// FUN_00751be0 @ 751be0 size=190

void __fastcall FUN_00751be0(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dfcfb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x72);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar2 = FUN_00434930(0xcc,*(int *)(iVar2 + 0x10) * 0x11 + 1,0,0);
  }
  *(int *)(param_1 + 0x174) = iVar2;
  *(undefined2 *)(iVar2 + 0x5a) = 0xffff;
  local_4 = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x174) + 0x34))
            ((*(int *)(DAT_00bd1bac + 4) + -0x400 >> 1) + 0x314,
             (*(int *)(DAT_00bd1bac + 8) + -0x300 >> 1) + 0x164);
  ExceptionList = unaff_ESI;
  return;
}


