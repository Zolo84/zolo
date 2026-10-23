// FUN_005c0df0 @ 5c0df0 size=153

undefined4 __fastcall FUN_005c0df0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  
  iVar1 = *(int *)(param_1 + 0x12);
  iVar2 = *(int *)(param_1 + 0xe);
  (**(code **)(**(int **)(param_1 + 0x2e) + 0x18))(iVar2,iVar1);
  (**(code **)(**(int **)(param_1 + 0x2e) + 0x10))(unaff_EBX);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  uVar3 = FUN_00584270(0,0,0);
  uVar4 = FUN_00514070(*(undefined4 *)(param_1 + 0x34));
  if ((*(char *)(param_1 + 0x32) != '\0') && (*(int *)(param_1 + 0x34) == 1)) {
    uVar4 = FUN_0042b6c9(s_MISSION_MOVE_0084a7bc);
  }
  FUN_004133fd(uVar4,iVar2 + 4,iVar1 + 3,DAT_00bd1bac,uVar3,0);
  return 0;
}


