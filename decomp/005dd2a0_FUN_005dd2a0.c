// FUN_005dd2a0 @ 5dd2a0 size=3147

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005dd2a0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvVar9;
  int unaff_ESI;
  int *piVar10;
  int unaff_EDI;
  float10 fVar11;
  int in_stack_fffffd8c;
  int in_stack_fffffd90;
  undefined4 in_stack_fffffd94;
  int in_stack_fffffd98;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int local_230;
  int aiStack_228 [2];
  int local_220;
  int iStack_21c;
  undefined1 auStack_20c [244];
  undefined1 auStack_118 [244];
  undefined4 uStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_007cde0e;
  local_c = ExceptionList;
  local_230 = *(int *)(param_1 + 0x12);
  iVar1 = *(int *)(param_1 + 0xe);
  ExceptionList = &local_c;
  iVar3 = FUN_00428ee0();
  if (iVar3 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)(iVar3 + -8);
  }
  local_220 = FUN_004136a0();
  FUN_004136a0();
  FUN_00584270(0xff,0xff,0xff);
  uVar4 = FUN_00584270(0,0,0);
  if (piVar10 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar3 = local_230;
  (**(code **)(**(int **)(param_1 + 0x4a) + 0x18))(iVar1);
  puVar14 = puStack_4;
  (**(code **)(**(int **)(param_1 + 0x4a) + 0x10))();
  if (piVar10[0x4c] != 0x8c) {
    local_230 = piVar10[0x4e];
    iVar6 = (&DAT_00d7d48c)[piVar10[0x4c] * 2];
    iVar5 = FUN_005045e0();
    if (*(int *)(*(int *)(iVar5 + 0x452e) + (iVar6 + local_230) * 4) != 0) {
      iVar6 = FUN_00415f10();
      iVar5 = FUN_00415f10();
      if (iVar5 != iVar6) {
        (**(code **)(**(int **)(param_1 + 0x2e) + 0x2c))(iVar6);
      }
    }
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x18))(iVar1 + 2,unaff_ESI + 2);
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x10))(uStack_10);
  }
  if (*(int *)(DAT_00d0ca90 + 0x21e62) == 0x11) {
    if (piVar10[0x16] != 0) {
      (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(iVar1 + 0x30,unaff_ESI + 4);
    }
  }
  else {
    if (*(char *)((int)piVar10 + 0x162) == '\0') {
      iVar6 = __ftol();
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0x19 < iVar6) {
        iVar6 = 0x19;
      }
      (**(code **)(**(int **)(param_1 + 0x5c) + 0x38))(iVar6);
      (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))(iVar1 + 0x38,unaff_EDI + 4);
      (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))(0);
      in_stack_fffffd8c = __ftol();
      if (in_stack_fffffd8c < 0) {
        in_stack_fffffd8c = 0;
      }
      else if (0x19 < in_stack_fffffd8c) {
        in_stack_fffffd8c = 0x19;
      }
      (**(code **)(**(int **)(param_1 + 0x60) + 0x38))(in_stack_fffffd8c);
      in_stack_fffffd98 = iVar1 + 0x38;
      (**(code **)(**(int **)(param_1 + 0x60) + 0x18))(in_stack_fffffd98,iVar6 + 4);
      in_stack_fffffd94 = 0;
      (**(code **)(**(int **)(param_1 + 0x60) + 0x10))(0);
      in_stack_fffffd90 = __ftol();
      if (in_stack_fffffd90 < 0) {
        in_stack_fffffd90 = 0;
      }
      else if (0x19 < in_stack_fffffd90) {
        in_stack_fffffd90 = 0x19;
      }
      (**(code **)(**(int **)(param_1 + 0x54) + 0x38))(in_stack_fffffd90);
      in_stack_fffffd8c = in_stack_fffffd8c + 4;
      (**(code **)(**(int **)(param_1 + 0x54) + 0x18))(iVar1 + 0x40,in_stack_fffffd8c);
      (**(code **)(**(int **)(param_1 + 0x54) + 0x10))(0);
      FUN_004fd510();
      iVar6 = __ftol();
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0x19 < iVar6) {
        iVar6 = 0x19;
      }
      (**(code **)(**(int **)(param_1 + 0x60) + 0x38))(iVar6);
      (**(code **)(**(int **)(param_1 + 0x60) + 0x18))(iVar1 + 0x40,in_stack_fffffd90 + 4);
      (**(code **)(**(int **)(param_1 + 0x60) + 0x10))(0);
      __ftol();
      iVar6 = __ftol();
      if (0 < iVar6) {
        local_230 = iVar1 + 0x52;
        do {
          (**(code **)(**(int **)(param_1 + 0x74) + 0x18))(local_230,unaff_ESI + 2);
          (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(0);
          local_230 = local_230 + 10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    if ((float)piVar10[0x43] * (float)piVar10[0x3c] * _DAT_007e543c <= _DAT_007e3380) {
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x18))(0xffffff9c,0xffffff9c);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x38))(0);
      if (*(char *)((int)piVar10 + 0x157) != '\0') {
        (**(code **)(**(int **)(param_1 + 0x6c) + 0x38))(1);
      }
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x18))(iVar1 + 0x38,unaff_EDI + 0x20);
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))(uStack_14);
    }
    if ((*(int *)(*DAT_00d12b40 + 0x41a) != 0) || (*(int *)(*DAT_00d12b40 + 0x41e) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x7c) + 0x18))(iVar1 + 0x46,unaff_ESI + 0x20);
      (**(code **)(**(int **)(param_1 + 0x7c) + 0x10))(uStack_10);
    }
  }
  local_220 = iVar1 + 0xdc;
  iStack_21c = unaff_ESI + 0x28;
  aiStack_228[0] = iVar1;
  FUN_00415bd0();
  FUN_00415bd0();
  if (*(char *)((int)piVar10 + 0x162) == '\0') {
    piVar13 = aiStack_228;
    iVar6 = unaff_ESI + 0x10;
    uVar12 = 0x5dd7e3;
    uVar8 = (**(code **)(*piVar10 + 0xc))(iVar1 + 0x46,iVar6,DAT_00bd1bac,uVar4,piVar13);
    FUN_004133fd(uVar8,in_stack_fffffd8c,in_stack_fffffd90,in_stack_fffffd94,in_stack_fffffd98,
                 uVar12);
    if (0 < piVar10[0x4f]) {
      puVar15 = (undefined4 *)(param_1 + 0x32);
      iVar5 = 0;
      iVar3 = iVar1 + 0xcd;
      do {
        (**(code **)(*(int *)*puVar15 + 0x18))(iVar3,(int)piVar13 + 2);
        (**(code **)(*(int *)*puVar14 + 0x10))(uStack_24);
        iVar3 = iVar3 + -0x10;
        iVar5 = iVar5 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar5 < piVar10[0x4f]);
    }
  }
  else {
    piVar13 = aiStack_228;
    iVar5 = unaff_ESI + 0x10;
    iVar6 = iVar1 + 0x46;
    uVar8 = DAT_00bd1bac;
    uVar12 = uVar4;
    uVar7 = FUN_0044e100(piVar10[0x22],piVar10[0x27]);
    FUN_004133fd(uVar7,iVar6,iVar5,uVar8,uVar12,piVar13);
    uVar8 = FUN_004ff3a0(piVar10[0x22]);
    FUN_007a630a(auStack_118,s__s____d_008588a0,uVar8,piVar10[0x27] + 1);
    FUN_004132d0(auStack_118,iVar1 + 0x23,unaff_ESI + 0x20,DAT_00bd1bac,uVar4,0);
    pvVar9 = operator_new(0x7e);
    uStack_10 = 0;
    if (pvVar9 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_00414c80(s_gfx_interface_auxiliarybig_bmp_0085b050);
    }
    uStack_10 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2e) = uVar8;
    uVar8 = FUN_00413d60(s_auxiliary_palette_bmp_0085afe8);
    FUN_00415f20(uVar8);
    piVar13 = DAT_008776b0;
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x34))(DAT_008776b0);
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x38))(piVar10[0x22]);
    iVar6 = iVar1 + 0x1a;
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x18))(iVar6,iVar3 + 0xc);
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x10))(uStack_18);
  }
  cVar2 = FUN_004fd350();
  if (cVar2 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x46) + 0x18))(0xfffffc18,0xffffff9c);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x46) + 0x18))(iVar1 + 0xb8,piVar13 + 1);
    (**(code **)(**(int **)(param_1 + 0x46) + 0x10))(uStack_24);
  }
  if (*(char *)((int)piVar10 + 0x155) == '\0') {
    (**(code **)(**(int **)(param_1 + 100) + 0x18))(0xfffffc18,0xffffff9c);
  }
  else {
    (**(code **)(**(int **)(param_1 + 100) + 0x18))(iVar1 + 0xac,iVar6 + 4);
    (**(code **)(**(int **)(param_1 + 100) + 0x10))(0);
  }
  if (*(char *)((int)piVar10 + 0x15f) == '\0') {
    if (*(char *)((int)piVar10 + 0x161) == '\0') {
      if ((char)piVar10[0x58] == '\0') goto LAB_005dde8f;
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0x46]);
      FUN_004132d0(auStack_20c,iVar1 + 0x5c,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xba]);
      FUN_004132d0(auStack_20c,iVar1 + 0x70,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xb8]);
      FUN_004132d0(auStack_20c,iVar1 + 0x84,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xb9]);
      FUN_004132d0(auStack_20c,iVar1 + 0x98,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xb7]);
      FUN_004132d0(auStack_20c,iVar1 + 0xac,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0x45]);
      FUN_004132d0(auStack_20c,iVar1 + 0xc0,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xb6]);
    }
    else {
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xb9]);
      FUN_004132d0(auStack_20c,iVar1 + 0x5c,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xbb]);
      FUN_004132d0(auStack_20c,iVar1 + 0x70,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xba]);
      FUN_004132d0(auStack_20c,iVar1 + 0x84,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xbc]);
      FUN_004132d0(auStack_20c,iVar1 + 0x98,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0x46]);
      FUN_004132d0(auStack_20c,iVar1 + 0xac,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xb8]);
      FUN_004132d0(auStack_20c,iVar1 + 0xc0,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
      FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0x45]);
    }
  }
  else {
    FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xb8]);
    FUN_004132d0(auStack_20c,iVar1 + 0x5c,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
    FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xb7]);
    FUN_004132d0(auStack_20c,iVar1 + 0x70,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
    FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0x46]);
    FUN_004132d0(auStack_20c,iVar1 + 0x84,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
    FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xb3]);
    FUN_004132d0(auStack_20c,iVar1 + 0x98,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
    FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0xb4]);
    FUN_004132d0(auStack_20c,iVar1 + 0xac,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
    FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)(float)piVar10[0x45]);
    FUN_004132d0(auStack_20c,iVar1 + 0xc0,local_230 + 0x20,DAT_00bd1bac,uVar4,0);
    fVar11 = (float10)(**(code **)(*piVar10 + 0x28))();
    FUN_007a630a(auStack_20c,&PTR_PTR_0083c9e8,(double)fVar11);
  }
  FUN_004132d0(auStack_20c,iVar1 + 0xd4,local_230 + 0x20,DAT_00bd1bac,uVar4);
LAB_005dde8f:
  if (*(char *)((int)piVar10 + 0x15b) != '\0') {
    iVar3 = **(int **)(param_1 + 0x70);
    iVar6 = FUN_00415bd0();
    iVar5 = FUN_00415bd0();
    (**(code **)(iVar3 + 0x18))((iVar1 - iVar6) + iVar5);
    (**(code **)(**(int **)(param_1 + 0x70) + 0x10))(puStack_4);
  }
  ExceptionList = local_c;
  return 0;
}


