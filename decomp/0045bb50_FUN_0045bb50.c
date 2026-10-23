// FUN_0045bb50 @ 45bb50 size=43

void __thiscall FUN_0045bb50(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  *param_2 = *puVar1;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(puVar1 + 1);
  *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)((int)puVar1 + 6);
  param_2[2] = puVar1[2];
  return;
}


