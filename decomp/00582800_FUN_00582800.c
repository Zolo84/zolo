// FUN_00582800 @ 582800 size=245

undefined4 __thiscall FUN_00582800(int *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[4];
  param_1[4] = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    FUN_00582710(&param_2,param_2,param_3);
    param_1[4] = param_1[5];
    iVar4 = param_1[2] + -1;
    param_1[2] = iVar4;
    while (iVar4 == 0) {
      iVar2 = param_1[1];
      iVar3 = *param_1;
      iVar4 = iVar3 + iVar2 * 0x1c;
      iVar5 = *(int *)(iVar3 + iVar2 * 0x1c);
      if (iVar5 == 1) {
        return 0;
      }
      if (iVar5 == 2) {
        param_1[1] = (uint)*(byte *)(iVar4 + 4);
      }
      else if (iVar5 == 3) {
        bVar1 = *(byte *)(iVar4 + 4);
        param_1[1] = iVar2 + 1;
        param_1[2] = (uint)bVar1;
      }
      else {
        iVar5 = 0;
        if (*(char *)(iVar4 + 0x18) != '\0') {
          iVar5 = _rand();
          iVar5 = iVar5 % (int)*(char *)(iVar3 + 0x18 + iVar2 * 0x1c);
        }
        iVar4 = *(int *)(iVar3 + 10 + (iVar2 * 7 + iVar5) * 4);
        param_1[3] = iVar4;
        if (0 < param_2 << 0x10) {
          (**(code **)(*DAT_00bd0e18 + 0x20))(iVar4);
        }
        bVar1 = *(byte *)(*param_1 + 4 + param_1[1] * 0x1c);
        param_1[1] = param_1[1] + 1;
        param_1[2] = (uint)bVar1;
      }
      iVar4 = param_1[2];
    }
  }
  return 1;
}


