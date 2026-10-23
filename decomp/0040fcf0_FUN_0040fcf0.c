// FUN_0040fcf0 @ 40fcf0 size=101

void __thiscall FUN_0040fcf0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      FUN_00405ad0(s_Couldn_t_remove____0082effc);
      return;
    }
    piVar2 = (int *)*puVar1;
    if ((param_2 == *piVar2) && (param_4 == piVar2[1])) break;
    puVar1 = (undefined4 *)puVar1[2];
  }
  (**(code **)(*param_1 + 0x1c))(puVar1);
  FUN_00796cd8(piVar2);
  FUN_0040fd60(param_2,param_2,param_4);
  return;
}


