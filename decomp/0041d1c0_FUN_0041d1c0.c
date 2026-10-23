// FUN_0041d1c0 @ 41d1c0 size=545

void FUN_0041d1c0(int *param_1,int *param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined4 *param_6,undefined4 *param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == (int *)0x0) {
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
      return;
    }
  }
  else {
    if ((char)param_2[0x4e4] == '\0') {
      if (param_1 != (int *)0x0) {
        *param_1 = -1;
      }
      *(undefined4 *)((int)param_2 + 0x13c2) = 0xffffffff;
      return;
    }
    if ((*(byte *)(*param_2 + 0xc) & 0x20) != 0) {
LAB_0041d305:
      if (param_1 != (int *)0x0) {
        *param_1 = -6;
      }
      *(undefined4 *)((int)param_2 + 0x13c2) = 0xfffffffa;
      return;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0;
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = 0;
    }
    if (param_3 == 0) {
      if (*(int *)((int)param_2 + 0x13c2) == 0) {
        do {
          *(undefined4 *)((int)param_2 + 0x13a6) = 5000;
          *(int **)((int)param_2 + 0x13a2) = param_2 + 1;
          iVar2 = FUN_0041b8a0((int)param_2 + 0x1392,2);
          if ((iVar2 != 3) && (iVar2 != 4)) {
            if (param_1 != (int *)0x0) {
              *param_1 = iVar2;
            }
            *(int *)((int)param_2 + 0x13c2) = iVar2;
            return;
          }
          if ((*(uint *)((int)param_2 + 0x13a6) < 5000) &&
             ((iVar4 = 5000 - *(uint *)((int)param_2 + 0x13a6),
              iVar3 = FUN_007a6a0f(param_2 + 1,1,iVar4,*param_2), iVar4 != iVar3 ||
              ((*(byte *)(*param_2 + 0xc) & 0x20) != 0)))) goto LAB_0041d305;
        } while (iVar2 != 4);
      }
      if (((*(byte *)(*param_2 + 0xc) & 0x20) == 0) &&
         (FUN_007a7fb7(*param_2), (*(byte *)(*param_2 + 0xc) & 0x20) != 0)) goto LAB_0041d305;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)((int)param_2 + 0x139a);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)((int)param_2 + 0x139e);
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = *(undefined4 *)((int)param_2 + 0x13aa);
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = *(undefined4 *)((int)param_2 + 0x13ae);
    }
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
    }
    *(undefined4 *)((int)param_2 + 0x13c2) = 0;
    if (((param_2 != (int *)0xffffec6e) &&
        (piVar1 = *(int **)((int)param_2 + 0x13b2), piVar1 != (int *)0x0)) &&
       (*piVar1 == (int)param_2 + 0x1392)) {
      if (piVar1[4] != 0) {
        (**(code **)((int)param_2 + 0x13ba))(*(undefined4 *)((int)param_2 + 0x13be),piVar1[4]);
      }
      if (piVar1[5] != 0) {
        (**(code **)((int)param_2 + 0x13ba))(*(undefined4 *)((int)param_2 + 0x13be),piVar1[5]);
      }
      if (piVar1[6] != 0) {
        (**(code **)((int)param_2 + 0x13ba))(*(undefined4 *)((int)param_2 + 0x13be),piVar1[6]);
      }
      (**(code **)((int)param_2 + 0x13ba))
                (*(undefined4 *)((int)param_2 + 0x13be),*(undefined4 *)((int)param_2 + 0x13b2));
      *(undefined4 *)((int)param_2 + 0x13b2) = 0;
    }
    FUN_007a77fa(param_2);
  }
  return;
}


