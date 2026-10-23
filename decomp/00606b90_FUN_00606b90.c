// FUN_00606b90 @ 606b90 size=102

undefined4 __fastcall FUN_00606b90(int param_1)

{
  undefined4 uVar1;
  undefined4 unaff_EBX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = *(int *)(param_1 + 0xe);
  iVar2 = *(int *)(param_1 + 0x12);
  (**(code **)(**(int **)(param_1 + 0x2e) + 0x18))(iVar3 + 4,iVar2);
  (**(code **)(**(int **)(param_1 + 0x2e) + 0x10))(unaff_EBX);
  uVar6 = 0;
  uVar5 = 0xffff;
  iVar2 = iVar2 + 3;
  iVar3 = iVar3 + 0x20;
  uVar4 = DAT_00bd1bac;
  uVar1 = FUN_004af740(*(undefined4 *)(param_1 + 0x32),iVar3,iVar2,DAT_00bd1bac,0xffff,0);
  FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_00413483(uVar1,iVar3,iVar2,uVar4,uVar5,uVar6);
  return 0;
}


