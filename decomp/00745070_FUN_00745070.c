// FUN_00745070 @ 745070 size=249

void __fastcall FUN_00745070(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  *param_1 = &PTR_FUN_007fa228;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = param_1 + 1;
  }
  piVar1 = (int *)param_1[1];
  piVar2 = (int *)*piVar1;
  if (param_1[3] == 0) {
    while (piVar2 != piVar1) {
      FUN_0074a520();
      FUN_00749060(local_4,piVar2);
    }
  }
  else {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_00d4bdfc) {
      do {
        FUN_00749460(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_00796cd8(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_00d4bdfc);
    }
    *(int **)(param_1[1] + 4) = DAT_00d4bdfc;
    param_1[3] = 0;
    *(undefined4 *)param_1[1] = param_1[1];
    *(undefined4 *)(param_1[1] + 8) = param_1[1];
    FUN_00748ca0(local_8);
  }
  FUN_00796cd8(param_1[1]);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_00798acc();
  piVar1 = DAT_00d4bdfc;
  DAT_00d4bdf8 = DAT_00d4bdf8 + -1;
  piVar2 = (int *)0x0;
  if (DAT_00d4bdf8 == 0) {
    DAT_00d4bdfc = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_00798b68();
  if (piVar2 != (int *)0x0) {
    FUN_00796cd8(piVar2);
  }
  return;
}


