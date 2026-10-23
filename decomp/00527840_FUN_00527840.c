// FUN_00527840 @ 527840 size=48

float10 __fastcall FUN_00527840(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0.0;
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    fVar2 = (float10)FUN_0051a470();
    local_4 = (float)(fVar2 + (float10)local_4);
  }
  return (float10)local_4;
}


