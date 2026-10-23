// FUN_006ee850 @ 6ee850 size=265

void FUN_006ee850(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_2 + 0x62);
  uVar2 = FUN_0042b6c9(param_1);
  uVar7 = 0;
  iVar6 = (int)(*(int *)(iVar1 + 4) + (*(int *)(iVar1 + 4) >> 0x1f & 3U)) >> 2;
  iVar4 = (*(int *)(iVar1 + 8) - *(int *)(param_3 + 0x10)) / 2;
  iVar5 = iVar6 / 2;
  uVar3 = FUN_00584270(0,0,0);
  FUN_004132d0(uVar2,iVar5,iVar4,iVar1,uVar3,uVar7);
  uVar7 = 0;
  uVar3 = FUN_00584270(0x80,0x80,0x80);
  FUN_004132d0(uVar2,iVar6 + iVar5,iVar4,iVar1,uVar3,uVar7);
  uVar7 = 0;
  uVar3 = FUN_00584270(0x80,0x80,0x80);
  FUN_004132d0(uVar2,iVar5 + iVar6 * 2,iVar4,iVar1,uVar3,uVar7);
  uVar7 = 0;
  uVar3 = FUN_00584270(0xff,0xff,0xff);
  FUN_004132d0(uVar2,iVar5 + iVar6 * 3,iVar4,iVar1,uVar3,uVar7);
  return;
}


