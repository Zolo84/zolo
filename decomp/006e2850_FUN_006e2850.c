// FUN_006e2850 @ 6e2850 size=487

void FUN_006e2850(undefined4 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined2 local_20 [4];
  undefined2 local_18 [4];
  undefined2 local_10 [4];
  undefined2 local_8 [4];
  
  switch(param_1) {
  case 4:
    local_20[0] = (undefined2)param_3;
    iVar1 = FUN_00428ee0((short)local_20);
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 + -8 == 0) {
      return;
    }
    if ((*(int *)(iVar1 + 0x30) == 0) && (*(int *)(iVar1 + 0x28) != 1)) {
      return;
    }
    FUN_0064eba0(0);
    FUN_0064eb40((short)(iVar1 + -8));
    FUN_0064c090((short)param_2);
    return;
  default:
    local_8[0] = (undefined2)param_3;
    iVar1 = FUN_00428ee0((short)local_8);
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 + -8 == 0) {
      return;
    }
    FUN_0064eb40(0);
    FUN_0064eba0((short)(iVar1 + -8));
    iVar1 = *(int *)(iVar1 + 100);
    if (iVar1 == 0) {
      if (param_2 == 0x15) {
        return;
      }
      goto LAB_006e2960;
    }
    break;
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x72:
  case 0x89:
  case 0x8a:
  case 0xb6:
  case 0xf9:
    local_18[0] = (undefined2)param_3;
    iVar1 = FUN_00428ee0((short)local_18);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = iVar1 + -0x14;
    if (iVar1 == 0) {
      return;
    }
    FUN_0052ac00();
    (**(code **)(*DAT_00d0ca90 + 0x49c))((short)iVar1);
    break;
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
    local_10[0] = (undefined2)param_3;
    iVar1 = FUN_00428ee0((short)local_10);
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 == 8) {
      return;
    }
    FUN_0052ac00();
    FUN_005eac20((undefined2)param_3,(short)((ulonglong)param_3 >> 0x20));
    iVar1 = *(int *)(*(int *)(iVar1 + 0x70) + 0x12);
    goto LAB_006e2939;
  }
  iVar1 = *(int *)(iVar1 + 0xc);
LAB_006e2939:
  if (0 < iVar1) {
    iVar1 = FUN_004e9370((short)iVar1);
    FUN_004d8cf0(*(undefined4 *)(iVar1 + 0x3f2),(short)*(undefined4 *)(iVar1 + 0x3f6));
    FUN_004d87c0();
  }
LAB_006e2960:
  FUN_0064c090((short)param_2);
  return;
}


