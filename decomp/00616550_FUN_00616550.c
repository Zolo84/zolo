// FUN_00616550 @ 616550 size=667

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00616550(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  
  iVar1 = *(int *)((int)param_1 + 0xe);
  iVar2 = *(int *)((int)param_1 + 0x12);
  if (*(char *)((int)param_1 + 0x2d) != '\0') {
    (**(code **)(**(int **)((int)param_1 + 0x36) + 0x14))(iVar1,iVar2);
  }
  (**(code **)(**(int **)((int)param_1 + 0x32) + 0x14))(iVar1,iVar2);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  uVar5 = FUN_00584270(0xff,0xff,0xff);
  uVar6 = FUN_00584270(0xff,0xbd,0);
  iVar3 = (&DAT_0089cad8)[*(int *)((int)param_1 + 0x2e)];
  cVar4 = (**(code **)(*param_1 + 0x28))();
  if (cVar4 == '\0') {
    uVar6 = uVar5;
    if (iVar3 == 0) {
      uVar5 = FUN_004af740(*(undefined4 *)((int)param_1 + 0x2e));
    }
    else {
      uVar5 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))();
    }
  }
  else if (iVar3 == 0) {
    uVar5 = FUN_004af740(*(undefined4 *)((int)param_1 + 0x2e));
  }
  else {
    uVar5 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))();
  }
  FUN_004133fd(uVar5,iVar1 + 0x20,iVar2 + 4,DAT_00bd1bac,uVar6,0);
  if (iVar3 != 0) {
    iVar7 = iVar1 + 0x8c;
    if (param_2 == 5) {
      iVar7 = FUN_004a5c40(0xc,*(undefined4 *)((int)param_1 + 0x2e));
      if (100 < iVar7) {
        iVar7 = 100;
      }
      if (DAT_00d0ca90 == iVar3) {
        fVar9 = (float10)FUN_004a5fb0();
        iVar7 = (int)ROUND((float)fVar9);
      }
      cVar4 = FUN_0042dd70(DAT_00893530 + 0x14);
      if (cVar4 == '\0') {
        (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cf8) + 0x38))(iVar7);
        (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cf8) + 0x18))(iVar1 + 0xc4,iVar2);
        (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cf8) + 0x10))(0);
        return 0;
      }
      (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cf4) + 0x38))(iVar7);
      (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cf4) + 0x18))(iVar1 + 0xc4,iVar2);
      (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cf4) + 0x10))(0);
      return 0;
    }
    if (*(int *)(*(int *)(iVar3 + 0x12da) + 0x3b30) == 0) {
      param_2 = 0;
      piVar8 = &DAT_0085f5c0;
      do {
        fVar9 = (float10)FUN_004a45e0(param_2);
        if ((float10)_DAT_007eeea0 < fVar9) {
          (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cc4 + *piVar8 * 4) + 0x18))(iVar7,iVar2);
          (**(code **)(**(int **)(DAT_00d0ca90 + 0x13cc4 + *piVar8 * 4) + 0x10))(0);
          iVar7 = iVar7 + 0xe;
        }
        piVar8 = piVar8 + 1;
        param_2 = param_2 + 1;
      } while ((int)piVar8 < 0x85f5d8);
    }
  }
  return 0;
}


