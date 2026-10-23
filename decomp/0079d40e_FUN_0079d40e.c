// FUN_0079d40e @ 79d40e size=170

void FUN_0079d40e(void)

{
  uint *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_EBP;
  float10 fVar6;
  
  FUN_007a9c5c();
  puVar3 = (undefined4 *)FUN_007aadca();
  *puVar3 = 0;
  uVar4 = FUN_0074c2a0(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = FUN_0079eb2b(unaff_EBP + -100,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar4);
  fVar6 = (float10)FUN_007a5b84(unaff_EBP + -100,unaff_EBP + -0x10,uVar4);
  *(double *)(unaff_EBP + -0x18) = (double)fVar6;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0074c280();
  cVar2 = FUN_007a1c0a(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar2 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x10) != unaff_EBP + -100) {
    piVar5 = (int *)FUN_007aadca();
    if (*piVar5 == 0) {
      **(undefined8 **)(unaff_EBP + 0x24) = *(undefined8 *)(unaff_EBP + -0x18);
      goto LAB_0079d49b;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_0079d49b:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


