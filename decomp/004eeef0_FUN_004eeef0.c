// FUN_004eeef0 @ 4eeef0 size=119

int __thiscall FUN_004eeef0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_3) && (param_3 < 0x2d00)) {
    if (0x74ff < param_2) {
      param_2 = param_2 + -0x7500;
    }
    if (param_2 < 0) {
      param_2 = param_2 + 0x7500;
    }
    iVar1 = *(int *)(param_1 + 8 + param_3 * 4);
    do {
      iVar2 = iVar1;
      iVar1 = iVar2 + 1;
    } while ((int)(*(uint *)(*(int *)(param_1 + 4) + iVar2 * 4) & 0xffff) <= param_2);
    return (int)*(short *)(*(int *)(param_1 + 4) + -2 + iVar2 * 4);
  }
  return 0;
}


