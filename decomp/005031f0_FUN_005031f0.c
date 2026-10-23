// FUN_005031f0 @ 5031f0 size=39

void FUN_005031f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_00507a50(puVar1);
  return;
}


