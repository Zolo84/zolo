// FUN_006a27b0 @ 6a27b0 size=62

bool __thiscall FUN_006a27b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  while ((puVar1 != (undefined4 *)0x0 &&
         (cVar2 = (**(code **)(*param_1 + 0xc))(*puVar1,puVar1[1],param_2,param_3), cVar2 == '\0')))
  {
    puVar1 = (undefined4 *)puVar1[3];
  }
  return puVar1 != (undefined4 *)0x0;
}


