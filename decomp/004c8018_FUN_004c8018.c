// FUN_004c8018 @ 4c8018 size=90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004c8018(undefined4 param_1,int param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)(param_2 + 0x28) + 4))((int *)(param_2 + 0x28),param_1);
  fVar1 = _DAT_007e3d28;
  if ((iVar3 != 0) &&
     (cVar2 = FUN_004a3020(**(undefined4 **)(param_2 + 0x2c),0), fVar1 = _DAT_007e3d28,
     cVar2 != '\0')) {
    fVar1 = _DAT_007e3374;
  }
  return (float10)fVar1;
}


