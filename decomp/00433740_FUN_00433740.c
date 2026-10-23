// FUN_00433740 @ 433740 size=295

void __thiscall FUN_00433740(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = FUN_004129c4(param_2);
  iVar2 = FUN_00415bd0();
  iVar1 = (iVar2 - iVar1) / 2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar2 = *(int *)(param_3 + 0x10);
  iVar3 = FUN_00415be0();
  iVar2 = (iVar3 - iVar2) / 2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  FUN_004133fd(param_2,iVar1,iVar2,*(undefined4 *)(param_1 + 0x62),param_4,0);
  uVar6 = *(undefined4 *)(param_1 + 0x62);
  uVar7 = 0;
  uVar4 = FUN_00584270(0xff,0xff,0xff);
  iVar3 = iVar2;
  iVar5 = FUN_00415bd0(iVar2,uVar6,uVar4,uVar7);
  FUN_004133fd(param_2,iVar5 + iVar1,iVar3,uVar6,uVar4,uVar7);
  uVar6 = *(undefined4 *)(param_1 + 0x62);
  uVar7 = 0;
  uVar4 = FUN_00584270(0xff,0xff,0xff);
  iVar3 = iVar2;
  iVar5 = FUN_00415bd0(iVar2,uVar6,uVar4,uVar7);
  FUN_004133fd(param_2,iVar1 + iVar5 * 2,iVar3,uVar6,uVar4,uVar7);
  uVar6 = *(undefined4 *)(param_1 + 0x62);
  uVar7 = 0;
  uVar4 = FUN_00584270(0x80,0x80,0x80);
  iVar3 = FUN_00415bd0(iVar2,uVar6,uVar4,uVar7);
  FUN_004133fd(param_2,iVar1 + iVar3 * 3,iVar2,uVar6,uVar4,uVar7);
  return;
}


