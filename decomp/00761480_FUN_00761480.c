// FUN_00761480 @ 761480 size=192

void __thiscall
FUN_00761480(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (9 < param_2) {
    param_2 = 9;
  }
  *(int *)(param_1 + 0xe) = param_2;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (9 < param_3) {
    param_3 = 9;
  }
  *(int *)(param_1 + 0x12) = param_3;
  if (param_4 < 0) {
    param_4 = 0;
  }
  else if (9 < param_4) {
    param_4 = 9;
  }
  *(int *)(param_1 + 0x16) = param_4;
  if (param_5 < 0) {
    param_5 = 0;
  }
  else if (9 < param_5) {
    param_5 = 9;
  }
  *(int *)(param_1 + 0x1a) = param_5;
  if (param_6 < 0) {
    param_6 = 0;
  }
  else if (9 < param_6) {
    param_6 = 9;
  }
  *(int *)(param_1 + 0x1e) = param_6;
  if (param_7 < 0) {
    param_7 = 0;
  }
  else if (9 < param_7) {
    param_7 = 9;
  }
  *(int *)(param_1 + 0x22) = param_7;
  if (param_8 < 0) {
    *(undefined4 *)(param_1 + 0x26) = 0;
    FUN_00761380();
    return;
  }
  if (9 < param_8) {
    param_8 = 9;
  }
  *(int *)(param_1 + 0x26) = param_8;
  FUN_00761380();
  return;
}


