// FUN_004ceca0 @ 4ceca0 size=80

bool __thiscall FUN_004ceca0(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *local_8;
  
  for (local_8 = (undefined4 *)param_1[1]; local_8 != (undefined4 *)0x0;
      local_8 = (undefined4 *)local_8[2]) {
    cVar1 = (**(code **)(*param_1 + 0xc))(*local_8,param_2);
    if (cVar1 != '\0') break;
  }
  return local_8 != (undefined4 *)0x0;
}


