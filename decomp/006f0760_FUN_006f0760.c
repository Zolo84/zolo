// FUN_006f0760 @ 6f0760 size=1377

int __thiscall FUN_006f0760(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int iStack_11c;
  undefined1 auStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007da80a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar5 = FUN_006ee6e0(param_2);
  iVar10 = *(int *)(DAT_00bd1500 + 0xb70);
  if ((*(int *)(param_1 + 0x3a0) != iVar10) ||
     (iVar6 = (**(code **)(**(int **)(param_1 + 0x39c) + 4))(), iVar10 != iVar6)) {
    *(int *)(param_1 + 0x3a0) = iVar10;
    FUN_00436030();
    iVar10 = *(int *)(param_1 + 0x39c);
    piVar12 = *(int **)(iVar10 + 4);
    while (piVar12 != (int *)0x0) {
      piVar1 = (int *)piVar12[2];
      if ((undefined4 *)*piVar12 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar12)(1);
      }
      FUN_00796cd8(piVar12);
      piVar12 = piVar1;
    }
    *(undefined4 *)(iVar10 + 4) = 0;
    *(undefined4 *)(iVar10 + 8) = 0;
    *(undefined4 *)(iVar10 + 0xc) = 0;
    (**(code **)(**(int **)(param_1 + 0x39c) + 0x10))();
    iVar10 = DAT_00bd1500;
    uVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iStack_11c = 0;
    if (0 < *(int *)(iVar10 + 0xb70)) {
      piVar12 = (int *)(iVar10 + 0x3c0);
      do {
        if (*piVar12 != 0) {
          FUN_00429d20(*piVar12,auStack_10c);
          pvVar8 = operator_new(0x40);
          uVar11 = 0;
          uStack_4 = 0;
          if (pvVar8 != (void *)0x0) {
            uVar11 = FUN_006eccb0(uVar7,auStack_10c,iStack_11c);
          }
          iVar6 = *(int *)(param_1 + 0x39c);
          uStack_4 = 0xffffffff;
          iVar2 = *(int *)(iVar6 + 8);
          puVar9 = operator_new(0xe);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            *puVar9 = uVar11;
            puVar9[1] = iVar2;
            puVar9[2] = 0;
            *(undefined1 *)(puVar9 + 3) = 0;
          }
          iVar3 = *(int *)(iVar6 + 0xc);
          *(undefined4 **)(iVar6 + 8) = puVar9;
          *(int *)(iVar6 + 0xc) = iVar3 + 1;
          if (iVar3 == 0) {
            *(undefined4 **)(iVar6 + 4) = puVar9;
          }
          else {
            *(undefined4 **)(iVar2 + 8) = puVar9;
          }
        }
        iStack_11c = iStack_11c + 1;
        piVar12 = (int *)((int)piVar12 + 0x3e);
      } while (iStack_11c < *(int *)(iVar10 + 0xb70));
    }
    FUN_004353e0();
  }
  if ((iVar5 == 0) && (iVar5 = (*(code *)**(undefined4 **)(param_1 + 0x178))(param_2), iVar5 == 0))
  {
    piVar12 = *(int **)(param_1 + 0x42);
    if (*(char *)((int)piVar12 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar12 + 0x60))();
    *(undefined1 *)((int)piVar12 + 0x86) = 1;
    iVar5 = FUN_006f1320(param_2);
    if ((iVar5 == 0) &&
       (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x3a) + 0x12) + 4))(param_2), iVar5 == 0))
    {
      if ((*(undefined4 **)(param_1 + 0x174) == (undefined4 *)0x0) ||
         ((*(char *)(param_1 + 0x16f) == '\0' ||
          (iVar5 = (**(code **)**(undefined4 **)(param_1 + 0x174))(param_2), iVar5 == 0)))) {
        if (*(int **)(param_1 + 0x162) != (int *)0x0) {
          iVar10 = (**(code **)(**(int **)(param_1 + 0x162) + 4))(param_2);
          if (iVar10 != 0) {
            iVar5 = *(int *)(*(int *)(param_1 + 0x162) + 0x90);
            if (iVar5 != -1) {
              if (*(int *)(param_1 + 0x16a) == iVar5) {
                ExceptionList = pvStack_c;
                return iVar10;
              }
              iVar5 = *(int *)(param_1 + 0x170);
              if (iVar5 != 0) {
                FUN_006fa1a0();
                FUN_00796cd8(iVar5);
              }
              *(undefined4 *)(param_1 + 0x16a) = *(undefined4 *)(*(int *)(param_1 + 0x162) + 0x90);
              pvVar8 = operator_new(0x2e);
              uStack_4 = 1;
              if (pvVar8 == (void *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_006f9e10(*(undefined4 *)(*(int *)(param_1 + 0x162) + 0xa4),
                                     *(undefined4 *)(param_1 + 0x16a),
                                     *(undefined4 *)(param_1 + 0x4e));
              }
              *(undefined4 *)(param_1 + 0x170) = uVar7;
              uStack_4 = 0xffffffff;
              iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x162) + 0xa4) + 4 +
                              *(int *)(param_1 + 0x16a) * 4);
              if (iVar5 != *(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e)) {
                *(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) = iVar5;
                FUN_0057d8e0();
              }
              *(undefined1 *)(*(int *)(param_1 + 0x170) + 0x24) = 1;
              ExceptionList = pvStack_c;
              return iVar10;
            }
            piVar12 = *(int **)(param_1 + 0x42);
            if (*(char *)((int)piVar12 + 0xa2) != '\0') {
              FUN_00433930();
            }
            (**(code **)(*piVar12 + 0x60))();
            *(undefined1 *)((int)piVar12 + 0x86) = 1;
            iVar5 = *(int *)(param_1 + 0x170);
            *(undefined4 *)(param_1 + 0x16a) = 0xffffffff;
            if (iVar5 != 0) {
              FUN_006fa1a0();
              FUN_00796cd8(iVar5);
            }
            *(undefined4 *)(param_1 + 0x170) = 0;
            *(undefined1 *)(param_1 + 0x16e) = 0;
            if (*(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) == -1) {
              ExceptionList = pvStack_c;
              return iVar10;
            }
            *(undefined4 *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) = 0xffffffff
            ;
            FUN_0057d8e0();
            ExceptionList = pvStack_c;
            return iVar10;
          }
          if (((*(undefined4 **)(param_1 + 0x170) != (undefined4 *)0x0) &&
              (*(char *)(param_1 + 0x16f) == '\0')) &&
             (iVar10 = (**(code **)**(undefined4 **)(param_1 + 0x170))(param_2), iVar10 != 0)) {
            ExceptionList = pvStack_c;
            return iVar10;
          }
        }
        iVar5 = FUN_006f1120(param_2);
        if (iVar5 == 0) {
          iVar10 = (**(code **)(**(int **)(param_1 + 0x1a) + 4))(param_2);
          if (iVar10 == 0) {
            bVar4 = true;
            iVar10 = *(int *)(DAT_00bd1500 + 0xb70);
            if (0 < iVar10) {
              piVar12 = (int *)(DAT_00bd1500 + 0x3cc);
              do {
                if (*piVar12 == -1) {
                  bVar4 = false;
                }
                piVar12 = (int *)((int)piVar12 + 0x3e);
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
              if (!bVar4) {
                piVar12 = *(int **)(param_1 + 0x42);
                if (*(char *)((int)piVar12 + 0xa2) != '\0') {
                  FUN_00433930();
                }
                (**(code **)(*piVar12 + 0x60))();
                *(undefined1 *)((int)piVar12 + 0x86) = 1;
              }
            }
            iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x39c) + 0x12) + 4))(param_2);
          }
          else {
            if (*(char *)(*(int *)(param_1 + 0x1a) + 0x3b) != '\0') {
              FUN_007a630a(&DAT_00d4182c,s_<_s>____s_0086f750,*DAT_00d12b40 + 0x301,
                           *(undefined4 *)(*(int *)(param_1 + 0x1a) + 0x18));
              pvVar8 = operator_new(0xc);
              uStack_4 = 2;
              if (pvVar8 == (void *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_00566410(&DAT_00d4182c,*(undefined4 *)(DAT_00bd1500 + 900),0,0);
              }
              uStack_4 = 0xffffffff;
              FUN_004388d0();
              *(undefined1 *)(*(int *)(param_1 + 0x1a) + 0x3b) = 0;
              FUN_00565ca0(uVar7);
            }
            iVar5 = 3;
          }
        }
      }
      else if (iVar5 == 1) {
        *(undefined1 *)(param_1 + 0x16f) = 0;
        FUN_006fb5f0();
        FUN_00433930();
        iVar5 = 3;
      }
    }
  }
  ExceptionList = pvStack_c;
  return iVar5;
}


