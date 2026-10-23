// FUN_0069ab30 @ 69ab30 size=51

bool __thiscall FUN_0069ab30(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  while ((puVar1 != (undefined4 *)0x0 &&
         (cVar2 = (**(code **)(*param_1 + 0xc))(*puVar1,param_2), cVar2 == '\0'))) {
    puVar1 = (undefined4 *)puVar1[2];
  }
  return puVar1 != (undefined4 *)0x0;
}


