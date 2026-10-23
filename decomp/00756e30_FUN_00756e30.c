// FUN_00756e30 @ 756e30 size=137

void FUN_00756e30(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_2 + 4);
  if (((*(int *)(param_2 + 8) != DAT_00d4c214) || (*piVar2 != DAT_00d4c210)) &&
     ((*(int *)(param_3 + 8) != DAT_00d4c214 || (*(int *)(param_3 + 4) != DAT_00d4c210)))) {
    puVar1 = _malloc(0x1c);
    *puVar1 = 0x1c;
    if (param_2 == 0) {
      piVar2 = &DAT_00d4c210;
    }
    puVar1[1] = *piVar2;
    puVar1[2] = piVar2[1];
    puVar1[3] = *(undefined4 *)(param_3 + 4);
    puVar1[4] = *(undefined4 *)(param_3 + 8);
    puVar1[5] = param_4;
    puVar1[6] = param_5;
    FUN_007579c0(puVar1);
    FUN_007a77fa(puVar1);
  }
  return;
}


