// FUN_00688e30 @ 688e30 size=402

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00688e30(int param_1,float param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  float10 fVar10;
  int *local_10;
  float fStack_c;
  float local_8;
  
  iVar7 = (int)param_2;
  local_10 = (int *)0x0;
  FUN_004e9370(*(undefined4 *)(param_1 + 4));
  cVar8 = FUN_004e46e0();
  if (cVar8 != '\0') {
    return (int *)0x0;
  }
  local_8 = 0.0;
  piVar6 = *(int **)(param_1 + 0x48);
  while (piVar6 != (int *)0x0) {
    piVar1 = (int *)piVar6[2];
    piVar2 = (int *)*piVar6;
    cVar8 = (**(code **)(*(int *)((int)piVar2 + 0x22e) + 8))();
    piVar6 = piVar1;
    if (((cVar8 != '\0') && (*(char *)((int)piVar2 + 0x17b) == '\0')) &&
       (piVar2[3] == *(int *)(param_1 + 4))) {
      iVar9 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
      if (((0 < iVar9) && (cVar8 = (**(code **)(*param_3 + 0x24))(piVar2), cVar8 == '\0')) &&
         ((cVar8 = (**(code **)(*(int *)(iVar7 + 0x6e) + 0x24))(piVar2), cVar8 == '\0' &&
          (cVar8 = (**(code **)(*piVar2 + 0x9c))(), cVar8 != '\0')))) {
        fStack_c = 0.66;
        if ((*(char *)(iVar7 + 0x8c) != '\0') ||
           (fVar10 = (float10)FUN_006afaf0(0), fVar10 == (float10)_DAT_007e3380)) {
          fStack_c = 0.2;
        }
        fVar10 = (float10)FUN_0051a280();
        if ((float10)fStack_c <= fVar10) {
          uVar3 = *(undefined4 *)(iVar7 + 4);
          param_2 = 0.0;
          puVar5 = *(undefined4 **)((-(uint)(piVar2 != (int *)0x0) & (int)piVar2 + 0x22U) + 4);
          while (puVar5 != (undefined4 *)0x0) {
            puVar4 = (undefined4 *)puVar5[2];
            fVar10 = (float10)(**(code **)(*(int *)*puVar5 + 0x2c))(1,1,uVar3,0);
            param_2 = (float)(fVar10 + (float10)param_2);
            puVar5 = puVar4;
          }
          if ((local_10 == (int *)0x0) || (local_8 < param_2)) {
            local_10 = piVar2;
            local_8 = param_2;
          }
        }
      }
    }
  }
  return local_10;
}


