program mm8ftw;
var
  i,k,b,r,y:integer;
  p:array[1..3] of string[10];
begin
  readln(b,r,y);
  readln(k);
  for i:=1 to k do
    readln(p[i]);
  if(k=3) then writeln(b*r*y)
  else
    if(k=2) then begin
      if((p[1]='Red') or (p[2]='Red')) then begin
        if((p[1]='Blue') or (p[2]='Blue')) then
          writeln(r*b)
          else
            writeln(r*y);
        end else writeln(y*b);
      end else
        if (p[1]='Red') then writeln(r)
          else if(p[1]='Blue') then writeln(b)
            else writeln(y);
end.