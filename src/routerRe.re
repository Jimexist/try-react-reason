open ReactRe;

external router : reactClass = "BrowserRouter" [@@bs.module "react-router-dom"];

let createElement = wrapPropsShamelessly router (Js.Obj.empty ());
