program elections;
var
  can, i, n, m: integer;
  resul: real;
  elec:array[1..10000] of integer;
begin
  read(n, m);
  for i:=1 to n do
    elec[i]:=0;
  for i:=1 to m do begin
    readln(can);
    elec[can]:= elec[can] + 1;
    end;
  for i:=1 to n do
    writeln((elec[i]*100/m):0:2, '%');
end.