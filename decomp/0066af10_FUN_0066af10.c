// FUN_0066af10 @ 66af10 size=83

int * __thiscall FUN_0066af10(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  float10 fVar4;
  float local_4;
  
  puVar1 = *(undefined4 **)(param_1 + 10);
  piVar3 = (int *)0x0;
  local_4 = -999999.0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    piVar2 = (int *)*puVar1;
    fVar4 = (float10)(**(code **)(*piVar2 + 0x18))(param_2);
    if ((float10)local_4 < fVar4) {
      local_4 = (float)fVar4;
      piVar3 = piVar2;
    }
  }
  (**(code **)(*(int *)(param_2 + 0x22) + 4))();
  return piVar3;
}


