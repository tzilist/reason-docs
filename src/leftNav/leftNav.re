module LeftNav = {
  include ReactRe.Component;
  type props = unit;
  let name = "LeftNav";
  let render _ => <div>(ReactRe.stringToElement "hi")</div>;
};

include ReactRe.CreateComponent LeftNav;

let createElement = wrapProps ();
