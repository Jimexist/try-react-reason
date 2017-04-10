external router : ReactRe.reactClass = "BrowserRouter" [@@bs.module "react-router-dom"];

let createElement = ReactRe.wrapPropsShamelessly router (Js.Obj.empty ());
