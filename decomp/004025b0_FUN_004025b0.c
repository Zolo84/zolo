// FUN_004025b0 @ 4025b0 size=636

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004025b0(int *param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  double dVar6;
  int iVar7;
  
  *(int *)((int)param_2 + 0x54) = param_1[6];
  iVar7 = (**(code **)(*param_1 + 8))();
  uVar1 = *(undefined4 *)param_2;
  bVar5 = *param_2 < _DAT_007e32f0;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(int *)(param_2 + 10) =
       iVar7 + *(int *)((int)param_2 + 0x1c) * *(int *)((int)param_2 + 0x54) + *(int *)(param_2 + 3)
  ;
  uVar3 = *(undefined4 *)((int)param_2 + 4);
  uVar4 = *(undefined4 *)((int)param_2 + 0xc);
  if ((bVar5) && (_DAT_007e3348 < param_2[1])) {
    FUN_00402830(param_2);
  }
  if ((*param_2 < _DAT_007e3340) && (_DAT_007e32f0 < param_2[1])) {
    FUN_00402920(param_2);
  }
  if ((*param_2 < _DAT_007e3338) && (_DAT_007e3340 < param_2[1])) {
    FUN_00402a10(param_2);
  }
  if ((*param_2 < _DAT_007e3330) && (_DAT_007e3338 < param_2[1])) {
    FUN_00402b10(param_2);
  }
  if ((*param_2 < _DAT_007e3328) && (_DAT_007e3330 < param_2[1])) {
    FUN_00402c00(param_2);
  }
  if ((*param_2 < _DAT_007e3320) && (_DAT_007e3328 < param_2[1])) {
    FUN_00402d00(param_2);
  }
  if ((*param_2 < _DAT_007e3318) && (_DAT_007e3320 < param_2[1])) {
    FUN_00402e00(param_2);
  }
  if ((*param_2 < _DAT_007e3310) && (_DAT_007e3318 < param_2[1])) {
    FUN_00402ef0(param_2);
  }
  *param_2 = *param_2 - _DAT_007e3310;
  dVar6 = param_2[1] - _DAT_007e3310;
  param_2[1] = dVar6;
  if (_DAT_007e3348 < dVar6) {
    FUN_00402830(param_2);
  }
  if (_DAT_007e32f0 < param_2[1]) {
    FUN_00402920(param_2);
  }
  if (_DAT_007e3340 < param_2[1]) {
    FUN_00402a10(param_2);
  }
  if (_DAT_007e3338 < param_2[1]) {
    FUN_00402b10(param_2);
  }
  if (_DAT_007e3330 < param_2[1]) {
    FUN_00402c00(param_2);
  }
  if (_DAT_007e3328 < param_2[1]) {
    FUN_00402d00(param_2);
  }
  if (_DAT_007e3320 < param_2[1]) {
    FUN_00402e00(param_2);
  }
  if (_DAT_007e3318 < param_2[1]) {
    FUN_00402ef0(param_2);
  }
  *(undefined4 *)param_2 = uVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  *(undefined4 *)((int)param_2 + 4) = uVar3;
  *(undefined4 *)((int)param_2 + 0xc) = uVar4;
  (**(code **)(*param_1 + 0xc))();
  return;
}


