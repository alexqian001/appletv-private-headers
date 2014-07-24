/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIEvent.h"


__attribute__((visibility("hidden")))
@interface UIInternalEvent : UIEvent {
	GSEventRef _gsEvent;	// 12 = 0xc
	IOHIDEventRef _hidEvent;	// 16 = 0x10
}
- (GSEventRef)_gsEvent;	// 0x2f3dfe69
- (IOHIDEventRef)_hidEvent;	// 0x2f670c41
- (id)_screen;	// 0x2f670c51
- (void)_setGSEvent:(GSEventRef)event;	// 0x2f3dfc05
- (void)_setHIDEvent:(IOHIDEventRef)event;	// 0x2f670bd9
- (void)dealloc;	// 0x2f670b79
@end
