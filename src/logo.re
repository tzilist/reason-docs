module Logo = {
  include ReactRe.Component;
  type props = unit;
  let name = "Logo";
  let render _ => <img style=(ReactDOMRe.Style.make maxWidth::"200px" ()) src="logo.png" />;
};

include ReactRe.CreateComponent Logo;

let createElement = wrapProps ();
