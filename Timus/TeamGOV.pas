program teamGOV;
var
  i, m, m1:longword;
  n:int64;
  aux:real;
  bool:boolean;
begin
  readln(n, m);
  n:=n*3;
  aux:=0;
  bool:=false;
  for i:=1 to m do begin
    readln(m1);
    aux:=aux+m1;
    if (aux > n) and (not bool) then begin
      bool:= true;
      writeln('Free after ', i, ' times.');
      end;
    end;
  if not bool then writeln('Team.GOV!');
end.