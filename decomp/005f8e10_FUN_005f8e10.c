// FUN_005f8e10 @ 5f8e10 size=284

undefined4 __thiscall FUN_005f8e10(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_8 [2];
  
  FUN_00415680(param_2);
  (**(code **)(*param_1 + 0x28))(local_8);
  uVar6 = 0;
  uVar5 = 0xffff;
  iVar3 = local_8[0] + 0xdc;
  uVar4 = DAT_00bd1bac;
  iVar1 = FUN_00415bd0(iVar3,DAT_00bd1bac,0xffff,0);
  iVar1 = iVar1 / 2 + unaff_ESI;
  uVar2 = FUN_0042b6c9(s_DWMLORD_0085de10);
  FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
  FUN_00413509(uVar2,iVar1,iVar3,uVar4,uVar5,uVar6);
  uVar6 = 0;
  uVar5 = 0xffff;
  iVar3 = local_8[0] + 0xf2;
  uVar4 = DAT_00bd1bac;
  iVar1 = FUN_00415bd0(iVar3,DAT_00bd1bac,0xffff,0);
  iVar1 = iVar1 / 2 + unaff_ESI;
  uVar2 = FUN_0042b6c9(s_DWAREYOUSURE1_0085de00);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  FUN_00413509(uVar2,iVar1,iVar3,uVar4,uVar5,uVar6);
  uVar6 = 0;
  uVar5 = 0xffff;
  iVar1 = local_8[0] + 0xfe;
  uVar4 = DAT_00bd1bac;
  iVar3 = FUN_00415bd0(iVar1,DAT_00bd1bac,0xffff,0);
  iVar3 = iVar3 / 2 + unaff_ESI;
  uVar2 = FUN_0042b6c9(s_DWAREYOUSURE2_0085ddf0);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  FUN_00413509(uVar2,iVar3,iVar1,uVar4,uVar5,uVar6);
  return 0;
}


