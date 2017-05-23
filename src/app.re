module App = {
  include ReactRe.Component;
  type props = {title: string};
  let name = "App";
  let render {props} =>
    <div className="App">
      <Logo />
      <h2 style=(ReactDOMRe.Style.make marginLeft::"30px" fontSize::"2em" ())>
        (ReactRe.stringToElement props.title)
      </h2>
    </div>;
};

include ReactRe.CreateComponent App;

let createElement ::title => wrapProps {title: title};
