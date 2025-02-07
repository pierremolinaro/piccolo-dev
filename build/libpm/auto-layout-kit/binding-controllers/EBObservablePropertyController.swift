//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   EBObservablePropertyController
//--------------------------------------------------------------------------------------------------

public class EBObservablePropertyController : EBOutletEvent {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final private var mPrivateObservedObjects = [WeakObservedObject] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (observedObjects inObservedObjects : [any EBObservableObjectProtocol],
               callBack inCallBack : Optional <() -> Void>) {
    for object in inObservedObjects {
      self.mPrivateObservedObjects.append (WeakObservedObject (object))
    }
    super.init ()
    self.mEventCallBack = inCallBack
    for object in inObservedObjects {
      object.startsBeingObserved (by: self)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func unregister () {
    for weakObject in self.mPrivateObservedObjects {
      weakObject.weakObservedObject?.stopsBeingObserved (by: self)
    }
    self.mPrivateObservedObjects.removeAll ()
    self.mEventCallBack = nil
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate struct WeakObservedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private weak var mWeakObservedObject : (any EBObservableObjectProtocol)?
  var weakObservedObject : (any EBObservableObjectProtocol)? { return self.mWeakObservedObject }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (_ inObservedObject : any EBObservableObjectProtocol) {
    self.mWeakObservedObject = inObservedObject
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
