module Canvas2d = Webapi__Canvas__Canvas2d;
module WebGl = Webapi__Canvas__WebGl;

module CanvasElement = {
  [@bs.send] external getContext2d : (Dom.element, [@bs.as "2d"] _) => Canvas2d.t = "getContext";
  [@bs.send] external getContextWebGl : (Dom.element, [@bs.as "webgl"] _) => WebGl.glT = "getContext";
};
