// FUN_005058b0 @ 5058b0 size=377

undefined4 FUN_005058b0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0xb5) {
    if (iVar1 == 0xb4) {
      return 5;
    }
    switch(iVar1) {
    case 0x81:
      return 0x12;
    case 0x8d:
      return 2;
    case 0x93:
      return 0xf;
    case 0x99:
      return 0x14;
    case 0x9a:
      return 0x1c;
    case 0x9b:
      return 0x21;
    case 0x9c:
      return 0x1e;
    case 0x9d:
      return 0x1d;
    case 0x9e:
      return 0x22;
    case 0x9f:
      return 0x1f;
    case 0xa0:
      return 0x23;
    case 0xa3:
      return 0x20;
    case 0xa4:
      return 0x24;
    case 0xa5:
      return 10;
    case 0xa8:
      return 0xc;
    case 0xaf:
      return 0xe;
    case 0xb1:
      return 0xd;
    case 0xb3:
      return 9;
    }
  }
  else if (iVar1 < 0x678) {
    if (iVar1 == 0x677) {
      return 1;
    }
    if (iVar1 < 0x1b4) {
      if (iVar1 == 0x1b3) {
        return 0;
      }
      switch(iVar1) {
      case 0xb5:
        return 4;
      case 0x10c:
        return 0x19;
      case 0x10d:
        return 0x1a;
      case 0x174:
        return 0x1b;
      }
    }
    else if (iVar1 < 0x606) {
      if (iVar1 == 0x605) {
        return 0xb;
      }
      if (iVar1 == 0x2c5) {
        return 0x17;
      }
      if (iVar1 == 0x597) {
        return 0x11;
      }
    }
    else if (iVar1 == 0x606) {
      return 0x15;
    }
  }
  else {
    switch(iVar1) {
    case 0x678:
      return 3;
    case 0x679:
      return 6;
    case 0x67a:
      return 7;
    case 0x67b:
      return 8;
    case 0x67c:
      return 0x13;
    case 0x67d:
      return 0x10;
    case 0x67e:
      return 0x16;
    case 0x67f:
      return 0x18;
    }
  }
  return 0x25;
}


