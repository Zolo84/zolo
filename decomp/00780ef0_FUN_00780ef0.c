// FUN_00780ef0 @ 780ef0 size=2927

undefined4 __thiscall FUN_00780ef0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piStack_28;
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007e0f2b;
  ExceptionList = &pvStack_c;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x1c58a);
  for (iVar7 = 0x31b8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x28c6a);
  for (iVar7 = 0x31b8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x3534a);
  for (iVar7 = 0x6f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x35506);
  for (iVar7 = 0x6f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  piVar6 = *(int **)(param_1 + 0x356c6);
  while (piVar6 != (int *)0x0) {
    piVar8 = (int *)piVar6[2];
    if (*piVar6 != 0) {
      FUN_00796cd8(*piVar6);
    }
    FUN_00796cd8(piVar6);
    piVar6 = piVar8;
  }
  *(undefined4 *)(param_1 + 0x356c6) = 0;
  *(undefined4 *)(param_1 + 0x356ca) = 0;
  *(undefined4 *)(param_1 + 0x356ce) = 0;
  (**(code **)(*(int *)(param_1 + 0x356c2) + 0x14))();
  piVar6 = *(int **)(param_1 + 0x356d8);
  while (piVar6 != (int *)0x0) {
    piVar8 = (int *)piVar6[2];
    if (*piVar6 != 0) {
      FUN_00796cd8(*piVar6);
    }
    FUN_00796cd8(piVar6);
    piVar6 = piVar8;
  }
  *(undefined4 *)(param_1 + 0x356d8) = 0;
  *(undefined4 *)(param_1 + 0x356dc) = 0;
  *(undefined4 *)(param_1 + 0x356e0) = 0;
  (**(code **)(*(int *)(param_1 + 0x356d4) + 0x14))();
  *(undefined1 *)(param_1 + 0x167f4) = 0;
  DAT_00d610e2 = 0;
LAB_00780fe1:
  while (iVar7 = FUN_00535490(), iVar7 != 1) {
    if (iVar7 == 2) {
      ExceptionList = pvStack_c;
      return 0xfffffffe;
    }
    piVar6 = (int *)FUN_00534391();
    if (*piVar6 == 4) {
      FUN_005343dc();
      iVar7 = (**(code **)(*(int *)(param_1 + 0x167ba) + 4))();
      if ((iVar7 == 0) && (*(char *)(*(int *)(param_1 + 0x7226) + 0x2ce2) == '\0')) {
        FUN_0076ed00();
      }
      iVar7 = (**(code **)(*(int *)(param_1 + 0x167de) + 4))();
      if ((iVar7 == 0) && (*(char *)(*(int *)(param_1 + 0x7226) + 0x2ce2) == '\0')) {
        FUN_0076f220();
      }
      ExceptionList = pvStack_c;
      return 0;
    }
  }
  iVar7 = *(int *)(param_2 + 4);
  if (iVar7 < 500) {
    if (iVar7 != 499) {
      if (iVar7 < 0x13e) {
        if (iVar7 == 0x13d) {
          if (*(int *)(param_2 + 0x40c) == 3) {
            piVar6 = operator_new(0x4c);
            uStack_4 = 6;
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              FUN_00425b20();
              uStack_4._0_1_ = 7;
              FUN_00428b00();
              *(undefined ***)((int)piVar6 + 0x12) = &PTR_LAB_007e4068;
              uStack_4 = CONCAT31(uStack_4._1_3_,8);
              *(undefined2 *)((int)piVar6 + 0x26) = 0;
              *(undefined1 *)(piVar6 + 9) = 0;
              *(undefined1 *)((int)piVar6 + 0x23) = 0;
              *(undefined1 *)((int)piVar6 + 0x22) = 0;
              FUN_0042d2d0();
              *piVar6 = (int)&PTR_FUN_007e64c0;
              piVar6[2] = (int)&PTR_LAB_007e64ac;
              *(undefined ***)((int)piVar6 + 0x12) = &PTR_FUN_007e64a4;
              FUN_00428d30();
              FUN_005896e0(0);
            }
            uStack_4 = 0xffffffff;
            (**(code **)(*piVar6 + 8))(param_2);
            iVar7 = *(int *)(param_1 + 0x27a);
            puVar4 = operator_new(0xe);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *puVar4 = piVar6;
              puVar4[1] = iVar7;
              puVar4[2] = 0;
              *(undefined1 *)(puVar4 + 3) = 0;
            }
            iVar1 = *(int *)(param_1 + 0x27e);
            *(undefined4 **)(param_1 + 0x27a) = puVar4;
            *(int *)(param_1 + 0x27e) = iVar1 + 1;
            if (iVar1 == 0) {
              *(undefined4 **)(param_1 + 0x276) = puVar4;
            }
            else {
              *(undefined4 **)(iVar7 + 8) = puVar4;
            }
            goto LAB_00780fe1;
          }
        }
        else {
          if (iVar7 < 0x134) {
            if (iVar7 == 0x133) {
              FUN_0078f500(param_2);
            }
            else if (iVar7 == 0x32) {
              piVar6 = operator_new(0x300);
              uStack_4 = 2;
              if (piVar6 == (int *)0x0) {
                piVar6 = (int *)0x0;
              }
              else {
                FUN_004fb840();
                *piVar6 = (int)&PTR_FUN_007e69a8;
                piVar6[2] = (int)&PTR_LAB_007e6994;
                *(undefined ***)((int)piVar6 + 0x12) = &PTR_FUN_007e698c;
                piVar8 = piVar6 + 0xb3;
                for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *piVar8 = 0;
                  piVar8 = piVar8 + 1;
                }
                *(undefined1 *)((int)piVar6 + 0x161) = 1;
              }
              piVar6[0x17] = 0;
              iVar7 = *(int *)(param_1 + 0x167fe);
              uStack_4 = 0xffffffff;
              puVar4 = operator_new(0xe);
              if (puVar4 == (undefined4 *)0x0) {
                puVar4 = (undefined4 *)0x0;
              }
              else {
                *puVar4 = piVar6;
                puVar4[1] = iVar7;
                puVar4[2] = 0;
                *(undefined1 *)(puVar4 + 3) = 0;
              }
              iVar1 = *(int *)(param_1 + 0x16802);
              *(undefined4 **)(param_1 + 0x167fe) = puVar4;
              *(int *)(param_1 + 0x16802) = iVar1 + 1;
              if (iVar1 == 0) {
                *(undefined4 **)(param_1 + 0x167fa) = puVar4;
                (**(code **)(*piVar6 + 8))(param_2);
              }
              else {
                *(undefined4 **)(iVar7 + 8) = puVar4;
                (**(code **)(*piVar6 + 8))(param_2);
              }
            }
            else {
              if (iVar7 != 0x12d) goto switchD_007814c6_caseD_158;
              if (*(int *)(param_2 + 0x40c) == 3) {
                pvVar3 = operator_new(0x68);
                uStack_4 = 1;
                if (pvVar3 == (void *)0x0) {
                  puVar4 = (undefined4 *)0x0;
                }
                else {
                  puVar4 = (undefined4 *)FUN_00509d30();
                }
                uStack_4 = 0xffffffff;
                iVar7 = FUN_0055e590(param_2);
                if (iVar7 == 0) {
                  iVar7 = *(int *)(param_1 + 0x167e6);
                  puVar5 = operator_new(0xe);
                  if (puVar5 == (undefined4 *)0x0) {
                    puVar5 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar5 = puVar4;
                    puVar5[1] = iVar7;
                    puVar5[2] = 0;
                    *(undefined1 *)(puVar5 + 3) = 0;
                  }
                  iVar1 = *(int *)(param_1 + 0x167ea);
                  *(undefined4 **)(param_1 + 0x167e6) = puVar5;
                  *(int *)(param_1 + 0x167ea) = iVar1 + 1;
                  if (iVar1 == 0) {
                    *(undefined4 **)(param_1 + 0x167e2) = puVar5;
                  }
                  else {
                    *(undefined4 **)(iVar7 + 8) = puVar5;
                  }
                }
                else if (puVar4 != (undefined4 *)0x0) {
                  (**(code **)*puVar4)(1);
                }
              }
              else {
                FUN_005349b0(s_No_left_curly_0082f278);
              }
            }
            goto LAB_00780fe1;
          }
          if (iVar7 == 0x137) {
            if (*(int *)(param_2 + 0x40c) == 3) {
              piVar6 = operator_new(0x3a7b4);
              uStack_4 = 9;
              if (piVar6 == (int *)0x0) {
                piVar6 = (int *)0x0;
              }
              else {
                FUN_00425b20();
                uStack_4._0_1_ = 10;
                FUN_00428b00();
                *(undefined ***)((int)piVar6 + 0x12) = &PTR_LAB_007e4068;
                uStack_4 = CONCAT31(uStack_4._1_3_,0xb);
                *(undefined2 *)((int)piVar6 + 0x1a) = 0;
                *(undefined1 *)(piVar6 + 6) = 0;
                *(undefined1 *)((int)piVar6 + 0x17) = 0;
                *(undefined1 *)((int)piVar6 + 0x16) = 0;
                FUN_0042d2d0();
                FUN_00781b40();
                FUN_00781b40();
                FUN_00526a00();
                *piVar6 = (int)&PTR_FUN_007e6cc0;
                piVar6[2] = (int)&PTR_LAB_007e6cac;
                *(undefined ***)((int)piVar6 + 0x12) = &PTR_FUN_007e6ca4;
              }
              uStack_4 = 0xffffffff;
              (**(code **)(*piVar6 + 8))(param_2);
              iVar7 = *(int *)(param_1 + 0x268);
              puVar4 = operator_new(0xe);
              if (puVar4 == (undefined4 *)0x0) {
                puVar4 = (undefined4 *)0x0;
              }
              else {
                *puVar4 = piVar6;
                puVar4[1] = iVar7;
                puVar4[2] = 0;
                *(undefined1 *)(puVar4 + 3) = 0;
              }
              iVar1 = *(int *)(param_1 + 0x26c);
              *(undefined4 **)(param_1 + 0x268) = puVar4;
              *(int *)(param_1 + 0x26c) = iVar1 + 1;
              if (iVar1 == 0) {
                *(undefined4 **)(param_1 + 0x264) = puVar4;
              }
              else {
                *(undefined4 **)(iVar7 + 8) = puVar4;
              }
              goto LAB_00780fe1;
            }
          }
          else {
            if (iVar7 != 0x13c) goto switchD_007814c6_caseD_158;
            if (*(int *)(param_2 + 0x40c) == 3) {
              piVar6 = operator_new(0x52a);
              uStack_4 = 3;
              if (piVar6 == (int *)0x0) {
                piVar6 = (int *)0x0;
              }
              else {
                FUN_00425b20();
                uStack_4._0_1_ = 4;
                FUN_00428b00();
                *(undefined ***)((int)piVar6 + 0x12) = &PTR_LAB_007e4068;
                uStack_4 = CONCAT31(uStack_4._1_3_,5);
                *piVar6 = (int)&PTR_FUN_007e4048;
                piVar6[2] = (int)&PTR_LAB_007e4034;
                *(undefined ***)((int)piVar6 + 0x12) = &PTR_FUN_007e402c;
                FUN_00428d30();
                FUN_005847c0();
                *(undefined1 *)((int)piVar6 + 0x16) = 0;
              }
              uStack_4 = 0xffffffff;
              (**(code **)(*piVar6 + 8))(param_2);
              iVar7 = *(int *)(param_1 + 0x256);
              puVar4 = operator_new(0xe);
              if (puVar4 == (undefined4 *)0x0) {
                puVar4 = (undefined4 *)0x0;
              }
              else {
                *puVar4 = piVar6;
                puVar4[1] = iVar7;
                puVar4[2] = 0;
                *(undefined1 *)(puVar4 + 3) = 0;
              }
              iVar1 = *(int *)(param_1 + 0x25a);
              *(undefined4 **)(param_1 + 0x256) = puVar4;
              *(int *)(param_1 + 0x25a) = iVar1 + 1;
              if (iVar1 == 0) {
                *(undefined4 **)(param_1 + 0x252) = puVar4;
              }
              else {
                *(undefined4 **)(iVar7 + 8) = puVar4;
              }
              goto LAB_00780fe1;
            }
          }
        }
      }
      else {
        switch(iVar7) {
        case 0x156:
          if (*(int *)(param_2 + 0x40c) == 3) {
            uStack_24 = uStack_24 & 0xff000000;
            *(uint *)(param_1 + 8) = uStack_24;
            *(undefined2 *)(param_1 + 0xc) = 0;
            FUN_0054f130(param_2);
            FUN_0042cc40((uint *)(param_1 + 8));
            goto LAB_00780fe1;
          }
          break;
        case 0x157:
          if (*(int *)(param_2 + 0x40c) == 3) {
            FUN_0054f130(param_2);
            goto LAB_00780fe1;
          }
          break;
        default:
          goto switchD_007814c6_caseD_158;
        case 0x18a:
          if (*(int *)(param_2 + 0x40c) == 3) {
            FUN_0075d190(param_2);
          }
          goto LAB_00780fe1;
        case 0x198:
          DAT_00d610e2 = 1;
          goto LAB_00780fe1;
        }
      }
      FUN_005349b0(s_No_Left_Curly_00857a20);
      goto LAB_00780fe1;
    }
    FUN_006aef60(param_2);
    goto LAB_00780fe1;
  }
  if (iVar7 < 0x3e2) {
    if (iVar7 != 0x3e1) {
      switch(iVar7) {
      case 0x22e:
        (**(code **)(**(int **)(param_1 + 0x246) + 8))(param_2);
        iVar7 = *(int *)(param_1 + 0x256);
        uVar2 = *(undefined4 *)(param_1 + 0x246);
        puVar4 = operator_new(0xe);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = uVar2;
          puVar4[1] = iVar7;
          puVar4[2] = 0;
          *(undefined1 *)(puVar4 + 3) = 0;
        }
        iVar1 = *(int *)(param_1 + 0x25a);
        *(undefined4 **)(param_1 + 0x256) = puVar4;
        *(int *)(param_1 + 0x25a) = iVar1 + 1;
        if (iVar1 != 0) {
          *(undefined4 **)(iVar7 + 8) = puVar4;
          goto LAB_00780fe1;
        }
        break;
      case 0x22f:
        (**(code **)(**(int **)(param_1 + 0x242) + 8))(param_2);
        iVar7 = *(int *)(param_1 + 0x256);
        uVar2 = *(undefined4 *)(param_1 + 0x242);
        puVar4 = operator_new(0xe);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = uVar2;
          puVar4[1] = iVar7;
          puVar4[2] = 0;
          *(undefined1 *)(puVar4 + 3) = 0;
        }
        iVar1 = *(int *)(param_1 + 0x25a);
        *(undefined4 **)(param_1 + 0x256) = puVar4;
        *(int *)(param_1 + 0x25a) = iVar1 + 1;
        if (iVar1 != 0) {
          *(undefined4 **)(iVar7 + 8) = puVar4;
          goto LAB_00780fe1;
        }
        break;
      case 0x230:
        (**(code **)(**(int **)(param_1 + 0x24a) + 8))(param_2);
        iVar7 = *(int *)(param_1 + 0x256);
        uVar2 = *(undefined4 *)(param_1 + 0x24a);
        puVar4 = operator_new(0xe);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = uVar2;
          puVar4[1] = iVar7;
          puVar4[2] = 0;
          *(undefined1 *)(puVar4 + 3) = 0;
        }
        iVar1 = *(int *)(param_1 + 0x25a);
        *(undefined4 **)(param_1 + 0x256) = puVar4;
        *(int *)(param_1 + 0x25a) = iVar1 + 1;
        if (iVar1 != 0) {
          *(undefined4 **)(iVar7 + 8) = puVar4;
          goto LAB_00780fe1;
        }
        break;
      default:
        goto switchD_007814c6_caseD_158;
      case 0x29e:
        pvVar3 = operator_new(0xc0);
        uStack_4 = 0;
        if (pvVar3 == (void *)0x0) {
          piStack_28 = (int *)0x0;
        }
        else {
          piStack_28 = (int *)FUN_00761c60();
        }
        iVar7 = *(int *)(param_1 + 0x167c2);
        uStack_4 = 0xffffffff;
        puVar4 = operator_new(0xe);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4[1] = iVar7;
          *puVar4 = piStack_28;
          puVar4[2] = 0;
          *(undefined1 *)(puVar4 + 3) = 0;
        }
        iVar1 = *(int *)(param_1 + 0x167c6);
        *(undefined4 **)(param_1 + 0x167c2) = puVar4;
        *(int *)(param_1 + 0x167c6) = iVar1 + 1;
        if (iVar1 == 0) {
          *(undefined4 **)(param_1 + 0x167be) = puVar4;
          (**(code **)(*piStack_28 + 8))(param_2);
        }
        else {
          *(undefined4 **)(iVar7 + 8) = puVar4;
          (**(code **)(*piStack_28 + 8))(param_2);
        }
        goto LAB_00780fe1;
      }
      *(undefined4 **)(param_1 + 0x252) = puVar4;
      goto LAB_00780fe1;
    }
    FUN_005359b0(6,*(undefined4 *)(param_1 + 0x1c574));
    goto LAB_00780fe1;
  }
  if (iVar7 < 0x573) {
    if (iVar7 == 0x572) {
      piStack_28 = operator_new(0x12);
      if (piStack_28 == (undefined4 *)0x0) {
        piStack_28 = (undefined4 *)0x0;
      }
      else {
        *(undefined2 *)(piStack_28 + 4) = 0;
        *(undefined1 *)((int)piStack_28 + 0xe) = 0;
        *(undefined1 *)((int)piStack_28 + 0xd) = 0;
        *(undefined1 *)(piStack_28 + 3) = 0;
        *piStack_28 = 0;
        piStack_28[1] = 0;
        piStack_28[2] = 0;
        puVar4 = (undefined4 *)FUN_0042d2d0();
        piStack_28[3] = *puVar4;
        *(undefined2 *)(piStack_28 + 4) = *(undefined2 *)(puVar4 + 1);
      }
      iVar7 = *(int *)(param_1 + 0x356ca);
      puVar4 = operator_new(0xe);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[1] = iVar7;
        *puVar4 = piStack_28;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x356ce);
      *(undefined4 **)(param_1 + 0x356ca) = puVar4;
      *(int *)(param_1 + 0x356ce) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(param_1 + 0x356c6) = puVar4;
        FUN_00789820(param_2);
      }
      else {
        *(undefined4 **)(iVar7 + 8) = puVar4;
        FUN_00789820(param_2);
      }
    }
    else if (iVar7 == 0x3e2) {
      FUN_005359b0(9,*(undefined4 *)(param_1 + 0x1c570));
    }
    else {
      if (iVar7 != 0x3e3) goto switchD_007814c6_caseD_158;
      FUN_005359b0(10,*(undefined4 *)(param_1 + 0x1c56c));
    }
    goto LAB_00780fe1;
  }
  if (iVar7 == 0x581) {
    if (*(int *)(param_2 + 0x40c) == 3) {
      do {
        while (iVar7 = FUN_00535490(), iVar7 == 1) {
          if (*(int *)(param_2 + 4) != 0x1f7) {
            FUN_005349b0(s_Invalid_entry_in_Queued_Events_l_008795cc);
            goto LAB_00780fe1;
          }
          if (*(int *)(param_2 + 0x40c) == 3) {
            puVar4 = operator_new(0xe);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *(undefined2 *)(puVar4 + 3) = 0;
              *(undefined1 *)((int)puVar4 + 10) = 0;
              *(undefined1 *)((int)puVar4 + 9) = 0;
              *(undefined1 *)(puVar4 + 2) = 0;
              *puVar4 = 0;
              puVar4[1] = 0xffffffff;
              puVar5 = (undefined4 *)FUN_0042d2d0();
              puVar4[2] = *puVar5;
              *(undefined2 *)(puVar4 + 3) = *(undefined2 *)(puVar5 + 1);
            }
            iVar7 = *(int *)(param_1 + 0x356dc);
            puVar5 = operator_new(0xe);
            if (puVar5 == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              *puVar5 = puVar4;
              puVar5[1] = iVar7;
              puVar5[2] = 0;
              *(undefined1 *)(puVar5 + 3) = 0;
            }
            iVar1 = *(int *)(param_1 + 0x356e0);
            *(undefined4 **)(param_1 + 0x356dc) = puVar5;
            *(int *)(param_1 + 0x356e0) = iVar1 + 1;
            if (iVar1 == 0) {
              *(undefined4 **)(param_1 + 0x356d8) = puVar5;
            }
            else {
              *(undefined4 **)(iVar7 + 8) = puVar5;
            }
            FUN_0078d420(param_2);
          }
          else {
            FUN_005349b0(s_No_Left_Curly_00857a20);
          }
        }
        piVar6 = (int *)FUN_00534391();
      } while (*piVar6 != 4);
      FUN_005343dc();
      goto LAB_00780fe1;
    }
  }
  else {
switchD_007814c6_caseD_158:
    iVar7 = FUN_005058b0((int *)(param_2 + 4));
    if (iVar7 == 0x25) {
      FUN_005349b0(s_Globals___Unexpected_field_0083f1f0);
      ExceptionList = pvStack_c;
      return 0xfffffffe;
    }
    if (*(int *)(param_2 + 0x40c) == 3) {
      FUN_00789770(param_2,iVar7);
      goto LAB_00780fe1;
    }
  }
  FUN_005349b0(s_no_left_curly_0083f20c);
  goto LAB_00780fe1;
}


