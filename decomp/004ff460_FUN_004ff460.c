// FUN_004ff460 @ 4ff460 size=220

void __fastcall FUN_004ff460(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(char *)(param_1 + 0xe6) != '\0') {
    fVar2 = (float10)FUN_00467290(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x88),
                                  *(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x9c));
    *(float *)(param_1 + 0xce) = (float)fVar2;
    iVar1 = FUN_00466b90(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x88),
                         *(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x9c),1);
    *(float *)(param_1 + 0xd2) = (float)iVar1;
    fVar2 = (float10)FUN_004673a0(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x88),
                                  *(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x9c));
    *(float *)(param_1 + 0xd6) = (float)fVar2;
    fVar2 = (float10)FUN_004a5ae0();
    *(float *)(param_1 + 0xda) = (float)(fVar2 * (float10)*(float *)(param_1 + 0xce));
    fVar2 = (float10)FUN_004a5af0();
    *(undefined4 *)(param_1 + 0xe2) = *(undefined4 *)(param_1 + 0xd6);
    *(undefined1 *)(param_1 + 0xe6) = 0;
    *(float *)(param_1 + 0xde) = (float)(fVar2 * (float10)*(float *)(param_1 + 0xd2));
  }
  return;
}


