// FUN_0079cb55 @ 79cb55 size=39

bool __thiscall FUN_0079cb55(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  ushort unaff_SI;
  
  cVar1 = (**(code **)(*param_1 + 0x30))(param_3,0);
  return (*(ushort *)(param_1[4] + cVar1 * 2) & unaff_SI) != 0;
}


