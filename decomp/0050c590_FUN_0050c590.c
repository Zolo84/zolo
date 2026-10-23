// FUN_0050c590 @ 50c590 size=2380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050c590(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  float10 fVar14;
  uint in_stack_ffffffb0;
  ushort uVar15;
  undefined4 uVar16;
  uint in_stack_ffffffb8;
  undefined2 uVar17;
  ushort uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 local_10;
  undefined4 local_8;
  
  iVar9 = param_2;
  cVar7 = FUN_0042e980();
  uVar18 = (ushort)(in_stack_ffffffb8 >> 0x10);
  if (cVar7 == '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x17b) != '\0') {
    iVar9 = *(int *)(param_2 + 0xc);
    uVar26 = 1;
    uVar25 = 0xbf800000;
    uVar24 = 0;
    uVar23 = 1;
    uVar22 = 0;
    uVar21 = 0xffffffff;
    uVar19 = 1;
    uVar17 = 0x50;
    puVar8 = (undefined4 *)FUN_0042d2d0(1,0xffffffff,0,1,0,0xbf800000,1);
    uVar16 = *puVar8;
    uVar20 = CONCAT22(uVar17,*(undefined2 *)(puVar8 + 1));
LAB_0050c690:
    uVar17 = 0x50;
    puVar8 = (undefined4 *)FUN_0042d2d0(uVar16,uVar20);
    FUN_0050b600(param_2,0,iVar9,0,1,1,*puVar8,CONCAT22(uVar17,*(undefined2 *)(puVar8 + 1)),uVar16,
                 uVar20,uVar19,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26);
    return;
  }
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
    cVar7 = FUN_0042ddd0(param_1 + 0x12);
    if ((((cVar7 != '\0') && (iVar9 = (**(code **)(*(int *)(param_2 + 0x11c) + 4))(), iVar9 == 0))
        && (cVar7 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))(), cVar7 != '\0')) &&
       (*(char *)(param_2 + 0x17b) == '\0')) {
      FUN_00512660(param_2,*(undefined4 *)(param_1 + 8));
    }
    iVar9 = *(int *)(param_2 + 0xc);
    if (*(int *)(param_1 + 8) == iVar9) {
      uVar26 = 1;
      uVar25 = 0xbf800000;
      uVar24 = 0;
      uVar23 = 1;
      uVar22 = 0;
      uVar21 = 0xffffffff;
      uVar19 = 1;
      uVar17 = 0x50;
      puVar8 = (undefined4 *)FUN_0042d2d0(1,0xffffffff,0,1,0,0xbf800000,1);
      uVar16 = *puVar8;
      uVar20 = CONCAT22(uVar17,*(undefined2 *)(puVar8 + 1));
      goto LAB_0050c690;
    }
    break;
  case 4:
    iVar10 = (**(code **)(*(int *)(param_2 + 0x11c) + 4))();
    if ((((iVar10 == 0) && (cVar7 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))(), cVar7 != '\0'))
        && (*(char *)(param_2 + 0x17b) == '\0')) &&
       (cVar7 = FUN_0042ddd0(param_1 + 0x12), cVar7 != '\0')) {
      param_2 = 0;
      iVar10 = FUN_004e9370(*(undefined4 *)(param_1 + 8));
      if ((*(int *)(iVar10 + 0x1aa) != 0) &&
         (piVar13 = *(int **)(*(int *)(iVar10 + 0x1aa) + 4), piVar13 != (int *)0x0)) {
        do {
          piVar2 = piVar13 + 2;
          iVar10 = *piVar13;
          if (*(int *)(iVar10 + 0x74) == 1) {
            piVar13 = *(int **)(*(int *)(iVar10 + 0x80) + 0x2c);
            while (piVar13 != (int *)0x0) {
              piVar4 = (int *)piVar13[2];
              iVar11 = *piVar13;
              piVar13 = piVar4;
              if (((&DAT_0089cad8)[iVar11] != 0) &&
                 ((iVar11 == *(int *)(*(int *)(iVar9 + 0x248) + 6) ||
                  ((iVar11 = *(int *)((&DAT_0089cad8)[iVar11] + 0x3350),
                   *(int *)(*(int *)(iVar9 + 0x248) + 0x3350) == iVar11 && (iVar11 != 0)))))) {
                param_2 = iVar10;
              }
            }
          }
          piVar13 = (int *)*piVar2;
        } while ((int *)*piVar2 != (int *)0x0);
        if (param_2 != 0) {
          FUN_00512660(iVar9,*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x12));
        }
      }
    }
    else {
      cVar7 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
      if (((cVar7 == '\0') && (*(char *)(param_2 + 0x17b) == '\0')) &&
         ((*(int *)(param_1 + 0x22) == *(int *)(param_1 + 8) &&
          (iVar10 = FUN_004e9370(*(int *)(param_1 + 0x22)), *(int *)(iVar10 + 0x1aa) == 0)))) {
        FUN_005127f0(param_2);
      }
    }
    uVar16 = *(undefined4 *)(*(int *)(iVar9 + 0x248) + 6);
    FUN_004e9370(*(undefined4 *)(param_1 + 8));
    cVar7 = FUN_0044b280(uVar16);
    if (cVar7 == '\0') {
      uVar25 = 1;
      uVar24 = 0xbf800000;
      uVar23 = 0;
      uVar22 = 1;
      uVar21 = 0;
      uVar19 = 0xffffffff;
      uVar20 = 1;
      local_8 = (uint)local_8._3_1_ << 0x18;
      uVar16 = *(undefined4 *)(iVar9 + 0xc);
      iVar10 = (uint)uVar18 << 0x10;
      uVar17 = 0x50;
      puVar8 = (undefined4 *)FUN_0042d2d0(local_8,iVar10,1,0xffffffff,0,1,0,0xbf800000,1);
      FUN_0050b600(iVar9,0,uVar16,0,1,1,*puVar8,CONCAT22(uVar17,*(undefined2 *)(puVar8 + 1)),local_8
                   ,iVar10,uVar20,uVar19,uVar21,uVar22,uVar23,uVar24,uVar25);
      return;
    }
    break;
  case 5:
    iVar10 = (**(code **)(*(int *)(param_2 + 0x11c) + 4))();
    if (((iVar10 == 0) && (cVar7 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))(), cVar7 != '\0'))
       && (*(char *)(param_2 + 0x17b) == '\0')) {
      cVar7 = FUN_0042ddd0(param_1 + 0x12);
      uVar15 = (ushort)(in_stack_ffffffb0 >> 0x10);
      if (cVar7 != '\0') {
        param_2 = 0;
        iVar10 = FUN_004e9370(*(undefined4 *)(param_1 + 8));
        if ((*(int *)(iVar10 + 0x1aa) != 0) &&
           (piVar13 = *(int **)(*(int *)(iVar10 + 0x1aa) + 4), piVar13 != (int *)0x0)) {
          do {
            piVar2 = piVar13 + 2;
            iVar10 = *piVar13;
            if (*(int *)(iVar10 + 0x74) == 1) {
              piVar13 = *(int **)(*(int *)(iVar10 + 0x84) + 0x2c);
              while (piVar13 != (int *)0x0) {
                piVar4 = (int *)piVar13[2];
                iVar11 = *piVar13;
                piVar13 = piVar4;
                if (((&DAT_0089cad8)[iVar11] != 0) &&
                   ((iVar11 == *(int *)(*(int *)(iVar9 + 0x248) + 6) ||
                    ((iVar11 = *(int *)((&DAT_0089cad8)[iVar11] + 0x3350),
                     *(int *)(*(int *)(iVar9 + 0x248) + 0x3350) == iVar11 && (iVar11 != 0)))))) {
                  param_2 = iVar10;
                }
              }
            }
            piVar13 = (int *)*piVar2;
          } while ((int *)*piVar2 != (int *)0x0);
          if (param_2 != 0) {
            FUN_00512660(iVar9,*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x12));
            return;
          }
        }
        if (*(int *)(param_1 + 8) != *(int *)(iVar9 + 0xc)) {
          return;
        }
        local_8 = (uint)local_8._3_1_ << 0x18;
        local_10 = (uint)local_10._3_1_ << 0x18;
        FUN_0050b600(iVar9,0,*(int *)(iVar9 + 0xc),0,1,1,local_10,(uint)uVar15 << 0x10,local_8,
                     (uint)uVar18 << 0x10,1,0xffffffff,0,1,0,0xbf800000,1);
        return;
      }
    }
    cVar7 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
    if ((cVar7 != '\0') || (*(char *)(param_2 + 0x17b) != '\0')) {
      uVar16 = *(undefined4 *)(*(int *)(param_2 + 0x248) + 6);
      FUN_004e9370(*(undefined4 *)(param_1 + 8));
      cVar7 = FUN_0044b280(uVar16);
      if (cVar7 == '\0') {
        return;
      }
      uVar5 = (uint)local_8._3_1_;
      uVar6 = (uint)local_10._3_1_;
      in_stack_ffffffb8 = (uint)uVar18;
      goto LAB_0050ceba;
    }
    iVar9 = *(int *)(param_1 + 0x22);
    if (iVar9 != *(int *)(param_1 + 8)) {
      return;
    }
    goto LAB_0050cd4a;
  case 6:
    iVar10 = (**(code **)(*(int *)(param_2 + 0x11c) + 4))();
    if ((((iVar10 == 0) && (cVar7 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))(), cVar7 != '\0'))
        && (*(char *)(param_2 + 0x17b) == '\0')) &&
       (cVar7 = FUN_0042ddd0(param_1 + 0x12), cVar7 != '\0')) {
      if (*(int *)(param_2 + 0xc) != *(int *)(param_1 + 8)) {
        iVar9 = FUN_0051b230();
        if (*(int *)(iVar9 + 0x1aa) != 0) {
          return;
        }
        FUN_00512660(param_2,*(undefined4 *)(param_1 + 8));
        return;
      }
      local_8 = 0;
      local_10 = 0;
      iVar10 = FUN_0051b230();
      if (*(int *)(iVar10 + 0x290) < 1) {
        return;
      }
      param_2 = 0;
      while( true ) {
        iVar10 = FUN_0051b230();
        iVar10 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar10 + 0x298) + param_2));
        if (((*(int *)(iVar10 + 0x254) != 8) && (*(int *)(iVar10 + 0x254) != 9)) &&
           (*(int *)(iVar10 + 0x1aa) != 0)) break;
LAB_0050c845:
        local_10 = local_10 + 1;
        param_2 = param_2 + 0xc;
        iVar10 = FUN_0051b230();
        if (*(int *)(iVar10 + 0x290) <= (int)local_10) {
          if (local_8 == 0) {
            return;
          }
          FUN_00512660(iVar9,*(undefined4 *)(*(int *)(local_8 + 0x78) + 0x12));
          return;
        }
      }
      piVar13 = *(int **)(*(int *)(iVar10 + 0x1aa) + 4);
joined_r0x0050c7ad:
      do {
        if (piVar13 == (int *)0x0) goto LAB_0050c845;
        piVar2 = (int *)piVar13[2];
        iVar10 = *piVar13;
        piVar13 = piVar2;
        if (*(int *)(iVar10 + 0x74) == 1) {
          uVar16 = *(undefined4 *)(iVar9 + 0x248);
          uVar20 = uVar16;
          (**(code **)(**(int **)(iVar10 + 0x80) + 0xc))(uVar16);
          cVar7 = FUN_00527dc0(uVar20);
          if (cVar7 == '\0') {
            (**(code **)(**(int **)(iVar10 + 0x84) + 0xc))(uVar16);
            cVar7 = FUN_00527dc0(uVar16);
            if (cVar7 == '\0') goto joined_r0x0050c7ad;
          }
          fVar14 = (float10)FUN_004bebe0();
          uVar16 = *(undefined4 *)(iVar9 + 0x248);
          fVar1 = (float)fVar14;
          (**(code **)(**(int **)(iVar10 + 0x80) + 0xc))(uVar16);
          cVar7 = FUN_00527dc0(uVar16);
          if (cVar7 == '\0') {
            fVar1 = _DAT_007e3374 - fVar1;
          }
          if (fVar1 < _DAT_007e68c4) {
            local_8 = iVar10;
          }
        }
      } while( true );
    }
    cVar7 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
    if (cVar7 != '\0') {
      return;
    }
    if (*(char *)(param_2 + 0x17b) != '\0') {
      return;
    }
    iVar9 = *(int *)(param_1 + 0x22);
    if (iVar9 == *(int *)(param_1 + 8)) {
      return;
    }
LAB_0050cd4a:
    iVar9 = FUN_004e9370(iVar9);
    if (*(int *)(iVar9 + 0x1aa) == 0) {
      FUN_005127f0(param_2);
      return;
    }
    break;
  case 7:
    iVar10 = (**(code **)(*(int *)(param_2 + 0x11c) + 4))();
    if (iVar10 == 0) {
      cVar7 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
      if (cVar7 == '\0') {
        if (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 8)) {
          FUN_00512660(param_2,*(int *)(param_2 + 0xc));
          return;
        }
      }
      else {
        iVar10 = 0;
        param_2 = 0;
        iVar11 = FUN_0051b230();
        if (0 < *(int *)(iVar11 + 0x290)) {
          iVar11 = 0;
          do {
            iVar12 = FUN_0051b230();
            iVar12 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar12 + 0x298) + iVar11));
            if ((*(int *)(iVar12 + 0x254) != 8) && (*(int *)(iVar12 + 0x254) != 9)) {
              piVar13 = *(int **)(*(int *)(iVar12 + 0x1c2) + 4);
              while ((piVar13 != (int *)0x0 && (iVar10 == 0))) {
                piVar2 = piVar13 + 2;
                iVar3 = *piVar13;
                piVar13 = (int *)*piVar2;
                if (*(int *)(*(int *)(iVar3 + 0x248) + 6) == 0x157) {
                  iVar10 = *(int *)(iVar12 + 0x12);
                }
              }
            }
            iVar11 = iVar11 + 0xc;
            param_2 = param_2 + 1;
            iVar12 = FUN_0051b230();
          } while (param_2 < *(int *)(iVar12 + 0x290));
          if (iVar10 != 0) {
            FUN_00512660(iVar9,iVar10);
            return;
          }
        }
        if (*(int *)(iVar9 + 0xc) != *(int *)(param_1 + 8)) {
          FUN_00512660(iVar9,*(int *)(param_1 + 8));
          return;
        }
      }
    }
    break;
  case 8:
    if (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 8)) {
      local_8 = (uint)local_8._3_1_ << 0x18;
      local_10 = (uint)local_10._3_1_ << 0x18;
      in_stack_ffffffb8 = in_stack_ffffffb8 & 0xffff0000;
      in_stack_ffffffb0 = in_stack_ffffffb0 & 0xffff0000;
      FUN_0050b600(param_2,0,*(int *)(param_2 + 0xc),0,1,1,local_10,in_stack_ffffffb0,local_8,
                   in_stack_ffffffb8,1,0xffffffff,0,1,0,0xbf800000,1);
    }
    uVar16 = *(undefined4 *)(*(int *)(param_2 + 0x248) + 6);
    FUN_004e9370(*(undefined4 *)(param_1 + 8));
    cVar7 = FUN_0044b280(uVar16);
    if (cVar7 == '\0') {
      return;
    }
    uVar5 = local_8 >> 0x18;
    uVar6 = local_10 >> 0x18;
    in_stack_ffffffb8 = in_stack_ffffffb8 >> 0x10;
LAB_0050ceba:
    local_8 = uVar5 << 0x18;
    local_10 = uVar6 << 0x18;
    FUN_0050b600(param_2,0,*(undefined4 *)(param_2 + 0xc),0,1,1,local_10,
                 in_stack_ffffffb0 & 0xffff0000,local_8,in_stack_ffffffb8 << 0x10,1,0xffffffff,0,1,0
                 ,0xbf800000,1);
  }
  return;
}


