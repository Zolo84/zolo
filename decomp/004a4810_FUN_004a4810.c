// FUN_004a4810 @ 4a4810 size=565

undefined4 __thiscall FUN_004a4810(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iStack_4;
  
  uVar4 = FUN_0044d810();
  cVar3 = FUN_00763e80(uVar4);
  iStack_4 = 3;
  if ((0 < param_3) && (param_3 < 5)) {
    iStack_4 = 1;
  }
  piVar2 = *(int **)(DAT_00d0ca90 + 0x2a0);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar2[2];
    iVar8 = *piVar2;
    iVar5 = FUN_00428ee0(iVar8);
    piVar2 = piVar1;
  } while ((((iVar5 == 0) || (iVar5 == 8)) || (iVar5 + -8 != param_2)) ||
          ((*(int *)(iVar8 + 6) != param_3 &&
           ((*(int *)(iVar5 + 0xb2) == 0 || (*(int *)(*(int *)(iVar5 + 0xb2) + 4) != 10))))));
  if ((*(int *)(iVar5 + 0x12) <= (int)*(short *)(DAT_00893530 + 0x18)) &&
     (*(char *)(iVar5 + 0xb6) == '\0')) {
    if ((*(int *)(iVar5 + 0xb2) != 0) && (*(int *)(*(int *)(iVar5 + 0xb2) + 4) == 10)) {
      iVar8 = 0;
      param_1 = param_1 + 0x24e;
      do {
        iVar6 = FUN_00428ee0(param_1);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = iVar6 + -8;
        }
        if (iVar6 == iVar5 + -8) {
          return 0;
        }
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 6;
      } while (iVar8 < 10);
    }
    if (param_3 == 0) {
      cVar3 = FUN_00763ec0();
      if (cVar3 == '\0') {
        cVar3 = FUN_00763ee0();
        if (cVar3 == '\0') {
          cVar3 = FUN_00763ef0();
          if (cVar3 != '\0') {
            uVar4 = FUN_0044d810();
            cVar3 = FUN_00763eb0(uVar4);
            if (cVar3 != '\0') {
              return 1;
            }
            if ((*(int *)(iVar5 + 0x1e) == 2) && (iVar8 = FUN_0044d810(), iVar8 == 3)) {
              return 1;
            }
          }
        }
        else {
          uVar4 = FUN_0044d810();
          cVar3 = FUN_00763ea0(uVar4);
          if (cVar3 != '\0') {
            return 1;
          }
          if ((*(int *)(iVar5 + 0x1e) == 7) && (iVar8 = FUN_0044d810(), iVar8 == 6)) {
            return 1;
          }
        }
      }
      else {
        iVar8 = FUN_0044d810();
        if (((1 < iVar8) && (iVar8 = FUN_0044d810(), iVar8 < 8)) &&
           (iVar8 = *(int *)(iVar5 + 0x1e), iVar5 = FUN_0044d810(), uVar9 = iVar8 - iVar5,
           uVar7 = (int)uVar9 >> 0x1f, (int)((uVar9 ^ uVar7) - uVar7) <= iStack_4)) {
          return 1;
        }
      }
    }
    else {
      iVar8 = *(int *)(iVar5 + 0x1e);
      if (((cVar3 == '\0') || ((1 < iVar8 && (iVar8 < 8)))) &&
         (iVar5 = FUN_0044d810(), uVar7 = iVar8 - iVar5 >> 0x1f,
         (int)((iVar8 - iVar5 ^ uVar7) - uVar7) <= iStack_4)) {
        return 1;
      }
    }
  }
  return 0;
}


