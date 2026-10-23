// FUN_006a3220 @ 6a3220 size=285

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a3220(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  float fStack_4;
  
  iVar3 = (**(code **)(*param_1 + 0x1e8))();
  if ((iVar3 != 3) && (((iVar3 < 0xe || (0xf < iVar3)) && (*(int *)((int)param_1 + 0x9a) != 0)))) {
    if ((*(int *)((int)param_1 + 0x9e) == 1) &&
       (*(float *)((int)param_1 + 0x96) < *(float *)((int)param_1 + 0x92) * _DAT_007e6800)) {
      uVar4 = (**(code **)(*param_1 + 0x220))(0);
      *(undefined4 *)((int)param_1 + 0x9a) = uVar4;
      *(undefined4 *)((int)param_1 + 0x9e) = 0;
      return;
    }
    if (*(int *)((int)param_1 + 0x9e) != 0) {
      return;
    }
    if (*(float *)((int)param_1 + 0x96) <= *(float *)((int)param_1 + 0x92) * (float)_DAT_007e87a0) {
      return;
    }
    bVar2 = true;
    iVar3 = (**(code **)(*param_1 + 0x244))();
    if (*(int **)(iVar3 + 4) != (int *)0x0) {
      fStack_4 = 0.0;
      piVar5 = *(int **)(iVar3 + 4);
      do {
        piVar1 = (int *)piVar5[2];
        iVar3 = ((int *)*piVar5)[3];
        if ((iVar3 == *(int *)(param_1[0x23] + 0x12)) ||
           (iVar3 == *(int *)(*(int *)((int)param_1 + 0x9a) + 0x12))) {
          fVar6 = (float10)(**(code **)(*(int *)*piVar5 + 0xa4))();
          fStack_4 = (float)(fVar6 + (float10)fStack_4);
        }
        else {
          bVar2 = false;
        }
        piVar5 = piVar1;
      } while (piVar1 != (int *)0x0);
      if ((!bVar2) && (fStack_4 <= *(float *)((int)param_1 + 0x92) * (float)_DAT_007e87a0)) {
        return;
      }
    }
  }
  *(undefined4 *)((int)param_1 + 0x9e) = 1;
  return;
}


