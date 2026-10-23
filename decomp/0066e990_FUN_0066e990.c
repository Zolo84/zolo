// FUN_0066e990 @ 66e990 size=192

int * FUN_0066e990(float param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uStack_4;
  
  piVar4 = (int *)0x0;
  iVar2 = FUN_00669ff0();
  iVar2 = (**(code **)(*(int *)(iVar2 + 0x22) + 4))();
  if (iVar2 != 0) {
    piVar4 = (int *)FUN_0066da10(param_1);
  }
  piVar3 = (int *)FUN_0066e560(param_1);
  if (piVar3 == (int *)0x0) {
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  param_1 = -9999999.0;
  uStack_4 = -9999999.0;
  if (piVar4 != (int *)0x0) {
    fVar5 = (float10)(**(code **)(*piVar4 + 0x208))();
    param_1 = (float)fVar5;
  }
  if (piVar3 != (int *)0x0) {
    fVar5 = (float10)(**(code **)(*piVar3 + 0x208))();
    uStack_4 = (float)fVar5;
  }
  if ((!bVar1) && (param_1 <= uStack_4)) {
    if (piVar4 != (int *)0x0) {
      (**(code **)*piVar4)(1);
    }
    return piVar3;
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)*piVar3)(1);
  }
  return piVar4;
}


