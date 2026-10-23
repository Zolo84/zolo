// FUN_007a9811 @ 7a9811 size=28

exception * __thiscall FUN_007a9811(exception *param_1,byte param_2)

{
  exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00796cd8(param_1);
  }
  return param_1;
}


