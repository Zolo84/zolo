// FUN_0066a574 @ 66a574 size=242

float10 FUN_0066a574(void)

{
  float fVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  int unaff_EDI;
  float10 fVar5;
  int iStack00000004;
  float fStack00000008;
  int *in_stack_00000014;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = (undefined2)unaff_EBX;
  uStack_2 = (undefined2)((uint)unaff_EBX >> 0x10);
  iStack00000004 = *(int *)(unaff_EDI + 0x1e);
  fStack00000008 = *(float *)(unaff_EDI + 0x1a);
  if ((float)in_stack_00000014[0xbc] <= (float)in_stack_00000014[0xbd]) {
    fVar1 = (float)in_stack_00000014[0xbc];
  }
  else {
    fVar1 = (float)in_stack_00000014[0xbd];
  }
  if (fVar1 < *(float *)(unaff_EDI + 0x1e)) {
    if ((float)in_stack_00000014[0xbc] <= (float)in_stack_00000014[0xbd]) {
      iStack00000004 = in_stack_00000014[0xbc];
    }
    else {
      iStack00000004 = in_stack_00000014[0xbd];
    }
  }
  fVar5 = (float10)(**(code **)(*in_stack_00000014 + 0x28))();
  if (fVar5 < (float10)*(float *)(unaff_EDI + 0x1a)) {
    fVar5 = (float10)(**(code **)(*in_stack_00000014 + 0x28))();
    fStack00000008 = (float)fVar5;
  }
  fVar1 = fStack00000008;
  iVar3 = iStack00000004;
  fVar5 = (float10)(**(code **)(**(int **)(unaff_EDI + 4) + 0x1c))
                             (in_stack_00000014,iStack00000004,fStack00000008);
  for (puVar2 = *(undefined2 **)(unaff_EDI + 0xc); fStack00000008 = (float)fVar5,
      puVar2 != (undefined2 *)0x0; puVar2 = *(undefined2 **)(puVar2 + 5)) {
    uStack_4 = *puVar2;
    uStack_2 = (undefined2)*(undefined4 *)(puVar2 + 1);
    iVar4 = FUN_00428ee0(&uStack_4);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + -8;
    }
    fVar5 = (float10)(**(code **)(**(int **)(unaff_EDI + 4) + 0x1c))(iVar4,iVar3,fVar1);
    fVar5 = fVar5 + (float10)fStack00000008;
  }
  return (float10)fStack00000008;
}


