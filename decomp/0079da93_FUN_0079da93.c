// FUN_0079da93 @ 79da93 size=67

uint FUN_0079da93(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 == param_4) goto LAB_0079dac9;
    uVar1 = *param_1;
    uVar2 = *param_3;
    if (uVar2 >= uVar1 && uVar2 != uVar1) goto LAB_0079daba;
    if (uVar2 < uVar1) {
      return 1;
    }
    param_3 = param_3 + 1;
  }
  if (param_3 == param_4) {
LAB_0079dac9:
    uVar3 = (uint)(param_1 != param_2);
  }
  else {
LAB_0079daba:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


