module App = {
  include ReactRe.Component;
  let name = "App";
  type props = unit;
  let render {props, state} => <div> (ReactRe.stringToElement "this is the app module and you are seeing the rendered result") </div>;
};

include ReactRe.CreateComponent App;

let createElement = wrapProps ();
