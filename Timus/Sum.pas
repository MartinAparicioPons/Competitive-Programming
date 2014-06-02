program sumatoria;
var
  i, n:integer;
  sum:int64;
begin
  read(n);
  if (n=1) then
    write(1)
    else begin
      if (n>1) then
        for i:=1 to n do
          sum:=sum+i
        else
          for i:=1 downto n do
            sum:=sum+i;
      write(sum);
      end;
end.