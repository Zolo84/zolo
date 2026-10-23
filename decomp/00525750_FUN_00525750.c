// FUN_00525750 @ 525750 size=94

bool __thiscall FUN_00525750(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x264) != 0x1e) && (*(int *)(param_1 + 0x264) != 0x1f)) {
    return false;
  }
  iVar2 = FUN_004e9370(*(undefined4 *)(param_1 + 0x268));
  if (*(int *)(iVar2 + 0x3dc) != param_2) {
    return false;
  }
  uVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0xc));
  cVar1 = FUN_0050c3d0(param_1,uVar3);
  return cVar1 != '\0';
}


