// FUN_00429fa0 @ 429fa0 size=117

undefined4 __thiscall FUN_00429fa0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007a8730(param_2,*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x14);
  }
  else if (iVar1 < 1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_00429fa0(param_2);
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_00429fa0(param_2);
  }
  return uVar2;
}


