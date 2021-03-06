/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent {
}
@property(readonly, assign) int charCode;	// G=0x30739c59; 
@property(readonly, assign) int detail;	// G=0x30739b6d; 
@property(readonly, assign) int keyCode;	// G=0x30739b99; 
@property(readonly, assign) int layerX;	// G=0x30739d19; 
@property(readonly, assign) int layerY;	// G=0x30739dd9; 
@property(readonly, assign) int pageX;	// G=0x30739e99; 
@property(readonly, assign) int pageY;	// G=0x30739f59; 
@property(readonly, retain) DOMAbstractView *view;	// G=0x3073a0d9; 
@property(readonly, assign) int which;	// G=0x3073a019; 
- (void)initUIEvent:(id)event :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5;	// 0x3073a385
- (void)initUIEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail;	// 0x3073a195
// declared property getter: - (int)charCode;	// 0x30739c59
// declared property getter: - (int)detail;	// 0x30739b6d
// declared property getter: - (int)keyCode;	// 0x30739b99
// declared property getter: - (int)layerX;	// 0x30739d19
// declared property getter: - (int)layerY;	// 0x30739dd9
// declared property getter: - (int)pageX;	// 0x30739e99
// declared property getter: - (int)pageY;	// 0x30739f59
// declared property getter: - (id)view;	// 0x3073a0d9
// declared property getter: - (int)which;	// 0x3073a019
@end

