//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 31/01/2025.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public protocol OutlineViewNodeProtocol : OutlineViewChildProtocol {
  func childrenCount () -> Int
  func child (atIndex inIndex : Int) -> AnyObject
}

//--------------------------------------------------------------------------------------------------

