module App = {
  include ReactRe.Component.JsProps;
  let name = "App";
  type props = {match: {..}};
  type jsProps = Js.t {. match : Js.t {..}};
  let jsPropsToReasonProps = Some (fun jsProps => {match: jsProps##match});
  let render {props} => {
    let className = "app-root";
    <div className>
      (ReactRe.stringToElement "this is the app module and you are seeing the rendered result")
    </div>
  };
};

include ReactRe.CreateComponent App;

let createElement ::match => wrapProps match;
