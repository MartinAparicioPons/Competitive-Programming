var
  n,i,ans:integer;
  k,temp:cardinal;
begin
  readln(n);
  for i:=1 to n do
  begin
    readln(k);
    dec(k);
    if k=0 then ans:=1
    else
    begin
      k:=k*2;
      temp:=trunc(sqrt(k));
      if temp*(temp+1)=k then ans:=1
      else ans:=0;
    end;
    if i=1 then write(ans) else write(' ',ans);
  end;
  writeln;
end.