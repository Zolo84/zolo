// FUN_006a0cd0 @ 6a0cd0 size=34

int * __thiscall FUN_006a0cd0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x90);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    piVar1 = (int *)*puVar2;
    puVar2 = (undefined4 *)puVar2[2];
  } while (*piVar1 != param_2);
  return piVar1;
}


