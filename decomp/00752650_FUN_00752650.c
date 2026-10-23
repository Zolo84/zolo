// FUN_00752650 @ 752650 size=208

void __fastcall FUN_00752650(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *unaff_EBX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfd7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (*(code *)**(undefined4 **)(param_1 + 0xaa))();
  pvVar1 = operator_new(0x72);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar2 = FUN_00434930(0x28,*(int *)(iVar2 + 0x10) * 6,0,0);
  }
  *(int *)(param_1 + 0x170) = iVar2;
  *(undefined2 *)(iVar2 + 0x5a) = 0xffff;
  uStack_4 = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x170) + 0x34))
            ((*(int *)(DAT_00bd1bac + 4) + -0x400 >> 1) + 0x314,
             (*(int *)(DAT_00bd1bac + 8) + -0x300 >> 1) + 0x98);
  (**(code **)(*(int *)(param_1 + 0xaa) + 4))();
  ExceptionList = unaff_EBX;
  return;
}


