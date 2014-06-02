Program fourImps;
var
  input:integer;
begin
  read(input);
  if ((input mod 4 = 1) OR (input mod 4 = 2))
    then writeln('grimy')
    else writeln('black');
end.