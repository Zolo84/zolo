// FUN_006794d0 @ 6794d0 size=1066

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006794d0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *local_14;
  undefined1 auStack_8 [8];
  
  piVar1 = *(int **)(*(int *)((int)param_1 + 10) + 0x451c);
joined_r0x006794e4:
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    piVar13 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    local_14 = (int *)0x0;
    iVar11 = piVar13[0x4d];
    bVar5 = false;
    if ((iVar11 == 0x19) || (iVar11 == 0x16)) {
      uVar9 = _rand();
      uVar9 = uVar9 & 0x80000001;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
      }
      bVar5 = 0 < (int)uVar9;
    }
    else if (iVar11 == 0x1e) {
      bVar5 = true;
    }
    cVar8 = FUN_0042ddd0(DAT_00893530 + 0x14);
  } while (((cVar8 != '\0') || (*(char *)((int)piVar13 + 0x15f) != '\0')) ||
          ((char)piVar13[0x55] != '\0'));
  piVar6 = *(int **)(*(int *)((int)param_1 + 10) + 0x4508);
joined_r0x0067957b:
  do {
    do {
      do {
        piVar3 = local_14;
        if (piVar6 == (int *)0x0) goto LAB_0067969f;
        piVar2 = (int *)piVar6[2];
        piVar3 = (int *)*piVar6;
        iVar11 = *(int *)((int)param_1 + 10);
        iVar10 = FUN_00522770();
        piVar6 = piVar2;
      } while (((iVar10 != iVar11) ||
               (cVar8 = FUN_0049fd90(piVar13,piVar3[3],piVar3), cVar8 == '\0')) || (piVar3[3] == 0))
      ;
      iVar11 = FUN_0051b230();
      iVar11 = *(int *)(iVar11 + 0x482);
      iVar10 = FUN_0044e1d0();
    } while (iVar11 != iVar10);
    if (((*(char *)((int)piVar13 + 0x161) == '\0') ||
        (cVar8 = (**(code **)(*piVar3 + 0x2c))(), cVar8 == '\0')) ||
       (piVar2 = (int *)piVar3[0x7d], piVar2 == (int *)0x0)) {
      if (((char)piVar13[0x58] != '\0') && (cVar8 = (**(code **)(*piVar3 + 0x30))(), cVar8 != '\0'))
      {
        iVar11 = piVar13[0x4d];
        if (iVar11 == 0xf) {
          cVar8 = FUN_004efd60();
        }
        else if (iVar11 == 0x10) {
          cVar8 = FUN_004efd20();
        }
        else if (iVar11 == 0xe) {
          cVar8 = FUN_004efa80();
        }
        else {
          if ((iVar11 != 0xd) && (iVar11 != 0xc)) goto joined_r0x0067957b;
          cVar8 = FUN_004efc20();
        }
joined_r0x00679662:
        if (cVar8 != '\0') break;
      }
      goto joined_r0x0067957b;
    }
    if (bVar5) {
      cVar8 = (**(code **)(*piVar2 + 0x104))();
      goto joined_r0x00679662;
    }
    cVar8 = (**(code **)(*piVar2 + 0x104))();
  } while (cVar8 != '\0');
LAB_0067969f:
  local_14 = piVar3;
  bVar5 = false;
  if (local_14 == (int *)0x0) goto code_r0x006796b0;
  goto LAB_0067982f;
code_r0x006796b0:
  if (*(char *)((int)piVar13 + 0x15f) == '\0') {
    if ((char)piVar13[0x58] == '\0') {
      iVar11 = FUN_0044bf40();
    }
    else {
      iVar11 = FUN_0044e1d0();
      piVar6 = *(int **)(iVar11 + 0x2c);
      do {
        if (piVar6 == (int *)0x0) goto joined_r0x006794e4;
        piVar3 = (int *)piVar6[2];
        iVar11 = *piVar6;
        cVar8 = FUN_0049fd90(piVar13,*(undefined4 *)(iVar11 + 0x12),0);
        piVar6 = piVar3;
      } while (cVar8 == '\0');
      iVar11 = *(int *)(iVar11 + 0x12);
    }
    if (iVar11 != 0) {
      FUN_00428eb0(auStack_8);
      if ((*(char *)((int)piVar13 + 0x161) == '\0') || (piVar13[0x4c] == 0x8c)) {
        if ((char)piVar13[0x58] == '\0') goto joined_r0x006794e4;
        FUN_00446d10(&DAT_0088f28c);
        FUN_00449290(auStack_8);
        FUN_00667670();
        FUN_00461fb0();
        iVar10 = FUN_00428ee0(auStack_8);
        if (iVar10 == 0) {
          local_14 = (int *)0x0;
        }
        else {
          local_14 = (int *)(iVar10 + -0x14);
        }
        bVar5 = true;
        (**(code **)local_14[2])(iVar11);
      }
      else {
        FUN_00446d10(&DAT_0088f28c);
        FUN_00449290(auStack_8);
        FUN_00667670();
        FUN_00462100();
        iVar10 = FUN_00428ee0(auStack_8);
        if (iVar10 == 0) {
          local_14 = (int *)0x0;
          (*(code *)*_DAT_00000008)(iVar11);
        }
        else {
          local_14 = (int *)(iVar10 + -0x14);
          (*(code *)**(undefined4 **)(iVar10 + -0xc))(iVar11);
        }
      }
      if (local_14 != (int *)0x0) {
LAB_0067982f:
        if (*(char *)((int)piVar13 + 0x162) == '\0') {
          iVar11 = *(int *)((int)param_1 + 10);
          uVar14 = (**(code **)(*piVar13 + 0xc))(local_14[3]);
          uVar14 = (**(code **)(*(int *)(iVar11 + 0xe) + 0xc))(uVar14);
          FUN_00458570(s__s_deploys__s_in_province__d__00867bc4,uVar14);
          FUN_0045e6c0(local_14,piVar13);
        }
        else {
          iVar11 = (**(code **)(*(int *)((int)local_14 + 0x22) + 4))();
          if (0 < iVar11) {
            puVar7 = *(undefined4 **)((int)local_14 + 0x26);
            do {
              if (puVar7 == (undefined4 *)0x0) goto LAB_006798c5;
              puVar4 = (undefined4 *)puVar7[2];
              uVar14 = 0x679862;
              cVar8 = FUN_004a4150(*puVar7,piVar13);
              puVar7 = puVar4;
            } while (cVar8 == '\0');
            uVar15 = 0x679875;
            uVar12 = FUN_00447250(piVar13);
            FUN_00449290(uVar12);
            FUN_00667670();
            FUN_0045e960(uVar14,uVar15,piVar13);
          }
        }
LAB_006798c5:
        if (bVar5) {
          piVar13 = (int *)(**(code **)(*param_1 + 0xe0))();
          (**(code **)(*piVar13 + 0x1b8))(local_14);
        }
      }
    }
  }
  goto joined_r0x006794e4;
}


