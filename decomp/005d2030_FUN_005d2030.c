// FUN_005d2030 @ 5d2030 size=2457

undefined4 __thiscall FUN_005d2030(int param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int *unaff_EBX;
  int iVar11;
  int unaff_ESI;
  int *piVar12;
  int unaff_EDI;
  char *pcVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined4 uVar17;
  int *piVar18;
  int *piStack_150;
  char *pcStack_14c;
  undefined4 local_120 [3];
  undefined1 auStack_114 [272];
  
  iVar11 = *(int *)(param_1 + 0x12);
  piVar2 = *(int **)(param_1 + 0xe);
  pcStack_14c = (char *)(param_1 + 0x2e);
  piStack_150 = (int *)0x5d2056;
  iVar4 = FUN_00428ee0();
  if (iVar4 == 0) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)(iVar4 + -8);
  }
  pcStack_14c = s_eurostilecond14_bmp_0082f010;
  piStack_150 = (int *)0x5d2082;
  local_120[0] = FUN_004136a0();
  pcStack_14c = (char *)0xff;
  piStack_150 = (int *)0xff;
  FUN_00584270(0xff);
  pcStack_14c = (char *)0x0;
  piStack_150 = (int *)0x0;
  FUN_00584270(0);
  pcStack_14c = (char *)0xf8;
  piStack_150 = (int *)0xe8;
  FUN_00584270(0xd0);
  pcStack_14c = (char *)0x1c;
  piStack_150 = (int *)0x16;
  FUN_00584270(0xc4);
  piStack_150 = piVar2;
  pcStack_14c = (char *)iVar11;
  (**(code **)(**(int **)(param_1 + 0x38) + 0x18))();
  piVar18 = param_2;
  (**(code **)(*(int *)unaff_EBX[0xe] + 0x10))();
  if (piVar12 != (int *)0x0) {
    cVar3 = (**(code **)(*piVar12 + 0x14))();
    if ((cVar3 == '\0') && (cVar3 = (**(code **)(*piVar12 + 0x18))(), cVar3 == '\0')) {
      cVar3 = (**(code **)(*piVar12 + 0x1c))();
      if (cVar3 != '\0') {
        uVar17 = 0;
        param_1 = param_1 + 3;
        iVar11 = (int)piVar2 + 0x46;
        uVar7 = DAT_00bd1bac;
        uVar5 = FUN_004f62e0(*(undefined4 *)((int)piVar12 + 0x5a),iVar11,param_1,DAT_00bd1bac,
                             unaff_EBX,0);
        FUN_004133fd(uVar5,iVar11,param_1,uVar7,unaff_EBX,uVar17);
        return 0;
      }
      uVar17 = 0;
      param_1 = param_1 + 3;
      iVar11 = (int)piVar2 + 0x46;
      iVar4 = param_1;
      uVar7 = DAT_00bd1bac;
      uVar5 = FUN_004d1480(*(undefined4 *)((int)piVar12 + 0x5a),iVar11,param_1,DAT_00bd1bac,
                           unaff_EBX,0);
      FUN_004133fd(uVar5,iVar11,iVar4,uVar7,unaff_EBX,uVar17);
      if (1 < piVar12[0xc]) {
        FUN_007a630a(auStack_114,s__d__d_0085b024,piVar12[0xd],piVar12[0xc]);
        FUN_004133fd(auStack_114,(int)piVar2 + 10,param_1,DAT_00bd1bac,0,0);
        return 0;
      }
    }
    else {
      piVar16 = piVar2;
      (**(code **)(**(int **)(unaff_ESI + 0x3c) + 0x18))();
      piVar15 = param_2;
      (**(code **)(**(int **)((int)pcStack_14c + 0x3c) + 0x10))();
      piVar6 = piStack_150;
      if (*(int *)((int)piVar12 + 0x5e) != 0) {
        (**(code **)(*(int *)piStack_150[0x10] + 0x38))(*(int *)((int)piVar12 + 0x5e));
        piVar12 = *(int **)piVar6[0x10];
        iVar11 = FUN_00415bd0(unaff_EDI);
        iVar4 = FUN_00415bd0();
        (*(code *)piVar12[6])((int)piVar2 + (iVar4 - iVar11));
        (**(code **)(*(int *)piVar6[0x10] + 0x10))(param_2);
        unaff_EBX = piVar12;
      }
      cVar3 = (**(code **)(*piVar12 + 0x14))();
      if (cVar3 == '\0') {
        piVar6 = (int *)FUN_0044c5b0(*(undefined4 *)((int)piVar12 + 0x5a),
                                     *(undefined4 *)((int)piVar12 + 0x5e));
        iVar11 = piVar12[0xc];
        uVar7 = FUN_0044e100(*(undefined4 *)((int)piVar12 + 0x5a),
                             *(undefined4 *)((int)piVar12 + 0x5e));
        FUN_007a630a(local_120,s__d__s_0083d0ac,iVar11,uVar7);
      }
      else {
        piVar6 = (int *)FUN_0044c3d0(*(undefined4 *)((int)piVar12 + 0x5a),
                                     *(undefined4 *)((int)piVar12 + 0x62));
        iVar11 = unaff_EBX[0xc];
        uVar7 = FUN_0044e050(*(undefined4 *)((int)unaff_EBX + 0x5a),
                             *(undefined4 *)((int)unaff_EBX + 0x62));
        FUN_007a630a(local_120,s__d__s_0083d0ac,iVar11,uVar7);
      }
      iVar11 = 0x19;
      (**(code **)(*(int *)piStack_150[0x13] + 0x38))();
      piVar12 = piVar2 + 0xe;
      (**(code **)(*(int *)piVar18[0x13] + 0x18))(piVar12,unaff_EDI + 4);
      iVar14 = 0;
      (**(code **)(*(int *)piVar16[0x13] + 0x10))();
      iVar4 = __ftol();
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x19 < iVar4) {
        iVar4 = 0x19;
      }
      (**(code **)(*(int *)piVar15[0x11] + 0x38))(iVar4);
      (**(code **)(**(int **)(iVar11 + 0x44) + 0x18))(piVar2 + 0x10);
      (**(code **)(*(int *)piVar12[0x11] + 0x10))(0);
      if ((*(int *)(*DAT_00d12b40 + 0x41a) != 0) || (*(int *)(*DAT_00d12b40 + 0x41e) != 0)) {
        (**(code **)(**(int **)(iVar14 + 0x50) + 0x18))((int)piVar2 + 0x46,iVar11 + 0x20);
        (**(code **)(**(int **)(param_1 + 0x54) + 0x10))(param_2);
      }
      if (piVar15[0xc] < 2) {
        piVar6 = piVar16;
        pcVar8 = (char *)(**(code **)(*piVar15 + 0xc))();
        uVar9 = 0xffffffff;
        do {
          pcVar13 = pcVar8;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar8 + 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar13;
        } while (cVar3 != '\0');
        uVar9 = ~uVar9;
        pcVar8 = pcVar13 + -uVar9;
        pcVar13 = &stack0xfffffec0;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      piStack_150 = piVar2;
      pcStack_14c = (char *)iVar11;
      FUN_004133fd(&stack0xfffffec0,(int)piVar2 + 0x46,iVar11 + 0x10,DAT_00bd1bac,piVar12,
                   &piStack_150);
      FUN_00415bd0();
      cVar3 = (**(code **)(*piVar6 + 0xc))();
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*piVar6 + 0x10))();
        if (cVar3 != '\0') {
          FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x22]);
          iVar11 = iVar11 + 0x20;
          FUN_004132d0(&stack0xfffffec0,piVar2 + 0x17,iVar11,DAT_00bd1bac,piVar12,0);
          FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x24]);
          FUN_004132d0(&stack0xfffffec0,piVar2 + 0x1c,iVar11,DAT_00bd1bac,piVar12,0);
          FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x23]);
          FUN_004132d0(&stack0xfffffec0,piVar2 + 0x21,iVar11,DAT_00bd1bac,piVar12,0);
          FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x25]);
          FUN_004132d0(&stack0xfffffec0,piVar2 + 0x26,iVar11,DAT_00bd1bac,piVar12,0);
          FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0xb]);
          FUN_004132d0(&stack0xfffffec0,piVar2 + 0x2b,iVar11,DAT_00bd1bac,piVar12,0);
          FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x21]);
          FUN_004132d0(&stack0xfffffec0,piVar2 + 0x30,iVar11,DAT_00bd1bac,piVar12,0);
          FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0xc]);
          FUN_004132d0(&stack0xfffffec0,piVar2 + 0x35,iVar11,DAT_00bd1bac,piVar12,0);
          return 0;
        }
        cVar3 = (**(code **)(*piVar6 + 0x14))();
        if (cVar3 == '\0') {
          return 0;
        }
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0xb]);
        iVar11 = iVar11 + 0x20;
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x17,iVar11,DAT_00bd1bac,piVar12,0);
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x2b]);
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x1c,iVar11,DAT_00bd1bac,piVar12,0);
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x15]);
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x21,iVar11,DAT_00bd1bac,piVar12,0);
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x16]);
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x26,iVar11,DAT_00bd1bac,piVar12,0);
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x2a]);
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x2b,iVar11,DAT_00bd1bac,piVar12,0);
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0xc]);
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x30,iVar11,DAT_00bd1bac,piVar12,0);
        fVar1 = (float)piVar6[0x29];
      }
      else {
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x16]);
        iVar11 = iVar11 + 0x20;
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x17,iVar11,DAT_00bd1bac,piVar12,0);
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x15]);
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x1c,iVar11,DAT_00bd1bac,piVar12,0);
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0xb]);
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x21,iVar11,DAT_00bd1bac,piVar12,0);
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x11]);
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x26,iVar11,DAT_00bd1bac,piVar12,0);
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0x12]);
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x2b,iVar11,DAT_00bd1bac,piVar12,0);
        FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)(float)piVar6[0xc]);
        FUN_004132d0(&stack0xfffffec0,piVar2 + 0x30,iVar11,DAT_00bd1bac,piVar12,0);
        fVar1 = (float)piVar6[6];
      }
      FUN_007a630a(&stack0xfffffec0,&PTR_PTR_0083c9e8,(double)fVar1);
      FUN_004132d0(&stack0xfffffec0,piVar2 + 0x35,iVar11,DAT_00bd1bac,piVar12,0);
    }
  }
  return 0;
}


