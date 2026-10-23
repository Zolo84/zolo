// FUN_00496e70 @ 496e70 size=1049

undefined4 __thiscall FUN_00496e70(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bdc9b;
  local_c = ExceptionList;
  iVar7 = *(int *)(param_2 + 4);
  local_18 = 0;
  if (*(int *)(iVar7 + 0xac) < 3) {
    ExceptionList = &local_c;
    local_18 = FUN_00428ee0(iVar7 + 0xe);
    if (local_18 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = local_18 + -8;
    }
  }
  else {
    ExceptionList = &local_c;
    iVar7 = FUN_00428ee0(iVar7 + 0xe);
    if (((iVar7 != 0) && (iVar7 != 8)) && (*(int *)(iVar7 + 100) != 0)) {
      FUN_00526280(*(int *)(param_2 + 4) + 0x18);
      *(undefined4 *)(*(int *)(iVar7 + 100) + 200) = *(undefined4 *)(*(int *)(param_2 + 4) + 0xac);
      if (*(int *)(*(int *)(param_2 + 4) + 0xac) == 8) {
        puVar8 = operator_new(0xc);
        local_4 = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          FUN_00499310(0x202,*(int *)(iVar7 + 100) + 0x18);
          *puVar8 = &PTR_FUN_007e5f60;
          *(undefined4 *)(puVar8[1] + 0xe) = 8;
        }
        local_4 = 0xffffffff;
        FUN_00565c30(puVar8);
      }
    }
  }
  iVar7 = 0;
  do {
    iVar1 = *(int *)(*(int *)(param_2 + 4) + 0x18 + iVar7 * 4);
    if (0 < iVar1) {
      iVar9 = *(int *)(param_1 + 6) * 0x25 + iVar7;
      (&DAT_00d89fea)[iVar9] = (&DAT_00d89fea)[iVar9] + iVar1;
      iVar9 = *(int *)(*(int *)(param_2 + 4) + 0x14);
      if ((iVar9 != 0) && (iVar9 != *(int *)(param_1 + 6))) {
        (&DAT_00d7d90a)[iVar9 * 0x25 + iVar7] = (&DAT_00d7d90a)[iVar9 * 0x25 + iVar7] + iVar1;
      }
      if (local_18 != 0) {
        bVar4 = true;
        bVar5 = true;
        bVar6 = true;
        piVar11 = *(int **)(local_18 + 0xa2);
        if (*(int **)(local_18 + 0xa2) == (int *)0x0) {
LAB_00497061:
          puVar10 = operator_new(300);
          *puVar10 = *(undefined4 *)(param_1 + 6);
          puVar8 = puVar10;
          for (iVar9 = 0x25; puVar8 = puVar8 + 1, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar8 = 0;
          }
          puVar8 = puVar10 + 0x26;
          for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          puVar10[iVar7 + 0x26] = iVar1;
          iVar9 = *(int *)(local_18 + 0xa6);
          puVar8 = operator_new(0xe);
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            *puVar8 = puVar10;
            puVar8[1] = iVar9;
            puVar8[2] = 0;
            *(undefined1 *)(puVar8 + 3) = 0;
          }
          iVar3 = *(int *)(local_18 + 0xaa);
          *(undefined4 **)(local_18 + 0xa6) = puVar8;
          *(int *)(local_18 + 0xaa) = iVar3 + 1;
          if (iVar3 == 0) {
            *(undefined4 **)(local_18 + 0xa2) = puVar8;
          }
          else {
            *(undefined4 **)(iVar9 + 8) = puVar8;
          }
          if (*(int *)(*(int *)(param_2 + 4) + 0x14) != *(int *)(param_1 + 6)) goto LAB_0049710f;
        }
        else {
          do {
            piVar2 = (int *)piVar11[2];
            piVar11 = (int *)*piVar11;
            iVar9 = *(int *)(*(int *)(param_2 + 4) + 0x14);
            if (*piVar11 == iVar9) {
              if (iVar9 != *(int *)(param_1 + 6)) {
                piVar11[iVar7 + 1] = piVar11[iVar7 + 1] + iVar1;
              }
              bVar5 = false;
            }
            if (*piVar11 == *(int *)(param_1 + 6)) {
              bVar4 = false;
              piVar11[iVar7 + 0x26] = piVar11[iVar7 + 0x26] + iVar1;
            }
            if (*piVar11 == 0xa4) {
              iVar9 = *(int *)(*(int *)(param_2 + 4) + 0xac);
              if (iVar9 == 1) {
                piVar11[iVar7 + 0x26] = piVar11[iVar7 + 0x26] + iVar1;
              }
              else if (iVar9 == 2) {
                piVar11[iVar7 + 1] = piVar11[iVar7 + 1] + iVar1;
              }
              bVar6 = false;
            }
            piVar11 = piVar2;
          } while (piVar2 != (int *)0x0);
          if (bVar4) goto LAB_00497061;
LAB_0049710f:
          if ((bVar5) && (*(int *)(*(int *)(param_2 + 4) + 0x14) != 0)) {
            puVar10 = operator_new(300);
            *puVar10 = *(undefined4 *)(*(int *)(param_2 + 4) + 0x14);
            puVar8 = puVar10;
            for (iVar9 = 0x25; puVar8 = puVar8 + 1, iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar8 = 0;
            }
            puVar8 = puVar10 + 0x26;
            for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            puVar10[iVar7 + 1] = iVar1;
            iVar9 = *(int *)(local_18 + 0xa6);
            puVar8 = operator_new(0xe);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              *puVar8 = puVar10;
              puVar8[1] = iVar9;
              puVar8[2] = 0;
              *(undefined1 *)(puVar8 + 3) = 0;
            }
            iVar3 = *(int *)(local_18 + 0xaa);
            *(undefined4 **)(local_18 + 0xa6) = puVar8;
            *(int *)(local_18 + 0xaa) = iVar3 + 1;
            if (iVar3 == 0) {
              *(undefined4 **)(local_18 + 0xa2) = puVar8;
            }
            else {
              *(undefined4 **)(iVar9 + 8) = puVar8;
            }
          }
        }
        if (bVar6) {
          puVar10 = operator_new(300);
          *puVar10 = 0xa4;
          puVar8 = puVar10;
          for (iVar9 = 0x25; puVar8 = puVar8 + 1, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar8 = 0;
          }
          puVar8 = puVar10 + 0x26;
          for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          iVar9 = *(int *)(*(int *)(param_2 + 4) + 0xac);
          if (iVar9 == 1) {
            puVar10[iVar7 + 0x26] = puVar10[iVar7 + 0x26] + iVar1;
          }
          else if (iVar9 == 2) {
            puVar10[iVar7 + 1] = puVar10[iVar7 + 1] + iVar1;
          }
          iVar1 = *(int *)(local_18 + 0xa6);
          puVar8 = operator_new(0xe);
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            *puVar8 = puVar10;
            puVar8[1] = iVar1;
            puVar8[2] = 0;
            *(undefined1 *)(puVar8 + 3) = 0;
          }
          iVar9 = *(int *)(local_18 + 0xaa);
          *(undefined4 **)(local_18 + 0xa6) = puVar8;
          *(int *)(local_18 + 0xaa) = iVar9 + 1;
          if (iVar9 == 0) {
            *(undefined4 **)(local_18 + 0xa2) = puVar8;
          }
          else {
            *(undefined4 **)(iVar1 + 8) = puVar8;
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
    if (0x24 < iVar7) {
      ExceptionList = local_c;
      return 0;
    }
  } while( true );
}


