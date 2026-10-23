// FUN_00486170 @ 486170 size=169

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00486170(int param_1,undefined4 param_2)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = FUN_0044beb0();
  if (cVar2 == '\0') {
    fVar1 = *(float *)(param_1 + 0x13c48) + *(float *)(param_1 + 0x334c);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x13c4c) + *(float *)(param_1 + 0x334c);
  }
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x334c) = fVar1;
  FUN_0044c100();
  FUN_0044bf20();
  FUN_004aafd0(param_2);
  *(undefined4 *)(param_1 + 0x248) = 1;
  piVar3 = &DAT_0089cad8;
  do {
    if ((*piVar3 != 0) && (*(float *)(param_1 + 0x1180e) < *(float *)(*piVar3 + 0x1180e))) {
      *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + 1;
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x89d038);
  return 0;
}


