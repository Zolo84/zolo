// FUN_004cb55a @ 4cb55a size=2681

void FUN_004cb55a(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int **ppiVar9;
  undefined1 *puVar10;
  int *piStack_154;
  int *local_14c;
  int *local_124;
  undefined4 *local_68;
  int *local_64;
  int *local_60;
  int local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007bf2cb;
  local_10 = ExceptionList;
  if (param_3 == (int *)0x0) {
    local_124 = (int *)0x0;
    ExceptionList = &local_10;
  }
  else {
    ExceptionList = &local_10;
    local_124 = (int *)(**(code **)**(undefined4 **)((int)param_1 + 0x482))();
  }
  local_14 = local_124;
  if ((param_3 != param_2) || (local_124 == (int *)0x0)) {
    local_18 = param_1[0xa4];
    if ((local_124 != (int *)0x0) && (param_3 != (int *)0x0)) {
      for (local_20 = 0; local_20 < local_18; local_20 = local_20 + 1) {
        piStack_154 = (int *)0x4cb635;
        local_24 = FUN_004e9370();
        piStack_154 = *(int **)(local_24 + 0x482);
        local_28 = piStack_154;
        if ((piStack_154 != (int *)0x0) && (piStack_154 != local_14)) {
          FUN_004ca017();
          piStack_154 = local_14;
          FUN_004ca017();
        }
      }
      piStack_154 = (int *)0x4cb682;
      (**(code **)(*local_14 + 0x10))();
      *(undefined4 *)((int)param_1 + 0x482) = 0;
      piStack_154 = (int *)0x4cb69e;
      cVar4 = (**(code **)(local_14[10] + 8))();
      if (cVar4 == '\0') {
        piStack_154 = (int *)0x4cb97c;
        iVar6 = (**(code **)(local_14[10] + 4))();
        if (1 < iVar6) {
          *(undefined4 *)((int)param_1 + 0x482) = 0;
          piStack_154 = param_1;
          FUN_004ca879();
          FUN_004c968b();
        }
      }
      else {
        local_34 = *(int **)((int)local_14 + 0x3e);
        while (local_34 != (int *)0x0) {
          local_38 = *local_34;
          ppiVar9 = &piStack_154;
          piStack_154 = local_34;
          piVar5 = local_14;
          local_34 = (int *)local_34[2];
          FUN_004ccfe0(&piStack_154,local_14);
          FUN_004c7fad(ppiVar9,piVar5);
          piVar5 = (int *)FUN_004ccfe0();
          (**(code **)(*piVar5 + 0x1c))();
        }
        for (local_30 = (int *)0x1; (int)local_30 < DAT_00877690;
            local_30 = (int *)((int)local_30 + 1)) {
          piStack_154 = local_30;
          local_3c = FUN_004e9370();
          piStack_154 = *(int **)(local_3c + 0x482);
          if (piStack_154 != (int *)0x0) {
            local_40 = *(undefined4 *)(local_3c + 0x482);
            ppiVar9 = &piStack_154;
            piVar5 = local_14;
            FUN_004ccfe0(&piStack_154,local_14);
            FUN_004c7fad(ppiVar9,piVar5);
            piVar5 = (int *)FUN_004ccfe0();
            cVar4 = (**(code **)(*piVar5 + 0x1c))();
            if (cVar4 != '\0') {
              local_44 = 1;
            }
          }
        }
        for (local_2c = 0; local_2c < 0x158; local_2c = local_2c + 1) {
          local_48 = (&DAT_0089cad8)[local_2c];
          if (local_48 != 0) {
            local_4c = *(undefined4 **)(local_48 + 0xe86e);
            while (local_4c != (undefined4 *)0x0) {
              local_50 = *local_4c;
              piStack_154 = local_14;
              local_4c = (undefined4 *)local_4c[2];
              FUN_004c7fad(&local_54);
              if (local_54 != 0) {
                piVar5 = (int *)FUN_004ccfe0();
                (**(code **)(*piVar5 + 0x1c))();
              }
            }
          }
        }
        piStack_154 = (int *)0x4cb8e6;
        piStack_154 = (int *)(**(code **)*local_14)();
        (**(code **)(*param_3 + 0xb4))();
        (**(code **)*local_14)();
        piStack_154 = (int *)0x4cb905;
        FUN_006adb20();
        if (local_14 != (int *)0x0) {
          FUN_004ca57b();
          piStack_154 = (int *)0x4cb949;
          FUN_00796cd8();
        }
        local_14 = (int *)0x0;
      }
    }
    local_1c = (int *)0x0;
    if (param_2 != (int *)0x0) {
      bVar3 = false;
      for (local_20 = 0; local_20 < local_18; local_20 = local_20 + 1) {
        piStack_154 = (int *)0x4cba07;
        iVar6 = FUN_004e9370();
        piVar5 = local_1c;
        if (((*(int **)(iVar6 + 0x3d8) == param_2) &&
            (piVar5 = (int *)(**(code **)**(undefined4 **)(iVar6 + 0x482))(), local_1c != (int *)0x0
            )) && (local_1c != piVar5)) {
          iVar6 = (**(code **)(local_1c[10] + 4))();
          iVar7 = (**(code **)(piVar5[10] + 4))();
          local_60 = piVar5;
          if (iVar6 < iVar7) {
            local_60 = local_1c;
            local_1c = piVar5;
          }
          if (bVar3) {
            FUN_004c9dd4();
            FUN_004c9dd4();
          }
          else {
            bVar3 = true;
          }
          piStack_154 = (int *)0x4cbae8;
          FUN_004cb3ad();
          local_68 = *(undefined4 **)((int)local_1c + 0x3e);
          while (local_68 != (undefined4 *)0x0) {
            puVar1 = (undefined4 *)local_68[2];
            piVar5 = (int *)*local_68;
            puVar10 = &stack0xfffffeb0;
            piStack_154 = local_60;
            FUN_004ccfe0(&stack0xfffffeb0);
            FUN_004c7fad(puVar10);
            piStack_154 = (int *)0x4cbb66;
            piVar8 = (int *)FUN_004ccfe0();
            piStack_154 = (int *)0x4cbb7d;
            (**(code **)(*piVar8 + 0x1c))();
            local_68 = puVar1;
            if ((int *)*piVar5 == local_60) {
              piStack_154 = (int *)0x4cbba8;
              (**(code **)(*(int *)((int)local_1c + 0x3a) + 0x18))();
            }
          }
          piStack_154 = (int *)0x4cbbbf;
          (**(code **)(*param_2 + 0xb4))();
          piStack_154 = (int *)0x4cbbc8;
          FUN_006adb20();
          if (local_60 != (int *)0x0) {
            FUN_004ca57b();
            piStack_154 = (int *)0x4cbc0c;
            FUN_00796cd8();
          }
          local_64 = (int *)local_1c[0xb];
          while (piVar5 = local_1c, local_64 != (int *)0x0) {
            piVar5 = (int *)local_64[2];
            if (*(int *)(*local_64 + 0x254) == 8) {
              bVar2 = false;
            }
            else if (*(int *)(*local_64 + 0x254) == 9) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            local_64 = piVar5;
            if (bVar2) {
              FUN_004ea310();
            }
          }
        }
        local_1c = piVar5;
      }
      if (local_1c == (int *)0x0) {
        piStack_154 = (int *)0x4cbcf1;
        local_14c = operator_new(0x70);
        if (local_14c == (int *)0x0) {
          local_14c = (int *)0x0;
        }
        else {
          local_14c[2] = 0;
          local_14c[3] = 0;
          local_14c[4] = 0;
          *(undefined1 *)(local_14c + 5) = 0;
          local_14c[1] = (int)&PTR_LAB_007e4b04;
          *(undefined4 *)((int)local_14c + 0x1a) = 0;
          *(undefined4 *)((int)local_14c + 0x1e) = 0;
          *(undefined4 *)((int)local_14c + 0x22) = 0;
          *(undefined1 *)((int)local_14c + 0x26) = 0;
          *(undefined ***)((int)local_14c + 0x16) = &PTR_LAB_007e4b04;
          local_14c[0xb] = 0;
          local_14c[0xc] = 0;
          local_14c[0xd] = 0;
          *(undefined1 *)(local_14c + 0xe) = 0;
          local_14c[10] = (int)&PTR_FUN_007e6eac;
          local_8 = 3;
          FUN_004cd140();
          local_14c[0x13] = 0;
          *(undefined1 *)(local_14c + 0x14) = 0;
          *local_14c = (int)&PTR_FUN_007e7cf8;
          *(undefined2 *)((int)local_14c + 0x6a) = 0;
          *(undefined1 *)(local_14c + 0x1a) = 0;
          *(undefined1 *)((int)local_14c + 0x67) = 0;
          *(undefined1 *)((int)local_14c + 0x66) = 0;
          *local_14c = (int)&PTR_FUN_007e7d34;
          *(undefined4 *)((int)local_14c + 0x56) = 0;
          *(undefined4 *)((int)local_14c + 0x5a) = 0;
          *(undefined4 *)((int)local_14c + 0x5e) = 0;
          local_14c[0x1b] = 0;
        }
        local_8 = 0xffffffff;
        local_1c = local_14c;
      }
      piStack_154 = (int *)0x4cbeee;
      (**(code **)(*local_1c + 0xc))();
      FUN_004c968b();
    }
    *(int **)((int)param_1 + 0x482) = local_1c;
    if (local_1c != (int *)0x0) {
      for (local_20 = 0; local_20 < local_18; local_20 = local_20 + 1) {
        piStack_154 = (int *)0x4cbf4a;
        iVar6 = FUN_004e9370();
        piVar5 = *(int **)(iVar6 + 0x482);
        if ((piVar5 != (int *)0x0) && (piVar5 != local_1c)) {
          piStack_154 = piVar5;
          FUN_004ca017();
          piStack_154 = local_1c;
          FUN_004ca017();
        }
      }
      iVar6 = (**(code **)(local_1c[10] + 4))();
      if (iVar6 == 1) {
        piStack_154 = (int *)0x4cbfb8;
        (**(code **)(*param_2 + 0xb0))();
      }
      FUN_004c968b();
    }
    FUN_004cc729();
  }
  ExceptionList = local_10;
  return;
}


