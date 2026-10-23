// FUN_0067a800 @ 67a800 size=51

bool __thiscall FUN_0067a800(int *param_1,undefined4 param_2)

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


