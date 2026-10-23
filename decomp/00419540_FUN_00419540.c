// FUN_00419540 @ 419540 size=37

uint __thiscall FUN_00419540(int *param_1,uint param_2)

{
  return (uint)(*param_1 + (param_1[1] + (param_1[2] + (param_1[3] + param_1[4] * 4) * 4) * 4) * 8)
         % param_2;
}


