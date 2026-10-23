// FUN_00797582 @ 797582 size=173

uint __thiscall FUN_00797582(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  uVar1 = **(uint **)(param_1 + 0x1c);
  if (((uVar1 == 0) || (uVar1 <= **(uint **)(param_1 + 0xc))) ||
     ((param_2 != 0xffffffff && (*(byte *)(uVar1 - 1) != param_2)))) {
    if ((*(int *)(param_1 + 0x50) != 0) && (param_2 != 0xffffffff)) {
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar4 = FUN_007a811d(param_2 & 0xff,*(int *)(param_1 + 0x50));
        if (iVar4 != -1) {
          return param_2;
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x44);
        iVar2 = *(int *)(iVar4 + 8);
        if (iVar2 != 0) {
          FUN_00797b07();
          cVar3 = FUN_00797b75(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(param_1 + 0x50),iVar2);
          if (cVar3 != '\0') {
            FUN_00742780(0,DAT_007f33d8);
            *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
            return param_2;
          }
        }
      }
    }
    param_2 = 0xffffffff;
  }
  else {
    FUN_00797a38();
    param_2 = -(uint)(param_2 != 0xffffffff) & param_2;
  }
  return param_2;
}


