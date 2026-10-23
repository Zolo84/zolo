// FUN_00535cf0 @ 535cf0 size=1487

undefined4 __fastcall FUN_00535cf0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *piVar8;
  int *unaff_EBX;
  int *piVar9;
  undefined *puVar10;
  int *piStack_428;
  int *local_424;
  undefined4 local_420;
  int *local_418;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [508];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c2453;
  pvStack_c = ExceptionList;
  local_420 = *(undefined4 *)(*param_1 + 8);
  ExceptionList = &pvStack_c;
  local_418 = param_1;
  FUN_007a6628(local_420,s_globaldata_____00850e74);
  piVar3 = operator_new(0x14);
  local_4 = 0;
  local_424 = piVar3;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar4 = (*(code *)**(undefined4 **)(DAT_00d77b70 + 0x24))();
    piVar3[1] = 0;
    piVar3[2] = 0;
    *piVar3 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 1;
    piStack_428 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,2);
    if ((piStack_428 == (int *)0x0) || (iVar5 = FUN_0053e740(499), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar3[3] = iVar5;
    if (iVar4 == 0) {
      *piVar3 = (int)&PTR_FUN_007e3878;
      piVar3[4] = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      piVar3[4] = iVar4;
      *piVar3 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x70))(param_1,0);
  uVar6 = FUN_005341fe(0x528);
  FUN_00533df2(0x528,uVar6);
  iVar4 = 1;
  do {
    if (iVar4 == 0) break;
    iVar5 = FUN_00537750(auStack_218);
    iVar4 = iVar4 + -1;
  } while (iVar5 == 0);
  if (piVar3 != (int *)0x0) {
    (**(code **)*piVar3)(1);
  }
  piVar3 = piStack_428;
  FUN_007a6628(piStack_428,&DAT_00850e70);
  FUN_007a6628(piVar3,&DAT_0083b84c);
  FUN_007a6628(piVar3,s_country_____00850e60);
  FUN_007a6628(piVar3,s_tag____s_00850e54,DAT_00d0ca90 + 0x1b);
  FUN_007a6628(piVar3,s_ai_____00850e48);
  piVar3 = operator_new(0x14);
  pvStack_c = (void *)0x3;
  if (piVar3 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    iVar4 = (*(code *)**(undefined4 **)(*(int *)(DAT_00d0ca90 + 0x120) + 0x70))();
    piVar3[1] = 0;
    piVar3[2] = 0;
    *piVar3 = (int)&PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 4;
    unaff_EBX = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
    if ((unaff_EBX == (int *)0x0) || (iVar5 = FUN_0053e740(499), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar3[3] = iVar5;
    piVar8 = piVar3;
    if (iVar4 == 0) {
      *piVar3 = (int)&PTR_FUN_007e3878;
      piVar3[4] = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      piVar3[4] = iVar4;
      *piVar3 = (int)&PTR_FUN_007e3878;
    }
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar8 + 0x70))(param_1,0);
  uVar6 = FUN_005341fe(0x528);
  FUN_00533df2(0x528,uVar6);
  iVar4 = 1;
  do {
    if (iVar4 == 0) break;
    iVar5 = FUN_00537750(auStack_220);
    iVar4 = iVar4 + -1;
  } while (iVar5 == 0);
  if (piVar8 != (int *)0x0) {
    (**(code **)*piVar8)(1);
  }
  FUN_007a6628(piVar3,&DAT_00850e70);
  piVar8 = *(int **)(DAT_00d0ca90 + 0x4508);
  do {
    do {
      if (piVar8 == (int *)0x0) {
        FUN_007a6628(piVar3,&DAT_00850e70);
        ExceptionList = pvStack_1c;
        return 0;
      }
      piVar1 = (int *)*piVar8;
      piVar8 = (int *)piVar8[2];
      piVar9 = (int *)0x0;
      cVar2 = (**(code **)(*piVar1 + 0x30))();
      if ((cVar2 != '\0') && (*(int *)((int)piVar1 + 0x2a6) == 0)) {
        piVar9 = operator_new(0x14);
        uStack_14 = 6;
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          iVar4 = (*(code *)**(undefined4 **)((int)piVar1 + 0x1e))();
          piVar9[1] = 0;
          piVar9[2] = 0;
          *piVar9 = (int)&PTR_LAB_007e38f8;
          uStack_14._0_1_ = 7;
          unaff_EBX = operator_new(0x14);
          uStack_14 = CONCAT31(uStack_14._1_3_,8);
          if ((unaff_EBX == (int *)0x0) || (iVar5 = FUN_0053e740(0xf0), iVar5 == 0)) {
            iVar5 = 0;
          }
          else {
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          }
          piVar9[3] = iVar5;
          param_1 = piStack_428;
          if (iVar4 == 0) {
            *piVar9 = (int)&PTR_FUN_007e3878;
            piVar9[4] = 0;
          }
          else {
            *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
            piVar9[4] = iVar4;
            *piVar9 = (int)&PTR_FUN_007e3878;
          }
        }
        uStack_14 = 0xffffffff;
      }
      cVar2 = (**(code **)(*piVar1 + 0x2c))();
      if (cVar2 != '\0') {
        unaff_EBX = operator_new(0x14);
        uStack_14 = 9;
        if (unaff_EBX == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          iVar4 = (*(code *)**(undefined4 **)((int)piVar1 + 0x1e))();
          unaff_EBX[1] = 0;
          unaff_EBX[2] = 0;
          *unaff_EBX = (int)&PTR_LAB_007e38f8;
          uStack_14._0_1_ = 10;
          pvVar7 = operator_new(0x14);
          uStack_14 = CONCAT31(uStack_14._1_3_,0xb);
          if ((pvVar7 == (void *)0x0) || (iVar5 = FUN_0053e740(0xef), iVar5 == 0)) {
            iVar5 = 0;
          }
          else {
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          }
          unaff_EBX[3] = iVar5;
          param_1 = piStack_428;
          piVar9 = unaff_EBX;
          if (iVar4 == 0) {
            *unaff_EBX = (int)&PTR_FUN_007e3878;
            unaff_EBX[4] = 0;
          }
          else {
            *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
            unaff_EBX[4] = iVar4;
            *unaff_EBX = (int)&PTR_FUN_007e3878;
          }
        }
        uStack_14 = 0xffffffff;
      }
      cVar2 = (**(code **)(*piVar1 + 0x28))();
      if (((cVar2 != '\0') && (*(int *)((int)piVar1 + 0x2ae) == 0)) &&
         (*(int *)((int)piVar1 + 0x2b2) == 0)) {
        unaff_EBX = operator_new(0x14);
        uStack_14 = 0xc;
        if (unaff_EBX == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          iVar4 = (*(code *)**(undefined4 **)((int)piVar1 + 0x1e))();
          unaff_EBX[1] = 0;
          unaff_EBX[2] = 0;
          *unaff_EBX = (int)&PTR_LAB_007e38f8;
          uStack_14._0_1_ = 0xd;
          pvVar7 = operator_new(0x14);
          uStack_14 = CONCAT31(uStack_14._1_3_,0xe);
          if ((pvVar7 == (void *)0x0) || (iVar5 = FUN_0053e740(0xee), iVar5 == 0)) {
            iVar5 = 0;
          }
          else {
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          }
          unaff_EBX[3] = iVar5;
          piVar9 = unaff_EBX;
          if (iVar4 == 0) {
            *unaff_EBX = (int)&PTR_FUN_007e3878;
            unaff_EBX[4] = 0;
          }
          else {
            *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
            unaff_EBX[4] = iVar4;
            *unaff_EBX = (int)&PTR_FUN_007e3878;
          }
        }
        uStack_14 = 0xffffffff;
      }
    } while (piVar9 == (int *)0x0);
    (**(code **)(*piVar9 + 0x70))(param_1,0);
    uVar6 = FUN_005341fe(0x528);
    FUN_00533df2(0x528,uVar6);
    iVar4 = 1;
    do {
      if ((iVar4 == 0) || (*(int *)(*param_1 + 8) == 0)) break;
      if ((unaff_EBX == (int *)0x2) || ((0x526 < (int)unaff_EBX && ((int)unaff_EBX < 0x52b)))) {
        puVar10 = &DAT_0083a374;
      }
      else {
        puVar10 = &DAT_00850e44;
      }
      iVar5 = FUN_007a6628(*(int *)(*param_1 + 8),puVar10,&piStack_428);
      piVar8 = (int *)(((iVar5 < 0) - 1 & 2) - 2);
      iVar4 = iVar4 + -1;
    } while (piVar8 == (int *)0x0);
    (**(code **)*piVar9)(1);
  } while( true );
}


