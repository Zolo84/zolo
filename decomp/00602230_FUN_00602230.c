// FUN_00602230 @ 602230 size=287

void __thiscall FUN_00602230(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cf958;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0x124 + param_2 * 4) + 0x14))(param_3,param_4);
  piVar1 = (int *)FUN_0044c640(param_2);
  if (piVar1 != (int *)0x0) {
    uVar7 = 0;
    uVar6 = 0xffff;
    param_3 = param_3 + 0x30;
    iVar4 = param_3;
    iVar5 = param_4;
    uVar3 = DAT_00bd1bac;
    uVar2 = FUN_00763b00(param_2,param_3,param_4,DAT_00bd1bac,0xffff,0);
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    FUN_004133fd(uVar2,iVar4,iVar5,uVar3,uVar6,uVar7);
    FUN_00434930(100,5000,0,0);
    pvStack_c = (void *)0x0;
    FUN_00584270(0xff,0xbd,0);
    uVar3 = (**(code **)(*piVar1 + 0xc))();
    FUN_004361a0(uVar3);
    FUN_00435640(param_3,param_4 + 0xf);
    FUN_00435cd0(0);
    pvStack_c = (void *)0xffffffff;
    FUN_00434e10();
  }
  ExceptionList = pvStack_14;
  return;
}


