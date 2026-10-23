// FUN_0045b090 @ 45b090 size=52

bool __thiscall FUN_0045b090(int *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  
  puVar1 = (undefined2 *)param_1[1];
  while ((puVar1 != (undefined2 *)0x0 &&
         (cVar2 = (**(code **)(*param_1 + 0xc))(*puVar1,param_2), cVar2 == '\0'))) {
    puVar1 = *(undefined2 **)(puVar1 + 3);
  }
  return puVar1 != (undefined2 *)0x0;
}


