gets.to_i.times{x,y=gets.split(" ").map(&:to_i);d=(x.abs-y.abs).abs;puts (d<2)?"Possible":"Impossible";}
