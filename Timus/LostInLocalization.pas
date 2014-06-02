program lost;
var
  num:integer;
begin
  readln (num);
  case num of
    1..4: writeln('few');
    5..9: writeln('several');
    10..19: writeln('pack');
    20..49: writeln('lots');
    50..99: writeln('horde');
    100..249: writeln('throng');
    250..499: writeln('swarm');
    500..999: writeln('zounds');
    1000..2000: writeln('legion');
    end;
end.