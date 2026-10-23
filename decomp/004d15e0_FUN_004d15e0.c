// FUN_004d15e0 @ 4d15e0 size=122

undefined4 FUN_004d15e0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0x41a) {
    if (iVar1 == 0x419) {
      return 6;
    }
    switch(iVar1) {
    case 0xb5:
      return 4;
    case 0xe2:
      return 1;
    case 0x14d:
      return 5;
    case 0x15e:
      return 3;
    case 0x15f:
      return 2;
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


