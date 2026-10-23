// FUN_00601530 @ 601530 size=376

undefined4 __thiscall FUN_00601530(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_8 [2];
  
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  if (*(int *)((int)param_1 + 0x82) == 1) {
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined4 *)((int)param_1 + 0x8a) = 0xac;
  }
  if (*(int *)((int)param_1 + 0x82) == 6) {
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined4 *)((int)param_1 + 0x8a) = 0x37;
  }
  FUN_00415680(param_2);
  (**(code **)(*param_1 + 0x28))(local_8);
  uVar6 = 0;
  uVar5 = 0xffff;
  iVar3 = *(int *)((int)param_1 + 0x8a) + 0xdc + local_8[0];
  uVar4 = DAT_00bd1bac;
  iVar1 = FUN_00415bd0(iVar3,DAT_00bd1bac,0xffff,0);
  iVar1 = iVar1 / 2 + unaff_ESI;
  uVar2 = FUN_0042b6c9(s_DWMLORD_0085de10);
  FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
  FUN_00413509(uVar2,iVar1,iVar3,uVar4,uVar5,uVar6);
  uVar6 = 0;
  uVar5 = 0xffff;
  iVar3 = *(int *)((int)param_1 + 0x8a) + 0xf2 + local_8[0];
  uVar4 = DAT_00bd1bac;
  iVar1 = FUN_00415bd0(iVar3,DAT_00bd1bac,0xffff,0);
  iVar1 = iVar1 / 2 + unaff_ESI;
  uVar2 = FUN_0042b6c9(s_DWAREYOUSURE1_0085de00);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  FUN_00413509(uVar2,iVar1,iVar3,uVar4,uVar5,uVar6);
  uVar6 = 0;
  uVar5 = 0xffff;
  iVar3 = *(int *)((int)param_1 + 0x8a) + 0xfe + local_8[0];
  uVar4 = DAT_00bd1bac;
  iVar1 = FUN_00415bd0(iVar3,DAT_00bd1bac,0xffff,0);
  iVar1 = iVar1 / 2 + unaff_ESI;
  uVar2 = FUN_0042b6c9(s_DWAREYOUSURE2_0085ddf0);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  FUN_00413509(uVar2,iVar1,iVar3,uVar4,uVar5,uVar6);
  return 0;
}


