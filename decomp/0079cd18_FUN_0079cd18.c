// FUN_0079cd18 @ 79cd18 size=44

undefined2 *
FUN_0079cd18(undefined2 *param_1,undefined2 *param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = FUN_007a5796(*param_1);
    *param_4 = uVar1;
    param_4 = param_4 + 1;
  }
  return param_1;
}


