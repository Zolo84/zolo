// FUN_004bc8f0 @ 4bc8f0 size=1080

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bc8f0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  undefined4 local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_c;
  undefined1 auStack_8 [8];
  
  iVar6 = *(int *)(param_1[0x10] + 0x74);
  if (((iVar6 == 4) || (iVar6 == 5)) || (local_1c = 0, iVar6 == 6)) {
    local_1c = 1;
  }
  iVar6 = (**(code **)(*param_1 + 0xc))();
  piVar10 = *(int **)(iVar6 + 4);
  while (piVar10 != (int *)0x0) {
    iStack_c = *piVar10;
    piVar10 = (int *)piVar10[2];
    iVar6 = iStack_c;
    piVar2 = *(int **)(iStack_c + 0x26);
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[2];
      iVar9 = *piVar2;
      FUN_004fc2e0(local_1c,param_1[0x10],param_2);
      bVar4 = _DAT_007e34e0 <= *(float *)(iVar9 + 0xec);
      *(undefined4 *)(iVar9 + 0x7c) = 0;
      *(undefined4 *)(iVar9 + 0x80) = 0;
      *(undefined4 *)(iVar9 + 0x84) = 0;
      piVar2 = piVar1;
      if (bVar4) {
        (**(code **)(*(int *)(iVar9 + 0x16) + 0x14))();
      }
      else {
        iVar7 = (**(code **)(*(int *)(iVar9 + 0x16) + 4))();
        if (iVar7 == 0) {
          FUN_0045ec40(iVar9,0,0,0);
        }
        else {
          iStack_14 = 0;
          iStack_18 = 0;
          iVar6 = *(int *)(iVar9 + 0x1a);
          while (iVar6 != 0) {
            iVar7 = *(int *)(iVar6 + 10);
            FUN_00446d10(iVar6);
            iVar8 = FUN_00428ee0(auStack_8);
            iVar6 = iVar7;
            if (((iVar8 != 0) && (iVar8 + -8 != 0)) && (iVar7 = FUN_004fda70(), iStack_18 < iVar7))
            {
              iStack_18 = FUN_004fda70();
              iStack_14 = iVar8 + -8;
            }
          }
          FUN_0045ec40(iVar9,iStack_14,0,0);
          iVar6 = iStack_c;
        }
      }
    }
    iVar9 = (**(code **)(*(int *)(iVar6 + 0x22) + 4))();
    if (iVar9 == 0) {
      FUN_004bdbc0(iVar6);
    }
  }
  (**(code **)(*param_1 + 0xc))();
  fVar11 = (float10)FUN_00527840();
  if (fVar11 < (float10)_DAT_007e3374) {
    if (*(char *)((int)param_1 + 0x4e) == '\0') {
      iVar6 = *(int *)(param_1[0x10] + 0x80);
    }
    else {
      iVar6 = *(int *)(param_1[0x10] + 0x84);
    }
    if (*(char *)(iVar6 + 0x3f) == '\0') {
      (**(code **)(*param_1 + 0x48))(0,0);
      return;
    }
  }
  iVar6 = ((int *)param_1[0x10])[0x19];
  iVar9 = (**(code **)(*(int *)param_1[0x10] + 0x24))();
  if (iVar9 <= iVar6) {
    iVar6 = param_1[0x10];
    if ((*(int *)(iVar6 + 0x74) < 4) || (*(char *)((int)param_1 + 0x4e) != '\0')) {
      if (*(int *)(iVar6 + 0x74) == 1) {
        if (*(char *)((int)param_1 + 0x4e) == '\0') {
          iVar6 = *(int *)(iVar6 + 0x80);
        }
        else {
          iVar6 = *(int *)(iVar6 + 0x84);
        }
        if (*(char *)(iVar6 + 0x3f) == '\0') {
          (**(code **)(*param_1 + 0xc))();
          fVar11 = (float10)FUN_005277e0();
          if (fVar11 < (float10)_DAT_0087736c) {
            bVar4 = false;
            if ((*(char *)((int)param_1 + 0x4e) == '\0') ||
               ((iVar6 = (**(code **)(*param_1 + 0xc))(), *(int *)(iVar6 + 4) != 0 &&
                (iVar6 = *(int *)(*(int *)(param_1[0x10] + 0x78) + 0x12),
                iVar9 = (**(code **)(*param_1 + 0xc))(),
                iVar6 == *(int *)(**(int **)(iVar9 + 4) + 0xc))))) {
              bVar4 = true;
            }
            iVar6 = (**(code **)(*param_1 + 0xc))();
            piVar10 = *(int **)(iVar6 + 4);
            while (piVar10 != (int *)0x0) {
              piVar2 = (int *)piVar10[2];
              piVar1 = (int *)*piVar10;
              iVar6 = (**(code **)(piVar1[0x47] + 4))();
              piVar3 = (int *)piVar1[0x48];
              iVar6 = iVar6 + 1;
              while ((piVar10 = piVar2, piVar3 != (int *)0x0 && (0 < iVar6))) {
                iVar9 = *piVar3;
                if ((*(int *)(iVar9 + 0x74) != 1) ||
                   (((iVar9 == param_1[0x10] && (bVar4)) ||
                    (*(int *)(*(int *)(iVar9 + 0x78) + 0x12) == piVar1[3])))) {
LAB_004bcc41:
                  piVar3 = (int *)piVar3[2];
                }
                else {
                  piVar10 = (int *)(**(code **)(**(int **)(iVar9 + 0x80) + 0xc))();
                  piVar10 = (int *)(**(code **)(*piVar10 + 0x28))(&iStack_c,piVar1);
                  if (*piVar10 == 0) goto LAB_004bcc41;
                  cVar5 = FUN_0042e980();
                  if (cVar5 != '\0') {
                    FUN_005b91d4(piVar1);
                  }
                  FUN_005b02c0(iVar9,piVar1,1);
                  FUN_0050bca0(piVar1);
                  (**(code **)(*piVar1 + 0x74))();
                  FUN_0051adb0(iVar9 + 0xc);
                  piVar3 = (int *)piVar1[0x48];
                  iVar6 = iVar6 + -1;
                }
              }
            }
            if (bVar4) {
              (**(code **)(*param_1 + 0x48))(0,0);
              return;
            }
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xc))();
        fVar11 = (float10)FUN_005277e0();
        if ((float10)_DAT_0087736c <= fVar11) {
          if (((*(int *)(param_1[0x10] + 0x74) == 2) && (*(char *)((int)param_1 + 0x4e) == '\0')) &&
             (*(char *)(*(int *)(param_1[0x10] + 0x80) + 0x3f) == '\0')) {
            iVar6 = (**(code **)(*param_1 + 0xc))();
            piVar10 = *(int **)(iVar6 + 4);
            while (piVar10 != (int *)0x0) {
              piVar2 = (int *)piVar10[2];
              iVar6 = *piVar10;
              piVar10 = piVar2;
              if (*(char *)(iVar6 + 0x28c) != '\0') {
                (**(code **)(*param_1 + 0x48))(iVar6,0);
              }
            }
          }
        }
        else {
          if (*(char *)((int)param_1 + 0x4e) == '\0') {
            iVar6 = *(int *)(param_1[0x10] + 0x80);
          }
          else {
            iVar6 = *(int *)(param_1[0x10] + 0x84);
          }
          if (*(char *)(iVar6 + 0x3f) == '\0') {
            (**(code **)(*param_1 + 0x48))(0,0);
            return;
          }
        }
      }
    }
  }
  return;
}


