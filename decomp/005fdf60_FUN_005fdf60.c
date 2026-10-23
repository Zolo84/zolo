// FUN_005fdf60 @ 5fdf60 size=485

int __fastcall FUN_005fdf60(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  *(undefined1 *)(param_1 + 0xbe) = 0;
  puVar3 = (undefined4 *)(param_1 + 0xd4);
  iVar5 = 5;
  do {
    puVar3[-5] = 0xffffffff;
    *puVar3 = 0xffffffff;
    puVar3[5] = 0xffffffff;
    puVar3[10] = 0xffffffff;
    puVar3[0xf] = 0xffffffff;
    puVar3[0x14] = 0xffffffff;
    puVar3[0x19] = 0xffffffff;
    puVar3[0x1e] = 0xffffffff;
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x8a) + 0x9c) + 4);
  if (piVar6 != (int *)0x0) {
    puVar3 = (undefined4 *)(param_1 + 0xc0);
    puVar4 = (undefined4 *)(param_1 + 0xe8);
    puVar7 = (undefined4 *)(param_1 + 0x124);
    do {
      piVar1 = (int *)piVar6[2];
      iVar5 = *piVar6;
      iVar2 = *(int *)(iVar5 + 0x13e);
      if (iVar2 == 0) {
        *puVar3 = *(undefined4 *)(iVar5 + 0x136);
        puVar3 = puVar3 + 1;
      }
      else if (iVar2 == 1) {
        *puVar4 = *(undefined4 *)(iVar5 + 0x136);
        puVar4 = puVar4 + 1;
      }
      else if (iVar2 == 3) {
        puVar7[-5] = *(undefined4 *)(iVar5 + 0x136);
        *puVar7 = *(undefined4 *)(iVar5 + 0x13a);
        puVar7 = puVar7 + 1;
      }
      piVar6 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x8e) + 0x9c) + 4);
  if (piVar6 != (int *)0x0) {
    puVar3 = (undefined4 *)(param_1 + 0xd4);
    puVar4 = (undefined4 *)(param_1 + 0xfc);
    puVar7 = (undefined4 *)(param_1 + 0x14c);
    do {
      piVar1 = (int *)piVar6[2];
      iVar5 = *piVar6;
      iVar2 = *(int *)(iVar5 + 0x13e);
      if (iVar2 == 0) {
        *puVar3 = *(undefined4 *)(iVar5 + 0x136);
        puVar3 = puVar3 + 1;
      }
      else if (iVar2 == 1) {
        *puVar4 = *(undefined4 *)(iVar5 + 0x136);
        puVar4 = puVar4 + 1;
      }
      else if (iVar2 == 3) {
        puVar7[-5] = *(undefined4 *)(iVar5 + 0x136);
        *puVar7 = *(undefined4 *)(iVar5 + 0x13a);
        puVar7 = puVar7 + 1;
      }
      piVar6 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  iVar5 = *(int *)(param_1 + 0x8a);
  iVar2 = *(int *)(param_1 + 0x8e);
  *(float *)(param_1 + 0x96) =
       *(float *)(*(int *)(iVar5 + 0xba) + 0xa0) - *(float *)(*(int *)(iVar2 + 0xba) + 0xa0);
  *(float *)(param_1 + 0x9a) =
       *(float *)(*(int *)(iVar5 + 0xbe) + 0xa0) - *(float *)(*(int *)(iVar2 + 0xbe) + 0xa0);
  *(float *)(param_1 + 0x9e) =
       *(float *)(*(int *)(iVar5 + 0xc2) + 0xa0) - *(float *)(*(int *)(iVar2 + 0xc2) + 0xa0);
  *(float *)(param_1 + 0xa2) =
       *(float *)(*(int *)(iVar5 + 0xc6) + 0xa0) - *(float *)(*(int *)(iVar2 + 0xc6) + 0xa0);
  *(float *)(param_1 + 0xa6) =
       *(float *)(*(int *)(iVar5 + 0xca) + 0xa0) - *(float *)(*(int *)(iVar2 + 0xca) + 0xa0);
  *(float *)(param_1 + 0xaa) =
       *(float *)(*(int *)(iVar5 + 0xce) + 0xa0) - *(float *)(*(int *)(iVar2 + 0xce) + 0xa0);
  return param_1 + 0x92;
}


