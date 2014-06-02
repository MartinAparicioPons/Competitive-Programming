program esrever;
const u : set of char = ['A'..'Z','a'..'z'];
var
  s   : string;
  i   : integer;
  ch  : char;
begin
  s := '';
  while not (eof) do
    begin
      read(ch);
      if ch in u then s := ch+s
                 else begin
                        write(s);
                        write(ch);
                        s := '';
                      end;
    end;
  if ch in u then write(s);
end.