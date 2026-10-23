// FUN_0072a2c0 @ 72a2c0 size=135

undefined1 __fastcall FUN_0072a2c0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 0x23a7) == '\0') {
    cVar1 = (**(code **)(*(int *)(param_1 + 0x125a) + 0x30))(*(undefined4 *)(param_1 + 0x24));
    if ((cVar1 != '\0') &&
       (puVar2 = *(undefined4 **)(param_1 + 0x1272), puVar2 != (undefined4 *)0x0)) {
      do {
        cVar1 = FUN_007119e0(*puVar2);
        if (cVar1 != '\0') {
          return 1;
        }
        puVar2 = (undefined4 *)puVar2[2];
      } while (puVar2 != (undefined4 *)0x0);
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(*(int *)(param_1 + 0x1294) + 0x30))(*(undefined4 *)(param_1 + 0x24));
    if (cVar1 != '\0') {
      for (puVar2 = *(undefined4 **)(param_1 + 0x1272); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)puVar2[2]) {
        cVar1 = FUN_007119e0(*puVar2);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


