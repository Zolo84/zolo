// FUN_005359b0 @ 5359b0 size=414

undefined4 __thiscall FUN_005359b0(int *param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined1 local_100 [256];
  
  piVar1 = (int *)FUN_00534391();
  iVar2 = *piVar1;
  while( true ) {
    if (iVar2 == 4) {
      FUN_005343dc();
      return 0;
    }
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 != 0x524) break;
    FUN_005343dc();
    iVar2 = FUN_007a7b3c((short)(*param_1 + 0x10));
    if (iVar2 < 0) {
      return 0xfffffffe;
    }
    FUN_004739f0(param_2,(short)((uint)iVar2 >> 0x10));
    if (DAT_00dc4b5e != '\0') {
      switch(param_2) {
      case 3:
        uVar5 = 0xe38;
        break;
      case 4:
        uVar5 = 0xe2c;
        break;
      default:
        uVar5 = 0xebf8;
        break;
      case 6:
        uVar5 = 0xe24;
        break;
      case 7:
        uVar5 = 0xe1c;
        break;
      case 9:
        uVar5 = 0xe10;
        break;
      case 10:
        uVar5 = 0xe04;
        break;
      case 0x11:
        uVar5 = 0xdf8;
      }
      FUN_007a630a((short)local_100,uVar5);
      iVar4 = 0;
      iVar3 = *(int *)(param_3 + 4);
      if (*(int *)(param_3 + 4) != 0) {
        do {
          piVar1 = (int *)(iVar3 + 10);
          if (*(int *)(iVar3 + 2) == iVar2) {
            iVar4 = iVar4 + 1;
          }
          iVar3 = *piVar1;
        } while (*piVar1 != 0);
        if ((1 < iVar4) && ((iVar2 != 0 || (param_1[1] != 0x2bf)))) {
          FUN_00429a00(s_ERROR____sID___d__found__d_times_00850db8,local_100,iVar2,iVar4,param_1 + 2
                       ,(short)(*param_1 + 0x216),(short)(*(int *)(*param_1 + 0x212) + 1));
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
      }
    }
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 8) {
      FUN_005343dc();
    }
    piVar1 = (int *)FUN_00534391();
    iVar2 = *piVar1;
  }
  return 0xfffffffe;
}


