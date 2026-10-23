// FUN_0078d960 @ 78d960 size=771

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_0078d960(int param_1,undefined4 param_2,int param_3,float param_4,char param_5)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  switch(param_2) {
  case 1:
    switch(param_3) {
    case 0:
      uVar2 = -(uint)(param_5 != '\0') & 7;
      break;
    case 1:
      uVar2 = (-(uint)(param_5 != '\0') & 7) + 1;
      break;
    default:
      goto switchD_0078d96e_default;
    case 4:
      uVar2 = (-(uint)(param_5 != '\0') & 7) + 2;
      break;
    case 5:
      uVar2 = (-(uint)(param_5 != '\0') & 7) + 3;
      break;
    case 6:
      uVar2 = (-(uint)(param_5 != '\0') & 7) + 4;
      break;
    case 7:
      uVar2 = (-(uint)(param_5 != '\0') & 7) + 5;
      break;
    case 8:
      uVar2 = (-(uint)(param_5 != '\0') & 7) + 6;
    }
    if (uVar2 == 0x36) goto switchD_0078d96e_default;
    break;
  case 2:
    switch(param_3) {
    case 0:
      uVar2 = 0xe;
      break;
    case 1:
      uVar2 = 0x10;
      break;
    case 2:
      uVar2 = 0xf;
      break;
    default:
      goto switchD_0078d96e_default;
    case 0x17:
      uVar2 = 0x11;
      break;
    case 0x18:
      uVar2 = 0x12;
      break;
    case 0x19:
      uVar2 = 0x13;
      break;
    case 0x1a:
      uVar2 = 0x14;
      break;
    case 0x1b:
      uVar2 = 0x15;
      break;
    case 0x1c:
      uVar2 = 0x16;
      break;
    case 0x1d:
      uVar2 = 0x17;
      break;
    case 0x1e:
      uVar2 = 0x18;
      break;
    case 0x1f:
      uVar2 = 0x19;
      break;
    case 0x20:
      uVar2 = 0x1a;
      break;
    case 0x21:
      uVar2 = 0x1b;
    }
    break;
  case 3:
    switch(param_3) {
    case 2:
      uVar2 = 0x1c;
      break;
    default:
      goto switchD_0078d96e_default;
    case 9:
switchD_0078db02_caseD_9:
      uVar2 = 0x1d;
      break;
    case 10:
      uVar2 = 0x1e;
      break;
    case 0xb:
      uVar2 = 0x21;
      break;
    case 0xc:
      uVar2 = 0x25;
      break;
    case 0xd:
      uVar2 = 0x24;
      break;
    case 0xe:
      uVar2 = 0x1f;
      break;
    case 0xf:
      uVar2 = 0x20;
      break;
    case 0x10:
      uVar2 = 0x22;
      break;
    case 0x11:
      uVar2 = 0x23;
      break;
    case 0x12:
      uVar2 = 0x28;
      break;
    case 0x13:
      uVar2 = 0x26;
      break;
    case 0x14:
      uVar2 = 0x27;
      break;
    case 0x15:
      uVar2 = 0x2a;
      break;
    case 0x16:
switchD_0078db02_caseD_16:
      uVar2 = 0x29;
    }
    break;
  case 4:
    if (param_3 == 10) {
      uVar2 = 0x2b;
    }
    else {
      if (param_3 != 0xb) goto switchD_0078d96e_default;
      uVar2 = 0x2c;
    }
    break;
  case 5:
    if (param_3 == 0x10) {
      uVar2 = 0x2d;
    }
    else {
      if (param_3 != 0x11) goto switchD_0078d96e_default;
      uVar2 = 0x2e;
    }
    break;
  case 6:
    switch(param_3) {
    case 0xc:
      uVar2 = 0x32;
      break;
    case 0xd:
      uVar2 = 0x31;
      break;
    case 0xe:
      uVar2 = 0x2f;
      break;
    case 0xf:
      uVar2 = 0x30;
      break;
    default:
      goto switchD_0078d96e_default;
    case 0x15:
      uVar2 = 0x33;
    }
    break;
  case 7:
    if (param_3 == 9) goto switchD_0078db02_caseD_9;
    if (param_3 == 0x16) goto switchD_0078db02_caseD_16;
    if (param_3 != 0x1e) goto switchD_0078d96e_default;
    uVar2 = 0x34;
    break;
  case 8:
    if (param_3 != 0x1f) goto switchD_0078d96e_default;
    uVar2 = 0x35;
    break;
  default:
    goto switchD_0078d96e_default;
  }
  iVar1 = param_1 + uVar2 * 0xc;
  if (*(float *)(param_1 + 0x5f9d2 + uVar2 * 0xc) != _DAT_007e3380) {
    fVar3 = (float10)param_4 + (float10)*(float *)(iVar1 + 0x5f9ca);
    if (fVar3 < (float10)*(float *)(iVar1 + 0x5f9ce)) {
      fVar3 = (float10)*(float *)(iVar1 + 0x5f9ce);
    }
    return fVar3 * (float10)*(float *)(iVar1 + 0x5f9d2);
  }
switchD_0078d96e_default:
  return (float10)_DAT_007e3380;
}


