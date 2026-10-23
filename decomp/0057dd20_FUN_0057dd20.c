// FUN_0057dd20 @ 57dd20 size=53

void __thiscall FUN_0057dd20(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if ((((param_3 < 0xb) && (piVar1 = *(int **)(param_1 + 0x34c + param_3 * 4), piVar1 != (int *)0x0)
       ) && ((char)piVar1[2] != '\0')) && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0xc))(piVar2,piVar1[1],param_2);
  }
  return;
}


