external route : ReactRe.reactClass = "Route" [@@bs.module "react-router-dom"];

let createElement
    component::(component: ReactRe.reactClass)
    exact::(exact: bool)
    toUrl::(toUrl: string) =>
  ReactRe.wrapPropsShamelessly route {"to": toUrl, "component": component, "exact": exact};
