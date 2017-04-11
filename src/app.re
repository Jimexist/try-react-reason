module App = {
  include ReactRe.Component.JsProps;
  let name = "App";
  type matchType = {exact: bool, path: string, url: string, strict: bool};
  type props = {match: matchType};
  type jsMatchType = Js.t {. exact : Js.boolean, path : string, url : string, strict : Js.boolean};
  type jsProps = Js.t {. _match : jsMatchType};
  let jsPropsToReasonProps =
    Some (
      fun jsProps => {
        match: {
          strict: Js.to_bool jsProps##_match##strict,
          exact: Js.to_bool jsProps##_match##exact,
          path: jsProps##_match##path,
          url: jsProps##_match##url
        }
      }
    );
  let render {props} => {
    let className = "app-root";
    <div className>
      (ReactRe.stringToElement "this is the app module and you are seeing the rendered result")
    </div>
  };
};

include ReactRe.CreateComponent App;

let createElement ::match => wrapProps match;
