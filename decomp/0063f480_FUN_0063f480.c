// FUN_0063f480 @ 63f480 size=2801

int __fastcall FUN_0063f480(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int local_1c;
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d217d;
  pvStack_c = ExceptionList;
  local_1c = 0;
  bVar2 = false;
  ExceptionList = &pvStack_c;
  if (DAT_0087b632 != '\0') {
    ExceptionList = &pvStack_c;
    if ((*(int *)(param_1 + 0x10a) != 0) &&
       (ExceptionList = &pvStack_c, iVar4 = FUN_00642260(), iVar4 != 0)) {
      FUN_00642260();
      cVar3 = FUN_0075a420();
      if ((cVar3 != '\0') &&
         ((local_1c = (**(code **)(**(int **)(param_1 + 0x116) + 4))(), local_1c != 0 &&
          (*(char *)(*(int *)(param_1 + 0x116) + 0x96) != '\0')))) {
        pvVar5 = operator_new(100);
        uStack_4 = 0;
        if (pvVar5 != (void *)0x0) {
          FUN_00642260();
          FUN_00638e80();
        }
        uStack_4 = 0xffffffff;
      }
    }
    if (DAT_0087b632 != '\0') {
      if (*(char *)(param_1 + 0x100) != '\0') {
        if (local_1c == 0) {
          local_1c = (**(code **)(*(int *)(*(int *)(param_1 + 0x106) + 0x12) + 4))();
        }
        if (local_1c == 1) {
          *(undefined1 *)(param_1 + 0x100) = 0;
          local_1c = 3;
        }
      }
      iVar10 = DAT_00877554;
      bVar1 = false;
      iVar4 = *(int *)(*(int *)(param_1 + 0xf4) + 4);
      iStack_18 = FUN_004a30c0();
      if (iVar10 <= iStack_18) {
        iStack_18 = iVar10;
      }
      iVar10 = 0;
      if (0 < iStack_18) {
        do {
          if (iVar4 == 0) break;
          FUN_0044ae20();
          iVar6 = FUN_00428ee0();
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = iVar6 + -8;
          }
          iVar4 = *(int *)(iVar4 + 8);
          iVar7 = FUN_00428ee0();
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar7 + -8;
          }
          if (iVar7 != iVar6) {
            bVar1 = true;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iStack_18);
      }
      iVar4 = (**(code **)(**(int **)(param_1 + 0xf4) + 4))();
      if ((iVar4 != iStack_18) || (bVar1)) {
        FUN_00640610();
      }
    }
  }
  if (*(int **)(param_1 + 0x10e) == (int *)0x0) {
LAB_0063f7fc:
    if (DAT_0087b632 != '\0') {
      if (*(int *)(*(int *)(param_1 + 0xf4) + 0x22) == 0) {
        if (*(undefined4 **)(param_1 + 0x112) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x112))();
        }
      }
      else {
        iVar4 = FUN_00428ee0();
        if (((iVar4 != 0) && (iVar4 != 8)) && (*(int *)(iVar4 + 0xd0) != 0)) {
          if (*(int *)(param_1 + 0x112) != 0) {
            iVar10 = FUN_00428ee0();
            if (iVar10 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = iVar10 + -8;
            }
            if ((*(int *)(*(int *)(iVar4 + 0xd0) + 0xe) == *(int *)(iVar10 + 0xe)) &&
               (*(short *)(*(int *)(iVar4 + 0xd0) + 0xc) == *(short *)(iVar10 + 0xc)))
            goto LAB_0063f976;
          }
          if (*(undefined4 **)(param_1 + 0x112) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 0x112))();
          }
          *(undefined4 *)(param_1 + 0x112) = 0;
          pvVar5 = operator_new(0xd0);
          uStack_4 = 1;
          if (pvVar5 == (void *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_0063b310();
          }
          uStack_4 = 0xffffffff;
          *(undefined4 *)(param_1 + 0x112) = uVar8;
          if (*(undefined4 **)(param_1 + 0x10a) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 0x10a))();
          }
          *(undefined4 *)(param_1 + 0x10a) = 0;
          if (*(undefined4 **)(param_1 + 0x10e) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 0x10e))();
          }
          *(undefined4 *)(param_1 + 0x10e) = 0;
          if (*(undefined4 **)(param_1 + 0xc4) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(param_1 + 0xc4))();
          }
          *(undefined4 *)(param_1 + 0xc4) = 0;
          if (DAT_00dc1781 != '\0') {
            if (*(undefined4 **)(param_1 + 0x11e) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)(param_1 + 0x11e))();
            }
            *(undefined4 *)(param_1 + 0x11e) = 0;
            if (*(undefined4 **)(param_1 + 0x126) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)(param_1 + 0x126))();
            }
            *(undefined4 *)(param_1 + 0x126) = 0;
          }
          goto LAB_0063f976;
        }
        if (*(undefined4 **)(param_1 + 0x112) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x112))();
        }
      }
      *(undefined4 *)(param_1 + 0x112) = 0;
    }
  }
  else {
    if (local_1c == 0) {
      local_1c = (**(code **)(**(int **)(param_1 + 0x10e) + 4))();
    }
    if (DAT_0087b632 != '\0') {
      if (local_1c != 0) goto LAB_0063f7fc;
      (**(code **)(**(int **)(param_1 + 0xf8) + 0x50))();
      FUN_00428460();
      iVar4 = FUN_0075a2b0();
      if (iVar4 != 0) {
        piVar11 = *(int **)(param_1 + 0xf8);
        if (*(char *)((int)piVar11 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar11 + 0x60))();
        *(undefined1 *)((int)piVar11 + 0x86) = 1;
      }
      if (*(int *)(*(int *)(param_1 + 0xf4) + 0x22) == 0) {
        piVar11 = *(int **)(param_1 + 0xf8);
        if (*(char *)((int)piVar11 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar11 + 0x60))();
LAB_0063f73f:
        *(undefined1 *)((int)piVar11 + 0x86) = 1;
      }
      else {
        iVar4 = FUN_00428ee0();
        if ((iVar4 == 0) || (iVar4 == 8)) {
          piVar11 = *(int **)(param_1 + 0xf8);
          if (*(char *)((int)piVar11 + 0xa2) != '\0') {
            FUN_00433930();
          }
          (**(code **)(*piVar11 + 0x60))();
          goto LAB_0063f73f;
        }
      }
      if (*(char *)(param_1 + 0x100) != '\0') {
        piVar11 = *(int **)(param_1 + 0xf8);
        if (*(char *)((int)piVar11 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar11 + 0x60))();
        *(undefined1 *)((int)piVar11 + 0x86) = 1;
      }
      local_1c = (**(code **)(**(int **)(param_1 + 0xf8) + 4))();
      if (*(char *)(*(int *)(param_1 + 0xf8) + 0x96) != '\0') {
        bVar2 = true;
        FUN_00639f70();
        FUN_00447250();
        FUN_0063b260();
        uVar8 = FUN_0044df10();
        FUN_00446d10(uVar8);
        FUN_0045f460();
      }
      goto LAB_0063f7fc;
    }
  }
LAB_0063f976:
  if (local_1c == 0) {
    local_1c = (**(code **)(**(int **)(param_1 + 0xc0) + 4))();
  }
  if (*(char *)(*(int *)(param_1 + 0xc0) + 0x96) == '\0') {
LAB_0063fa84:
    if (DAT_00dc1781 != '\0') {
      if (local_1c == 0) {
        local_1c = (**(code **)(**(int **)(param_1 + 0x11a) + 4))();
      }
      if (*(char *)(*(int *)(param_1 + 0x11a) + 0x96) != '\0') {
        if (*(int *)(param_1 + 0x112) != 0) {
          FUN_00436030();
        }
        if (*(undefined4 **)(param_1 + 0x10a) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x10a))();
        }
        *(undefined4 *)(param_1 + 0x10a) = 0;
        if (*(undefined4 **)(param_1 + 0x10e) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x10e))();
        }
        *(undefined4 *)(param_1 + 0x10e) = 0;
        if (*(undefined4 **)(param_1 + 0x112) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x112))();
        }
        *(undefined4 *)(param_1 + 0x112) = 0;
        if (*(undefined4 **)(param_1 + 0xc4) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0xc4))();
        }
        *(undefined4 *)(param_1 + 0xc4) = 0;
        if (*(undefined4 **)(param_1 + 0x11e) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x11e))();
        }
        puVar9 = operator_new(0x7e);
        uStack_4 = 3;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          FUN_00415020();
          *puVar9 = &PTR_FUN_007efbb8;
          puVar9[2] = &PTR_LAB_007efbb4;
        }
        uStack_4 = 0xffffffff;
        *(undefined4 **)(param_1 + 0x11e) = puVar9;
        if (*(undefined4 **)(param_1 + 0x126) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x126))();
        }
        *(undefined4 *)(param_1 + 0x126) = 0;
      }
      if (local_1c == 0) {
        local_1c = (**(code **)(**(int **)(param_1 + 0x122) + 4))();
      }
      if (*(char *)(*(int *)(param_1 + 0x122) + 0x96) != '\0') {
        if (*(int *)(param_1 + 0x112) != 0) {
          FUN_00436030();
        }
        if (*(undefined4 **)(param_1 + 0x10a) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x10a))();
        }
        *(undefined4 *)(param_1 + 0x10a) = 0;
        if (*(undefined4 **)(param_1 + 0x10e) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x10e))();
        }
        *(undefined4 *)(param_1 + 0x10e) = 0;
        if (*(undefined4 **)(param_1 + 0x112) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x112))();
        }
        *(undefined4 *)(param_1 + 0x112) = 0;
        if (*(undefined4 **)(param_1 + 0xc4) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0xc4))();
        }
        *(undefined4 *)(param_1 + 0xc4) = 0;
        if (*(undefined4 **)(param_1 + 0x11e) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x11e))();
        }
        *(undefined4 *)(param_1 + 0x11e) = 0;
        if (*(undefined4 **)(param_1 + 0x126) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x126))();
        }
        puVar9 = operator_new(0x7e);
        uStack_4 = 4;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          FUN_00415020();
          *puVar9 = &PTR_FUN_007efc04;
          puVar9[2] = &PTR_LAB_007efc00;
        }
        uStack_4 = 0xffffffff;
        *(undefined4 **)(param_1 + 0x126) = puVar9;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x112) != 0) {
      FUN_00436030();
    }
    if (*(undefined4 **)(param_1 + 0x10a) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x10a))();
    }
    *(undefined4 *)(param_1 + 0x10a) = 0;
    if (*(undefined4 **)(param_1 + 0x10e) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x10e))();
    }
    *(undefined4 *)(param_1 + 0x10e) = 0;
    if (*(undefined4 **)(param_1 + 0x112) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x112))();
    }
    *(undefined4 *)(param_1 + 0x112) = 0;
    if (*(undefined4 **)(param_1 + 0xc4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xc4))();
    }
    puVar9 = operator_new(0x7e);
    uStack_4 = 2;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      FUN_00415020();
      *puVar9 = &PTR_FUN_007efc50;
      puVar9[2] = &PTR_LAB_007efc4c;
    }
    *(undefined4 **)(param_1 + 0xc4) = puVar9;
    uStack_4 = 0xffffffff;
    if (DAT_00dc1781 != '\0') {
      if (*(undefined4 **)(param_1 + 0x11e) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x11e))();
      }
      *(undefined4 *)(param_1 + 0x11e) = 0;
      if (*(undefined4 **)(param_1 + 0x126) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x126))();
      }
      *(undefined4 *)(param_1 + 0x126) = 0;
      goto LAB_0063fa84;
    }
  }
  if ((DAT_0087b632 != '\0') && (local_1c == 0)) {
    local_1c = (**(code **)(*(int *)(*(int *)(param_1 + 0xf4) + 0x12) + 4))();
  }
  iVar4 = 0;
  piVar11 = (int *)(param_1 + 0xd0);
  do {
    if (local_1c == 0) {
      local_1c = (**(code **)(*(int *)*piVar11 + 4))();
    }
    if (*(char *)(*piVar11 + 0x96) != '\0') {
      *(int *)(param_1 + 0xbc) = iVar4;
      if (*(undefined4 **)(param_1 + 0x10a) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x10a))();
      }
      pvVar5 = operator_new(0xae);
      uStack_4 = 5;
      if (pvVar5 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_00641470();
      }
      *(undefined4 *)(param_1 + 0x10a) = uVar8;
      uStack_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x112) != 0) {
        FUN_00436030();
      }
      if (*(undefined4 **)(param_1 + 0x112) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x112))();
      }
      *(undefined4 *)(param_1 + 0x112) = 0;
      if (*(undefined4 **)(param_1 + 0xc4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0xc4))();
      }
      *(undefined4 *)(param_1 + 0xc4) = 0;
      if (DAT_00dc1781 != '\0') {
        if (*(undefined4 **)(param_1 + 0x11e) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x11e))();
        }
        *(undefined4 *)(param_1 + 0x11e) = 0;
        if (*(undefined4 **)(param_1 + 0x126) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x126))();
        }
        *(undefined4 *)(param_1 + 0x126) = 0;
      }
    }
    iVar4 = iVar4 + 1;
    piVar11 = piVar11 + 1;
  } while (iVar4 < 9);
  if (*(int **)(param_1 + 0x10a) != (int *)0x0) {
    if (local_1c == 0) {
      local_1c = (**(code **)(**(int **)(param_1 + 0x10a) + 4))();
    }
    iVar4 = FUN_00642260();
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x10e) != 0) {
        iVar4 = FUN_00428460();
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar4 + -8;
        }
        iVar10 = FUN_00642260();
        if (iVar4 == iVar10) goto LAB_0063fe84;
      }
      if (*(undefined4 **)(param_1 + 0x10e) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x10e))();
      }
      pvVar5 = operator_new(0xa8);
      uStack_4 = 6;
      if (pvVar5 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        FUN_00642260();
        uVar8 = FUN_0063a980();
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x10e) = uVar8;
    }
  }
LAB_0063fe84:
  if ((DAT_0087b632 != '\0') && (*(int **)(param_1 + 0x112) != (int *)0x0)) {
    if (local_1c == 0) {
      local_1c = (**(code **)(**(int **)(param_1 + 0x112) + 4))();
    }
    if (local_1c == 1) {
      if (*(undefined4 **)(param_1 + 0x112) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x112))();
      }
      *(undefined4 *)(param_1 + 0x112) = 0;
    }
    local_1c = (**(code **)(**(int **)(param_1 + 0xfc) + 4))();
    if ((*(char *)(*(int *)(param_1 + 0xfc) + 0x96) != '\0') && (!bVar2)) {
      FUN_0063bbf0();
      FUN_00447250();
      FUN_0045f360();
      if (*(undefined4 **)(param_1 + 0x112) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x112))();
      }
      *(undefined4 *)(param_1 + 0x112) = 0;
    }
  }
  if (local_1c == 0) {
    local_1c = FUN_0061eab0();
  }
  ExceptionList = pvStack_c;
  return local_1c;
}


