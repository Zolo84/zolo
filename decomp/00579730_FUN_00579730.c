// FUN_00579730 @ 579730 size=41

void __thiscall FUN_00579730(undefined4 *param_1,code *param_2)

{
  do {
    (*param_2)(*param_1);
    if (param_1[1] != 0) {
      FUN_00579730(param_2);
    }
    param_1 = (undefined4 *)param_1[2];
  } while (param_1 != (undefined4 *)0x0);
  return;
}


