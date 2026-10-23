// FUN_00691cb0 @ 691cb0 size=116

undefined4 __thiscall FUN_00691cb0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == 0xb4) {
    if (*(char *)(param_1 + 0xe) != '\0') {
      switch(*(undefined4 *)(param_2[1] + 0xe)) {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
        FUN_00696f70(*(undefined4 *)(param_2[1] + 0xe));
      }
    }
  }
  else {
    if (iVar1 != 0x123) {
      uVar2 = FUN_006a9e50(param_2);
      return uVar2;
    }
    if (*(char *)(param_1 + 0xe) != '\0') {
      FUN_0044beb0();
      return 3;
    }
  }
  return 3;
}


