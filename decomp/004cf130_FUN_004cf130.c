// FUN_004cf130 @ 4cf130 size=91

undefined4 * __thiscall
FUN_004cf130(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  
  for (; param_3 != (undefined4 *)0x0; param_3 = (undefined4 *)param_3[2]) {
    cVar1 = (**(code **)(*param_1 + 0xc))(*param_3,param_4);
    if (cVar1 != '\0') break;
  }
  *param_2 = param_3;
  return param_2;
}


