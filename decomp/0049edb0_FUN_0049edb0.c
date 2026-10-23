// FUN_0049edb0 @ 49edb0 size=92

undefined4 __fastcall FUN_0049edb0(int param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined2 *)FUN_0044df10();
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x361a) + 0x28))
                            (&stack0x00000004,*puVar1,
                             (short)((uint)*(undefined4 *)(puVar1 + 1) >> 0x10));
  if (*piVar2 == 0) {
    uVar3 = FUN_0075a2b0(param_1);
    switch(uVar3) {
    case 0:
    case 6:
      return 1;
    }
  }
  return 0;
}


