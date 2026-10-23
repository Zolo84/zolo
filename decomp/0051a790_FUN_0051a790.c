// FUN_0051a790 @ 51a790 size=192

void __thiscall FUN_0051a790(int param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x248) + 0xe) + 0xc))();
  FUN_00405ad0(s_Combat__Unit___d___s__got_BOMBAR_0084af34,*(undefined4 *)(param_1 + 0x1a),uVar2);
  (**(code **)(*(int *)(param_1 + 0x11c) + 4))();
  *(undefined1 *)(param_1 + 0x186) = 0;
  iVar3 = FUN_00428ee0(param_2);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -8;
  }
  *(char *)(param_1 + 0x17a) = param_3;
  *(int *)(param_1 + 0x176) = iVar3;
  FUN_00523370((-(param_3 != '\0') & 2U) + 2);
  FUN_0051a6d0(iVar3);
  cVar1 = FUN_00444290();
  if (cVar1 != '\0') {
    *(undefined1 *)(DAT_00ab27b4 + 0x3b1 + *(int *)(param_1 + 0xc) * 0x4b2) = 1;
  }
  *(undefined1 **)(param_1 + 0x21a) = &LAB_00521b30;
  *(undefined4 *)(param_1 + 0x21e) = 0;
  return;
}


