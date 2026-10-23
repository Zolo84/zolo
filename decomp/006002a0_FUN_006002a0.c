// FUN_006002a0 @ 6002a0 size=388

void __fastcall FUN_006002a0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00428ee0(param_1 + 0x96);
  if (iVar2 == 0) {
    return;
  }
  if (iVar2 != 8) {
    if ((*(char *)(param_1 + 0x9cfa) == '\0') || (cVar1 = FUN_00433910(), cVar1 != '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x8e);
    }
    if ((*(char *)(param_1 + 0x9cf9) == '\0') || (cVar1 = FUN_00433910(), cVar1 != '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(DAT_00d0ca90 + 6);
    }
    iVar2 = FUN_00428ee0(param_1 + 0x96);
    if ((iVar2 != 0) && (iVar2 != 8)) {
      uVar3 = FUN_0058bcc0(*(undefined4 *)(DAT_00d0ca90 + 6),uVar4,uVar3,0);
      *(undefined4 *)(param_1 + 0x92) = uVar3;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0x2c) = 0;
    FUN_00433930();
    FUN_00433930();
    FUN_00433930();
    iVar2 = **(int **)(param_1 + 0x86);
    uVar3 = FUN_0044b160(*(undefined4 *)(DAT_00d0ca90 + 6));
    (**(code **)(iVar2 + 0x2c))(uVar3);
    (**(code **)(**(int **)(param_1 + 0x86) + 0x34))(4);
    (**(code **)(**(int **)(param_1 + 0x86) + 0x38))(0);
    *(undefined1 *)(*(int *)(param_1 + 0x86) + 0xa2) = 0;
    FUN_00433950();
    iVar2 = **(int **)(param_1 + 0x8a);
    uVar3 = FUN_0044b160(*(undefined4 *)(param_1 + 0x8e));
    (**(code **)(iVar2 + 0x2c))(uVar3);
    (**(code **)(**(int **)(param_1 + 0x8a) + 0x34))(4);
    (**(code **)(**(int **)(param_1 + 0x8a) + 0x38))(0);
    *(undefined1 *)(*(int *)(param_1 + 0x8a) + 0xa2) = 0;
    FUN_00433950();
    FUN_00600430();
    return;
  }
  return;
}


