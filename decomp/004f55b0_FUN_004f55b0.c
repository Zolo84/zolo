// FUN_004f55b0 @ 4f55b0 size=128

undefined4 FUN_004f55b0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0x41a) {
    if (iVar1 == 0x419) {
      return 6;
    }
    if (iVar1 < 0x417) {
      if (iVar1 == 0x416) {
        return 5;
      }
      if (iVar1 == 0xe2) {
        return 1;
      }
      if (iVar1 == 0x415) {
        return 4;
      }
    }
    else {
      if (iVar1 == 0x417) {
        return 2;
      }
      if (iVar1 == 0x418) {
        return 3;
      }
    }
  }
  else {
    switch(iVar1) {
    case 0x41a:
      return 7;
    case 0x41b:
      return 8;
    case 0x41c:
      return 9;
    case 0x41d:
      return 10;
    }
  }
  return 0;
}


