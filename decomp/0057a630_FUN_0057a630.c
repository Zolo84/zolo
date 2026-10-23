// FUN_0057a630 @ 57a630 size=123

void __thiscall FUN_0057a630(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_00bd0540 = 0;
  (**(code **)(**(int **)(param_1 + 0x1a) + 0x20))(*(int **)(param_1 + 0x1a),0,0,param_2);
  iVar1 = 0;
  puVar2 = param_2;
  if (0 < *(int *)(param_1 + 0x52a)) {
    do {
      if ((undefined1 *)param_2[2] == &LAB_00579f60) {
        *puVar2 = *param_2;
        puVar2[1] = param_2[1];
        puVar2[2] = param_2[2];
        puVar2 = puVar2 + 3;
      }
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 3;
    } while (iVar1 < *(int *)(param_1 + 0x52a));
  }
  return;
}


