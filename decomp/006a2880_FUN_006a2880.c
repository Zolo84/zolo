// FUN_006a2880 @ 6a2880 size=83

undefined4 * __thiscall FUN_006a2880(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_006a96f0(*(undefined4 *)(param_2 + 10));
  param_1[0xf] = param_2;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *param_1 = &PTR_FUN_007f57ac;
  FUN_007a630a((int)param_1 + 0x76,s__CAI_PLAN_UNDEFINED__00868db8);
  param_1[0x10] = param_1;
  puVar2 = (undefined4 *)((int)param_1 + 0x4e);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


