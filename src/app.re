open ReactRe;

module App = {
  include Component;
  let name = "App";
  type props = unit;
  let render {props} => {
    let className = "app-root";
    <div className>
      (stringToElement "this is the app module and you are seeing the rendered result")
    </div>
  };
};

include CreateComponent App;

let createElement = wrapProps ();
