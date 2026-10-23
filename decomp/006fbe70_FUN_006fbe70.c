// FUN_006fbe70 @ 6fbe70 size=167

undefined4 __fastcall FUN_006fbe70(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (**(code **)(**(int **)((int)param_1 + 0x36) + 0x18))
            (*(undefined4 *)((int)param_1 + 0xe),*(undefined4 *)((int)param_1 + 0x12));
  (**(code **)(**(int **)((int)param_1 + 0x36) + 0x10))(unaff_ESI);
  uVar2 = FUN_00584270(0xff,0xff,0xff);
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  }
  uVar7 = 0;
  iVar4 = *(int *)((int)param_1 + 0x12) + 4;
  uVar6 = DAT_00bd1bac;
  iVar3 = FUN_00415bd0(iVar4,DAT_00bd1bac,uVar2,0);
  iVar3 = iVar3 + 10 + *(int *)((int)param_1 + 0xe);
  uVar5 = *(undefined4 *)((int)param_1 + 0x32);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  FUN_00413483(uVar5,iVar3,iVar4,uVar6,uVar2,uVar7);
  return 0;
}


