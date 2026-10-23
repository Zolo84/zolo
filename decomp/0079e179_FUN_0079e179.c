// FUN_0079e179 @ 79e179 size=196

void FUN_0079e179(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  sVar3 = FUN_0079c11f(0x3a);
  iVar2 = in_stack_00000020;
  uVar4 = FUN_007a058e(&param_2,&stack0x00000010,0,0x17,in_stack_00000020 + 8);
  puVar1 = in_stack_0000001c;
  *in_stack_0000001c = *in_stack_0000001c | uVar4;
  if (*in_stack_0000001c == 0) {
    if ((char)param_3 == '\0') {
      Peek();
    }
    if (param_3._2_2_ != sVar3) goto LAB_0079e1e7;
    FUN_007a06e5();
    uVar4 = FUN_007a058e(&param_2,&stack0x00000010,0,0x3b,iVar2 + 4);
    *puVar1 = *puVar1 | uVar4;
  }
  else {
LAB_0079e1e7:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_3 == '\0') {
      Peek();
    }
    if (param_3._2_2_ == sVar3) {
      FUN_007a06e5();
      uVar4 = FUN_007a058e(&param_2,&stack0x00000010,0,0x3b,iVar2);
      *puVar1 = *puVar1 | uVar4;
      goto LAB_0079e228;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_0079e228:
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


