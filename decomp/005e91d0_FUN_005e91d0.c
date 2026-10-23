// FUN_005e91d0 @ 5e91d0 size=62

void __thiscall
FUN_005e91d0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  
  while ((param_3 != (undefined4 *)0x0 &&
         (cVar1 = (**(code **)(*param_1 + 0xc))(*param_3,param_3[1],param_4,param_5), cVar1 == '\0')
         )) {
    param_3 = (undefined4 *)param_3[3];
  }
  *param_2 = param_3;
  return;
}


