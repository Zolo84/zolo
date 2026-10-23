// FUN_00766230 @ 766230 size=1598

undefined4 __thiscall FUN_00766230(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  float10 fVar6;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007e0a78;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_00766272:
  do {
    iVar2 = FUN_00535490();
    if (iVar2 != 1) {
      if ((iVar2 != 2) && (piVar4 = (int *)FUN_00534391(), *piVar4 == 4)) {
        FUN_005343dc();
      }
      while (local_1c != (int *)0x0) {
        piVar4 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar4;
      }
      ExceptionList = local_c;
      return 0;
    }
    piVar4 = local_1c;
    piVar3 = local_18;
    if (DAT_00dc4b5e != '\0') {
      iVar2 = param_2[1];
      for (; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
        cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar4,iVar2);
        if (cVar1 != '\0') {
          if (piVar4 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      iVar2 = param_2[1];
      piVar3 = operator_new(0xe);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = iVar2;
        piVar3[1] = (int)local_18;
        piVar3[2] = 0;
        *(undefined1 *)(piVar3 + 3) = 0;
      }
      iVar2 = local_14 + 1;
      bVar5 = local_14 != 0;
      piVar4 = piVar3;
      local_14 = iVar2;
      if (bVar5) {
        local_18[2] = (int)piVar3;
        piVar4 = local_1c;
      }
    }
    local_18 = piVar3;
    local_1c = piVar4;
    iVar2 = param_2[1];
    if (iVar2 < 0x346) {
      if (iVar2 != 0x345) {
        if (iVar2 != 0x141) {
          if (iVar2 == 0x14e) {
            if (param_2[0x103] != 0x524) {
              FUN_005349b0(s_Wrong_value_in_minister_command__00876088);
              while (local_1c != (int *)0x0) {
                piVar4 = (int *)local_1c[2];
                FUN_00796cd8(local_1c);
                local_1c = piVar4;
              }
              ExceptionList = local_c;
              return 0xfffffffe;
            }
            fVar6 = (float10)FUN_00429d80(param_2 + 0x104);
            *(float *)(param_1 + 0x10) = (float)fVar6;
          }
          else {
LAB_00766713:
            FUN_005349b0(s_Unknown_lhs__commands__in_minist_008760ac);
          }
          goto LAB_00766272;
        }
        iVar2 = param_2[0x103];
        if (iVar2 < 0x495) {
          if (iVar2 == 0x494) {
            *(undefined4 *)(param_1 + 4) = 0xe;
            goto LAB_00766272;
          }
          if (iVar2 < 0x1f2) {
            if (iVar2 == 0x1f1) {
              *(undefined4 *)(param_1 + 4) = 3;
              goto LAB_00766272;
            }
            if (iVar2 < 0x151) {
              if (iVar2 == 0x150) {
                *(undefined4 *)(param_1 + 4) = 2;
                goto LAB_00766272;
              }
              if (iVar2 == 0x84) {
                *(undefined4 *)(param_1 + 4) = 0xd;
                goto LAB_00766272;
              }
              if (iVar2 == 0xed) {
                *(undefined4 *)(param_1 + 4) = 4;
                goto LAB_00766272;
              }
            }
            else {
              if (iVar2 == 0x151) {
                *(undefined4 *)(param_1 + 4) = 0;
                goto LAB_00766272;
              }
              if (iVar2 == 0x1de) {
                *(undefined4 *)(param_1 + 4) = 0x11;
                goto LAB_00766272;
              }
            }
          }
          else if (iVar2 < 0x2b3) {
            if (iVar2 == 0x2b2) {
              *(undefined4 *)(param_1 + 4) = 0x10;
              goto LAB_00766272;
            }
            if (iVar2 == 0x20e) {
              *(undefined4 *)(param_1 + 4) = 5;
              goto LAB_00766272;
            }
            if (iVar2 == 0x2b0) {
              *(undefined4 *)(param_1 + 4) = 1;
              goto LAB_00766272;
            }
          }
          else if (iVar2 == 0x358) {
            *(undefined4 *)(param_1 + 4) = 0x12;
            goto LAB_00766272;
          }
        }
        else {
          switch(iVar2) {
          case 0x550:
            *(undefined4 *)(param_1 + 4) = 6;
            goto LAB_00766272;
          case 0x551:
            *(undefined4 *)(param_1 + 4) = 7;
            goto LAB_00766272;
          case 0x552:
            *(undefined4 *)(param_1 + 4) = 8;
            goto LAB_00766272;
          case 0x553:
            *(undefined4 *)(param_1 + 4) = 9;
            goto LAB_00766272;
          case 0x554:
            *(undefined4 *)(param_1 + 4) = 10;
            goto LAB_00766272;
          case 0x555:
            *(undefined4 *)(param_1 + 4) = 0xb;
            goto LAB_00766272;
          case 0x556:
            *(undefined4 *)(param_1 + 4) = 0xc;
            goto LAB_00766272;
          case 0x557:
            *(undefined4 *)(param_1 + 4) = 0xf;
            goto LAB_00766272;
          case 0x560:
            *(undefined4 *)(param_1 + 4) = 0x13;
            goto LAB_00766272;
          }
        }
        FUN_005349b0(s_Unknown_minister_command__type___00876064);
        local_4 = 0xffffffff;
        FUN_004174b0();
        ExceptionList = local_c;
        return 0xfffffffe;
      }
      iVar2 = param_2[0x103];
      if (iVar2 < 0x534) {
        if (iVar2 == 0x533) {
          *(undefined4 *)(param_1 + 0xc) = 7;
          goto LAB_00766272;
        }
        if (iVar2 < 0x1ab) {
          if (iVar2 == 0x1aa) {
            *(undefined4 *)(param_1 + 0xc) = 0xf;
            goto LAB_00766272;
          }
          if (iVar2 < 0xc1) {
            if (iVar2 == 0xc0) {
              *(undefined4 *)(param_1 + 0xc) = 10;
              goto LAB_00766272;
            }
            if (iVar2 == 0x35) {
              *(undefined4 *)(param_1 + 0xc) = 0xd;
              goto LAB_00766272;
            }
            if (iVar2 == 0xbe) {
              *(undefined4 *)(param_1 + 0xc) = 0xb;
              goto LAB_00766272;
            }
          }
          else if (iVar2 == 0x137) {
            *(undefined4 *)(param_1 + 0xc) = 0x10;
            goto LAB_00766272;
          }
        }
        else if (iVar2 < 0x244) {
          if (iVar2 == 0x243) {
            *(undefined4 *)(param_1 + 0xc) = 8;
            goto LAB_00766272;
          }
          if (iVar2 == 0x1b4) {
            *(undefined4 *)(param_1 + 0xc) = 0x11;
            goto LAB_00766272;
          }
          if (iVar2 == 0x1dd) {
            *(undefined4 *)(param_1 + 0xc) = 0xc;
            goto LAB_00766272;
          }
        }
        else if (iVar2 == 0x33c) {
          *(undefined4 *)(param_1 + 0xc) = 9;
          goto LAB_00766272;
        }
      }
      else {
        switch(iVar2) {
        case 0x534:
          *(undefined4 *)(param_1 + 0xc) = 6;
          goto LAB_00766272;
        case 0x54f:
          *(undefined4 *)(param_1 + 0xc) = 0xe;
          goto LAB_00766272;
        case 0x558:
          *(undefined4 *)(param_1 + 0xc) = 0;
          goto LAB_00766272;
        case 0x559:
          *(undefined4 *)(param_1 + 0xc) = 1;
          goto LAB_00766272;
        case 0x55a:
          *(undefined4 *)(param_1 + 0xc) = 2;
          goto LAB_00766272;
        case 0x55b:
          *(undefined4 *)(param_1 + 0xc) = 3;
          goto LAB_00766272;
        case 0x55c:
          *(undefined4 *)(param_1 + 0xc) = 4;
          goto LAB_00766272;
        case 0x55d:
          *(undefined4 *)(param_1 + 0xc) = 5;
          goto LAB_00766272;
        }
      }
      FUN_005349b0(s_Unknown_minister_command__when___00876040);
      while (local_1c != (int *)0x0) {
        piVar4 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar4;
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    if (iVar2 != 0x3e4) goto LAB_00766713;
    iVar2 = FUN_007640a0(param_2 + 0x103);
    if (iVar2 == 0x161) {
      FUN_005349b0(s_Unknown_minister_command__which__0087601c);
      while (local_1c != (int *)0x0) {
        piVar4 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar4;
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    *(int *)(param_1 + 8) = iVar2;
  } while( true );
}


