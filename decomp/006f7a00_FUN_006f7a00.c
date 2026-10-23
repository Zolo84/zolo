// FUN_006f7a00 @ 6f7a00 size=1348

/* WARNING: Removing unreachable block (ram,0x006f7ccb) */
/* WARNING: Removing unreachable block (ram,0x006f7cd1) */
/* WARNING: Removing unreachable block (ram,0x006f7cde) */
/* WARNING: Removing unreachable block (ram,0x006f7ce8) */
/* WARNING: Removing unreachable block (ram,0x006f7ccd) */

undefined4 __thiscall FUN_006f7a00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_EBP;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *pvStack_4c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dae33;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006ee700(param_2);
  uVar11 = 0;
  uVar10 = 0xffff;
  iVar5 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  iVar6 = (*(int *)(DAT_00bd1bac + 4) + -0x400 >> 1) + 0x60;
  iVar9 = iVar6;
  piVar3 = (int *)(iVar5 + 0x48);
  iVar7 = DAT_00bd1bac;
  uVar1 = FUN_0042b6c9(s_TUTORIAL_MAIN_TITLE_0086fa44);
  FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_004133fd(uVar1,iVar9,piVar3,iVar7,uVar10,uVar11);
  (**(code **)(**(int **)(param_1 + 0x136) + 0x14))(iVar6,iVar5 + 0x128);
  uVar11 = 0;
  uVar10 = 0xffff;
  iVar9 = iVar5 + 0x12a;
  iVar2 = iVar5 + 0xc0;
  iVar7 = DAT_00bd1bac;
  uVar1 = FUN_0042b6c9(s_TUTORIAL_BATTLESCENARIOS_0086fa28);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  FUN_004133fd(uVar1,iVar2,iVar9,iVar7,uVar10,uVar11);
  FUN_00434930(0x140,500,0,0);
  pvStack_c = (void *)0x0;
  FUN_00584270(0xff,0xbd,0);
  uVar1 = FUN_0042b6c9(s_TUTORIAL_MAIN_DESC_0086fa14);
  FUN_004361a0(uVar1);
  FUN_00435640(iVar6,iVar5 + 0x68);
  FUN_00435cd0(0);
  FUN_00434930(0x17c,500,0,0);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  FUN_00584270(0xff,0xbd,0);
  iVar9 = iVar5 + 0x260;
  (**(code **)(**(int **)(param_1 + 0x16) + 0x14))(iVar9,unaff_EBP);
  piVar3 = (int *)(iVar5 + 0x48);
  while (piVar3 != (int *)0x0) {
    piVar4 = (int *)piVar3[2];
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    FUN_00796cd8(piVar3);
    piVar3 = piVar4;
  }
  uVar1 = FUN_0042b6c9(s_TUTORIAL_DESC_1_0086fa04);
  FUN_004361a0(uVar1);
  FUN_00435640(iVar9,iVar5 + 0x70);
  FUN_00435cd0(0);
  (**(code **)(**(int **)(param_1 + 0x26) + 0x14))(iVar9,iVar5 + 0xa0);
  while (unaff_EBP != (int *)0x0) {
    piVar3 = (int *)unaff_EBP[2];
    if ((undefined4 *)*unaff_EBP != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*unaff_EBP)(1);
    }
    FUN_00796cd8(unaff_EBP);
    unaff_EBP = piVar3;
  }
  piVar4 = (int *)0x0;
  uVar1 = FUN_0042b6c9(s_TUTORIAL_DESC_5_0086f9f4);
  FUN_004361a0(uVar1);
  FUN_00435640(iVar9,iVar5 + 200);
  FUN_00435cd0(0);
  (**(code **)(**(int **)(param_1 + 0x1e) + 0x14))(iVar9,iVar5 + 0xf8);
  piVar3 = (int *)0x0;
  uVar1 = FUN_0042b6c9(s_TUTORIAL_DESC_3_0086f9e4);
  FUN_004361a0(uVar1);
  FUN_00435640(iVar9,iVar5 + 0x120);
  FUN_00435cd0(0);
  (**(code **)(**(int **)(param_1 + 0x22) + 0x14))(iVar9,iVar5 + 0x150);
  while (piVar4 != (int *)0x0) {
    piVar8 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar8;
  }
  piVar4 = (int *)0x0;
  uVar1 = FUN_0042b6c9(s_TUTORIAL_DESC_4_0086f9d4);
  FUN_004361a0(uVar1);
  FUN_00435640(iVar9,iVar5 + 0x178);
  FUN_00435cd0(0);
  (**(code **)(**(int **)(param_1 + 0x1a) + 0x14))(iVar9,iVar5 + 0x1a8);
  while (piVar3 != (int *)0x0) {
    piVar8 = (int *)piVar3[2];
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    FUN_00796cd8(piVar3);
    piVar3 = piVar8;
  }
  iVar7 = 0;
  uVar1 = FUN_0042b6c9(s_TUTORIAL_DESC_2_0086f9c4);
  FUN_004361a0(uVar1);
  FUN_00435640(iVar9,iVar5 + 0x1d0);
  FUN_00435cd0(0);
  (**(code **)(**(int **)(param_1 + 0x2a) + 0x14))(iVar9,iVar5 + 0x200);
  while (piVar4 != (int *)0x0) {
    piVar3 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar3;
  }
  uVar1 = FUN_0042b6c9(s_TUTORIAL_DESC_6_0086f9b4);
  FUN_004361a0(uVar1);
  FUN_00435640(iVar9,iVar5 + 0x228);
  FUN_00435cd0(0);
  (**(code **)(**(int **)(param_1 + 0x2e) + 0x14))(iVar7 + 0x1a8,iVar5 + 0x2c0);
  FUN_00434e10();
  FUN_00434e10();
  ExceptionList = pvStack_4c;
  return 0;
}


