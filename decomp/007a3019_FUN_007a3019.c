// FUN_007a3019 @ 7a3019 size=177

void FUN_007a3019(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar2 = in_stack_00000020;
  uVar3 = FUN_007a442a(&param_2,&stack0x00000010,0,0x17,in_stack_00000020 + 8);
  puVar1 = in_stack_0000001c;
  *in_stack_0000001c = *in_stack_0000001c | uVar3;
  if (*in_stack_0000001c == 0) {
    if ((char)param_3 == '\0') {
      Peek();
    }
    if (param_3._1_1_ != ':') goto LAB_007a3078;
    FUN_0079b543();
    uVar3 = FUN_007a442a(&param_2,&stack0x00000010,0,0x3b,iVar2 + 4);
    *puVar1 = *puVar1 | uVar3;
  }
  else {
LAB_007a3078:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_3 == '\0') {
      Peek();
    }
    if (param_3._1_1_ == ':') {
      FUN_0079b543();
      uVar3 = FUN_007a442a(&param_2,&stack0x00000010,0,0x3b,iVar2);
      *puVar1 = *puVar1 | uVar3;
      goto LAB_007a30b5;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_007a30b5:
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


