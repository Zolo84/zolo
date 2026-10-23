// FUN_0048f9e0 @ 48f9e0 size=1536

undefined4 __thiscall FUN_0048f9e0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined2 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  void *pvVar12;
  undefined4 *puVar13;
  bool bVar14;
  char cStack_63;
  char cStack_61;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  uint uStack_34;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_20;
  uint uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bda67;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar5 = FUN_0042e980();
  if ((((cVar5 != '\0') &&
       (iVar7 = FUN_004e9370(*(undefined4 *)(*(int *)(param_2 + 4) + 0xe)),
       *(int *)(iVar7 + 0x46a) != 0)) && (*(int *)(iVar7 + 0x3d8) != 0)) &&
     (*(int *)(iVar7 + 0x3d8) == param_1)) {
    iVar1 = *(int *)(*(int *)(param_2 + 4) + 0x12);
    FUN_0049ed40(iVar1);
    if ((&DAT_0089cad8)[iVar1] != 0) {
      piVar2 = *(int **)(*(int *)(iVar7 + 0x46a) + 0x34);
joined_r0x0048fa7c:
      if (piVar2 != (int *)0x0) {
        piVar3 = (int *)*piVar2;
        piVar2 = (int *)piVar2[2];
        if (*(char *)((int)piVar3 + 0x17d) == '\0') {
          iVar8 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
          if (iVar8 == 0) {
            puVar9 = operator_new(0xc);
            uVar4 = DAT_0088f28c;
            uStack_4 = 0;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              uStack_42 = (undefined2)DAT_0088f28e;
              uStack_40 = (undefined2)((uint)DAT_0088f28e >> 0x10);
              FUN_00458490(0x35,piVar3[0x92] + 4);
              iVar8 = puVar9[1];
              *puVar9 = &PTR_FUN_007e5370;
              *(int *)(iVar8 + 0xe) = piVar3[6];
              *(short *)(iVar8 + 0x12) = (short)piVar3[7];
              *(undefined1 *)(puVar9[1] + 0x14) = 1;
              *(undefined1 *)(puVar9[1] + 0x15) = 0;
              *(undefined4 *)(puVar9[1] + 0x16) = 0;
              iVar8 = puVar9[1];
              *(uint *)(iVar8 + 0x1a) = CONCAT22(uStack_42,uVar4);
              *(undefined2 *)(iVar8 + 0x1e) = uStack_40;
            }
            uStack_4 = 0xffffffff;
            FUN_00565ca0(puVar9);
            goto joined_r0x0048fa7c;
          }
          cStack_61 = '\0';
          cVar5 = FUN_0044a690(*(undefined4 *)(piVar3[0x92] + 6));
          if (cVar5 == '\0') {
            cVar5 = FUN_0044b280(*(undefined4 *)(piVar3[0x92] + 6));
            if (cVar5 != '\0') {
              cStack_61 = FUN_0049ed40(*(undefined4 *)(piVar3[0x92] + 6));
            }
            uVar10 = FUN_004e9370(*(undefined4 *)(iVar7 + 0x3dc));
            cStack_63 = FUN_005216c0(uVar10);
            if ((cStack_63 != '\0') && (cVar6 = FUN_0044a690(iVar1), cVar6 == '\0')) {
              iVar8 = *(int *)(*(int *)(param_2 + 4) + 0xe);
              if (iVar8 < 0x19a) {
                if (iVar8 == 0x199) {
                  bVar14 = *(int *)(iVar7 + 0x3dc) == 0x18d;
                }
                else if (iVar8 == 0x126) {
                  bVar14 = *(int *)(iVar7 + 0x3dc) == 0x122;
                }
                else {
                  if (iVar8 != 0x15c) goto LAB_0048fc5d;
                  bVar14 = *(int *)(iVar7 + 0x3dc) == 0x97e;
                }
              }
              else if (iVar8 == 0x379) {
                bVar14 = *(int *)(iVar7 + 0x3dc) == 0xa0f;
              }
              else {
                if (iVar8 != 900) goto LAB_0048fc5d;
                bVar14 = *(int *)(iVar7 + 0x3dc) == 0x995;
              }
              cStack_63 = !bVar14;
            }
LAB_0048fc5d:
            if (cVar5 == '\0') {
              if (cStack_63 != '\0') {
                uStack_1c = uStack_1c & 0xff000000;
                FUN_0050b600(piVar3,1,*(undefined4 *)(iVar7 + 0x3dc),0,1,1,
                             *(undefined4 *)(DAT_00893530 + 0x14),
                             *(undefined2 *)(DAT_00893530 + 0x18),uStack_1c,0,1,0xffffffff,0,1,0,
                             0xbf800000,1);
              }
              goto joined_r0x0048fa7c;
            }
            iVar8 = _rand();
            iVar11 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
            iVar8 = iVar11 * 5 + iVar8 % 100;
            if (iVar8 < 10) {
              iVar11 = (**(code **)(*piVar3 + 0x14))();
              iVar11 = (**(code **)(**(int **)(iVar11 + 0x2aa) + 4))();
              if (0 < iVar11) goto LAB_0048fca0;
LAB_0048fcb8:
              puVar9 = operator_new(0xc);
              uVar4 = DAT_0088f28c;
              uStack_4 = 1;
              if (puVar9 == (undefined4 *)0x0) goto LAB_0048ff5e;
              uStack_3a = (undefined2)DAT_0088f28e;
              uStack_38 = (undefined2)((uint)DAT_0088f28e >> 0x10);
              FUN_00458490(0xa8,(&DAT_0089cad8)[iVar1] + 4);
              iVar8 = puVar9[1];
              *puVar9 = &PTR_FUN_007e5370;
              *(int *)(iVar8 + 0xe) = piVar3[6];
              *(short *)(iVar8 + 0x12) = (short)piVar3[7];
              *(undefined1 *)(puVar9[1] + 0x14) = 0;
              *(undefined1 *)(puVar9[1] + 0x15) = 1;
              *(undefined4 *)(puVar9[1] + 0x16) = 0;
              iVar8 = puVar9[1];
              *(uint *)(iVar8 + 0x1a) = CONCAT22(uStack_3a,uVar4);
              *(undefined2 *)(iVar8 + 0x1e) = uStack_38;
            }
            else {
LAB_0048fca0:
              if (cStack_61 == '\0') {
                if (cStack_63 != '\0') goto LAB_0048fd55;
              }
              else {
                if (cStack_63 == '\0') goto LAB_0048fcb8;
LAB_0048fd55:
                if ((0xe < iVar8) || (cStack_61 != '\0')) {
                  if (cStack_63 != '\0') {
                    uStack_34 = uStack_34 & 0xff000000;
                    FUN_0050b600(piVar3,1,*(undefined4 *)(iVar7 + 0x3dc),0,1,1,
                                 *(undefined4 *)(DAT_00893530 + 0x14),
                                 *(undefined2 *)(DAT_00893530 + 0x18),uStack_34,0,1,0xffffffff,0,1,0
                                 ,0xbf800000,1);
                  }
                  goto joined_r0x0048fa7c;
                }
              }
              if (DAT_00dc191b == '\0') {
                puVar9 = operator_new(0xc);
                uVar4 = DAT_0088f28c;
                uStack_4 = 3;
                if (puVar9 == (undefined4 *)0x0) goto LAB_0048ff5e;
                iVar8 = piVar3[0x92];
                uStack_22 = (undefined2)DAT_0088f28e;
                uStack_20 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                pvVar12 = operator_new(0x20);
                uStack_4 = CONCAT31(uStack_4._1_3_,4);
                if (pvVar12 == (void *)0x0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = FUN_004666c0();
                }
                FUN_0042d320(uVar10);
                *puVar9 = &PTR_FUN_007e5e5c;
                *(undefined1 *)((int)puVar9 + 10) = 0;
                *(undefined2 *)puVar9[1] = 0x35;
                iVar11 = puVar9[1];
                *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar8 + 4);
                *(undefined2 *)(iVar11 + 0xc) = *(undefined2 *)(iVar8 + 8);
                puVar13 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
                iVar8 = puVar9[1];
                *(undefined4 *)(iVar8 + 2) = *puVar13;
                *(undefined2 *)(iVar8 + 6) = *(undefined2 *)(puVar13 + 1);
                iVar8 = puVar9[1];
                *puVar9 = &PTR_FUN_007e5370;
                *(int *)(iVar8 + 0xe) = piVar3[6];
                *(short *)(iVar8 + 0x12) = (short)piVar3[7];
                *(undefined1 *)(puVar9[1] + 0x14) = 1;
                *(undefined1 *)(puVar9[1] + 0x15) = 0;
                *(undefined4 *)(puVar9[1] + 0x16) = 0;
                iVar8 = puVar9[1];
                *(uint *)(iVar8 + 0x1a) = CONCAT22(uStack_22,uVar4);
                *(undefined2 *)(iVar8 + 0x1e) = uStack_20;
              }
              else {
                puVar9 = operator_new(0xc);
                uVar4 = DAT_0088f28c;
                uStack_4 = 2;
                if (puVar9 == (undefined4 *)0x0) {
LAB_0048ff5e:
                  puVar9 = (undefined4 *)0x0;
                }
                else {
                  uStack_2a = (undefined2)DAT_0088f28e;
                  uStack_28 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                  FUN_00458490(0x35,piVar3[0x92] + 4);
                  iVar8 = puVar9[1];
                  *puVar9 = &PTR_FUN_007e5370;
                  *(int *)(iVar8 + 0xe) = piVar3[6];
                  *(short *)(iVar8 + 0x12) = (short)piVar3[7];
                  *(undefined1 *)(puVar9[1] + 0x14) = 1;
                  *(undefined1 *)(puVar9[1] + 0x15) = 0;
                  *(int *)(puVar9[1] + 0x16) = iVar1;
                  iVar8 = puVar9[1];
                  *(uint *)(iVar8 + 0x1a) = CONCAT22(uStack_2a,uVar4);
                  *(undefined2 *)(iVar8 + 0x1e) = uStack_28;
                }
              }
            }
            uStack_4 = 0xffffffff;
            FUN_00565bc0(puVar9);
          }
        }
        goto joined_r0x0048fa7c;
      }
    }
  }
  ExceptionList = local_c;
  return 3;
}


