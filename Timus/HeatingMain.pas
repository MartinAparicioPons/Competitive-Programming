program heating;
var
  sum: real;
  i, max: integer;
  n: longint;
begin
  sum:=0;
  readln(max);
  for i:= 1 to max do begin
    read(n);
    sum:=sum+n;
    end;
  sum:= sum / max;
  writeln(sum :0:6);
end.