external route : ReactRe.reactClass = "Route" [@@bs.module "react-router-dom"];

let createElement exact::(exact: bool) toUrl::(toUrl: string) =>
  ReactRe.wrapPropsShamelessly route {"to": toUrl, "exact": Js.Bool.to_js_boolean exact};
