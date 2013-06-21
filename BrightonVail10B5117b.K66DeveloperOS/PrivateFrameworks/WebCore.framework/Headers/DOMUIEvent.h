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
@property(readonly, assign) int charCode;	// G=0x362017ad; 
@property(readonly, assign) int detail;	// G=0x3620167d; 
@property(readonly, assign) int keyCode;	// G=0x362016a9; 
@property(readonly, assign) int layerX;	// G=0x362018b1; 
@property(readonly, assign) int layerY;	// G=0x362019b5; 
@property(readonly, assign) int pageX;	// G=0x36201ab9; 
@property(readonly, assign) int pageY;	// G=0x36201bbd; 
@property(readonly, assign) DOMAbstractView *view;	// G=0x36201579; 
@property(readonly, assign) int which;	// G=0x36201cc1; 
- (void)initUIEvent:(id)event :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5;	// 0x36201ff1
- (void)initUIEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail;	// 0x36201dc5
// declared property getter: - (int)charCode;	// 0x362017ad
// declared property getter: - (int)detail;	// 0x3620167d
// declared property getter: - (int)keyCode;	// 0x362016a9
// declared property getter: - (int)layerX;	// 0x362018b1
// declared property getter: - (int)layerY;	// 0x362019b5
// declared property getter: - (int)pageX;	// 0x36201ab9
// declared property getter: - (int)pageY;	// 0x36201bbd
// declared property getter: - (id)view;	// 0x36201579
// declared property getter: - (int)which;	// 0x36201cc1
@end
