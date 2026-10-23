// FUN_00619ff0 @ 619ff0 size=886

void __thiscall FUN_00619ff0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int *piStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d0bdb;
  pvStack_c = ExceptionList;
  iVar10 = 0xc;
  ExceptionList = &pvStack_c;
  do {
    FUN_00433930();
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  FUN_00433950();
  FUN_00436060();
  iVar10 = *(int *)(param_1 + 0xd0);
  piVar8 = *(int **)(iVar10 + 4);
  while (piVar8 != (int *)0x0) {
    puVar7 = (undefined4 *)*piVar8;
    piVar8 = (int *)piVar8[2];
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)();
    }
    FUN_00796cd8();
  }
  *(undefined4 *)(iVar10 + 4) = 0;
  *(undefined4 *)(iVar10 + 8) = 0;
  *(undefined4 *)(iVar10 + 0xc) = 0;
  piStack_18 = &DAT_0089cad8;
  do {
    iVar10 = *piStack_18;
    if ((((iVar10 != 0) &&
         ((iVar3 = *(int *)(iVar10 + 0x3350), iVar3 == DAT_00d615c6 || (param_2 != 2)))) &&
        (((iVar3 == DAT_00d615c2 || (param_2 != 1)) &&
         ((((iVar3 == DAT_00d615ca || (param_2 != 3)) && (cVar2 = FUN_004a0780(), cVar2 != '\0')) &&
          ((((iVar3 = FUN_004a0750(), *(int *)(iVar3 + 0x284) == 1 ||
             (iVar3 = FUN_004a0750(), *(int *)(iVar3 + 0x284) == 2)) || (param_2 != 5)) &&
           ((iVar3 = FUN_004a0750(), *(int *)(iVar3 + 0x284) == 3 || (param_2 != 7)))))))))) &&
       (((iVar3 = FUN_004a0750(), *(int *)(iVar3 + 0x284) == 4 ||
         ((iVar3 = FUN_004a0750(), *(int *)(iVar3 + 0x284) == 5 || (param_2 != 6)))) &&
        (((iVar3 = FUN_004a0750(), *(int *)(iVar3 + 0x284) == 6 || (param_2 != 4)) && (param_2 != 8)
         ))))) {
      if (param_2 == 9) {
        cVar2 = FUN_0044b300();
        if (cVar2 == '\0') {
          cVar2 = FUN_0044a690();
joined_r0x0061a1c6:
          if (cVar2 == '\0') goto LAB_0061a2e1;
        }
LAB_0061a21d:
        pvVar4 = operator_new(0x3a);
        uVar9 = 0;
        uStack_4 = 0;
        if (pvVar4 != (void *)0x0) {
          uVar9 = FUN_00616390();
        }
        uStack_4 = 0xffffffff;
        iVar3 = *(int *)(*(int *)(param_1 + 0xd0) + 4);
        if (iVar3 != 0) {
          do {
            FUN_004af740();
            uVar5 = (**(code **)(*(int *)(iVar10 + 0xe) + 0xc))();
            iVar6 = FUN_007a8730(uVar5);
            if (iVar6 < 0) {
              FUN_00592460(uVar9);
              goto LAB_0061a2e1;
            }
            iVar3 = *(int *)(iVar3 + 8);
          } while (iVar3 != 0);
        }
        iVar10 = *(int *)(param_1 + 0xd0);
        iVar3 = *(int *)(iVar10 + 8);
        puVar7 = operator_new(0xe);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = uVar9;
          puVar7[1] = iVar3;
          puVar7[2] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
        iVar6 = *(int *)(iVar10 + 0xc);
        *(undefined4 **)(iVar10 + 8) = puVar7;
        *(int *)(iVar10 + 0xc) = iVar6 + 1;
        if (iVar6 == 0) {
          *(undefined4 **)(iVar10 + 4) = puVar7;
        }
        else {
          *(undefined4 **)(iVar3 + 8) = puVar7;
        }
      }
      else {
        if (param_2 == 10) {
          cVar2 = FUN_0044b280();
          goto joined_r0x0061a1c6;
        }
        if ((param_2 != 0xb) ||
           (((cVar2 = FUN_0044b280(), cVar2 == '\0' && (cVar2 = FUN_0044a690(), cVar2 == '\0')) &&
            (cVar2 = FUN_0044b300(), cVar2 == '\0')))) goto LAB_0061a21d;
      }
    }
LAB_0061a2e1:
    piStack_18 = piStack_18 + 1;
    if (0x89d037 < (int)piStack_18) {
      FUN_004353e0();
      FUN_00435fd0();
      FUN_00436130();
      piVar8 = (int *)(*(int **)(param_1 + 0xd0))[1];
      if (piVar8 != (int *)0x0) {
        do {
          piVar1 = piVar8 + 2;
          if (*(int *)(*piVar8 + 0x2e) == *(int *)(param_1 + 200)) {
            (**(code **)(**(int **)(param_1 + 0xd0) + 0x38))();
            ExceptionList = pvStack_c;
            return;
          }
          piVar8 = (int *)*piVar1;
        } while ((int *)*piVar1 != (int *)0x0);
      }
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}


