// FUN_004129c4 @ 4129c4 size=382

int __thiscall FUN_004129c4(int param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int local_18;
  int local_14;
  int local_8;
  
  if (param_2 == (byte *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = 0;
LAB_004129e5:
    bVar1 = *param_2;
    pbVar3 = param_2 + 1;
    if (bVar1 != 0) {
      switch(bVar1) {
      case 10:
      case 0xd:
        param_2 = pbVar3;
        break;
      case 0x20:
      case 0xbad1abe1bad1abe1:
                    /* WARNING: Calculation of case label failed */
        if (*(int *)(*(int *)(param_1 + 8) + 0x80) == 0) {
          local_14 = *(int *)(param_1 + 4);
        }
        else {
          local_14 = (int)*(short *)(*(int *)(*(int *)(param_1 + 8) + 0x80) + 6);
        }
        local_8 = local_8 + local_14;
        param_2 = pbVar3;
        break;
      case 0x5c:
        goto switchD_00412a2f_caseD_5c;
      case 0xa7:
        bVar2 = false;
        switch(*pbVar3) {
        case 0xa7:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4d:
        case 0x4e:
        case 0x52:
        case 0x57:
        case 0x59:
        case 0x5a:
          bVar2 = true;
        }
        if (bVar2) {
          param_2 = param_2 + 2;
          break;
        }
      case 0x25:
        param_2 = param_2 + 4;
        break;
      default:
        goto switchD_00412a2f_caseD_a8;
      }
      goto LAB_004129e5;
    }
  }
  return local_8;
switchD_00412a2f_caseD_5c:
  bVar1 = *pbVar3;
  param_2 = param_2 + 2;
  pbVar3 = param_2;
  if (bVar1 != 0x6e) {
switchD_00412a2f_caseD_a8:
                    /* WARNING: Calculation of case label failed */
    param_2 = pbVar3;
    if (*(int *)(*(int *)(param_1 + 8) + (uint)bVar1 * 4) == 0) {
      local_18 = *(int *)(param_1 + 4);
    }
    else {
      local_18 = (int)*(short *)(*(int *)(*(int *)(param_1 + 8) + (uint)bVar1 * 4) + 6);
    }
    local_8 = local_8 + local_18;
  }
  goto LAB_004129e5;
}


