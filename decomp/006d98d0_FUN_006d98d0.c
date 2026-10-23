// FUN_006d98d0 @ 6d98d0 size=199

void __fastcall FUN_006d98d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x2220e);
  iVar2 = *(int *)(iVar1 + 0x36);
  iVar3 = *(int *)(iVar1 + 0x32);
  iVar4 = *(int *)(iVar1 + 0x3e);
  iVar1 = *(int *)(iVar1 + 0x3a);
  FUN_00401100(iVar3,iVar2,iVar1,iVar2,2);
  FUN_00401100(iVar3,iVar2,iVar3,iVar4,2);
  FUN_00401100(iVar1,iVar2,iVar1,iVar4,2);
  FUN_00401100(iVar3,iVar4,iVar1,iVar4,2);
  FUN_00404b20((iVar1 - iVar3) / 2 + iVar3,(iVar4 - iVar2) / 2 + iVar2,0);
  iVar1 = *(int *)(param_1 + 0x2220e);
  if (iVar1 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar1);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return;
}


