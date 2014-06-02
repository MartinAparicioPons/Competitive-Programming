program dwarf;
var
  p, m, c: real;
  k: integer;
begin
  readln(p, m, c);
  k:=0;
  while (p>m) do begin
    p:=p*(1-(c/100));
    k:=k+1;
    end;
  writeln(k);
end.