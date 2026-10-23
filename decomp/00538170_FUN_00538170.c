// FUN_00538170 @ 538170 size=762

undefined4 __fastcall FUN_00538170(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_00d0ca90 == 0) {
    iVar2 = 1;
    do {
      FUN_005343dc();
      piVar4 = (int *)FUN_00534391();
      if (*piVar4 == 4) {
        iVar2 = iVar2 + -1;
      }
      piVar4 = (int *)FUN_00534391();
      if (*piVar4 == 3) {
        iVar2 = iVar2 + 1;
      }
    } while (iVar2 != 0);
  }
  else {
    do {
      while (iVar2 = FUN_00535490(), iVar2 == 1) {
        iVar2 = param_1[1];
        uVar1 = SUB42(param_1,0);
        switch(iVar2) {
        case 0x208:
          uVar1 = FUN_007a7b3c((short)(param_1 + 0x104));
          FUN_006d5090(uVar1);
          break;
        default:
switchD_005381ba_caseD_209:
          FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                       s_unknown_interface_data_00850ee8,param_1 + 2,param_1 + 0x83,param_1 + 0x104,
                       *(int *)(*param_1 + 0x212) + 1,(short)(*param_1 + 0x216));
          if (DAT_00dc4b5f != '\0') {
            FUN_00429a50(0xe1e8);
          }
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
          FUN_00429a00(&DAT_00850bd4,0xe1e8);
          if (DAT_00dc4b5e == '\0') {
            FUN_007a64d3(0);
          }
          return 0xfffffffe;
        case 0x247:
          FUN_00581e60(uVar1);
          FUN_00424e00(uVar1);
          break;
        case 0x248:
          iVar2 = FUN_007a7b3c((short)(param_1 + 0x104));
          if (iVar2 == 0xd) {
            iVar2 = 0;
          }
          FUN_004dcb20((short)*(undefined4 *)(DAT_00d0ca90 + 6),(short)iVar2);
          break;
        case 0x249:
          FUN_00424e00(uVar1);
          FUN_004d8cf0((short)local_8,(short)local_4);
          break;
        case 0x24a:
          uVar1 = FUN_007a7b3c((short)(param_1 + 0x104));
          FUN_004d8ea0(uVar1);
          break;
        case 0x28a:
        case 0x28b:
        case 0x28c:
        case 0x28d:
        case 0x28e:
        case 0x28f:
        case 0x290:
        case 0x291:
        case 0x292:
        case 0x293:
          do {
            while (iVar3 = FUN_00535490(), iVar3 == 1) {
              if (param_1[1] == 0x523) {
                local_10 = 0;
                local_e = 0;
                FUN_00427ed0(uVar1);
                iVar3 = FUN_00428ee0((short)&local_10);
                if ((iVar3 != 0) && (iVar3 != 0x14)) {
                  uVar6 = (undefined2)((uint)local_e >> 0x10);
                  uVar5 = local_10;
                  FUN_00538520(iVar2 + -0x28a);
                  FUN_0049a190(uVar5,uVar6);
                }
              }
              else {
                FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                             s_not_id_field_in_unitlist_00850f00,param_1 + 2,param_1 + 0x83,
                             param_1 + 0x104,(short)(*(int *)(*param_1 + 0x212) + 1),
                             (short)(*param_1 + 0x216));
                if (DAT_00dc4b5f != '\0') {
                  FUN_00429a50(0xe1e8);
                }
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
                FUN_00429a00(0xbd4,0xe1e8);
                if (DAT_00dc4b5e == '\0') {
                  FUN_007a64d3(0);
                  goto switchD_005381ba_caseD_209;
                }
              }
            }
            if (iVar3 == 2) {
              return 0xfffffffe;
            }
            piVar4 = (int *)FUN_00534391();
          } while (*piVar4 != 4);
          FUN_005343dc();
        }
      }
      if (iVar2 == 2) {
        return 0xfffffffe;
      }
      piVar4 = (int *)FUN_00534391();
    } while (*piVar4 != 4);
  }
  FUN_005343dc();
  return 0;
}


