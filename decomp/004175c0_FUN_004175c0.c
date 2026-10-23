// FUN_004175c0 @ 4175c0 size=51

void __thiscall
FUN_004175c0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  
  while ((param_3 != (undefined4 *)0x0 &&
         (cVar1 = (**(code **)(*param_1 + 0xc))(*param_3,param_4), cVar1 == '\0'))) {
    param_3 = (undefined4 *)param_3[2];
  }
  *param_2 = param_3;
  return;
}


