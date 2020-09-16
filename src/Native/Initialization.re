external initApp: unit => unit = "revery_initializeApp";
external uninitApp: unit => unit = "revery_uninitializeApp";

external _initWindow: Sdl2.Window.nativeWindow => unit =
  "revery_initializeWindow";
let initWindow = (w: Sdl2.Window.t) =>
  _initWindow(w |> Sdl2.Window.getNativeWindow);

external _hookResize: Sdl2.Window.nativeWindow => unit =
  "revery_hookresize";
let hookResize = (w: Sdl2.Window.t) =>
  _hookResize(w |> Sdl2.Window.getNativeWindow);