/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library


@interface WAKResponder : NSObject {
}
- (void)_forwardEvent:(id)event;	// 0x322d6965
- (BOOL)acceptsFirstResponder;	// 0x322d6a55
- (BOOL)becomeFirstResponder;	// 0x322d6a59
- (void)deleteBackward:(id)backward;	// 0x322d6a09
- (void)deleteForward:(id)forward;	// 0x322d6a0d
- (void)handleEvent:(id)event;	// 0x322d6961
- (void)insertParagraphSeparator:(id)separator;	// 0x322d6a11
- (void)insertText:(id)text;	// 0x322d6a05
- (void)keyDown:(id)down;	// 0x322d69d1
- (void)keyUp:(id)up;	// 0x322d69e1
- (void)mouseDown:(id)down;	// 0x322d6a45
- (void)mouseEntered:(id)entered;	// 0x322d69a1
- (void)mouseExited:(id)exited;	// 0x322d69b1
- (void)mouseMoved:(id)moved;	// 0x322d69c1
- (void)mouseUp:(id)up;	// 0x322d6a35
- (void)moveDown:(id)down;	// 0x322d6a15
- (void)moveDownAndModifySelection:(id)selection;	// 0x322d6a19
- (void)moveLeft:(id)left;	// 0x322d6a1d
- (void)moveLeftAndModifySelection:(id)selection;	// 0x322d6a21
- (void)moveRight:(id)right;	// 0x322d6a25
- (void)moveRightAndModifySelection:(id)selection;	// 0x322d6a29
- (void)moveUp:(id)up;	// 0x322d6a2d
- (void)moveUpAndModifySelection:(id)selection;	// 0x322d6a31
- (id)nextResponder;	// 0x322d6a01
- (BOOL)resignFirstResponder;	// 0x31c8a239
- (void)scrollWheel:(id)wheel;	// 0x322d6991
- (void)touch:(id)touch;	// 0x322d69f1
- (BOOL)tryToPerform:(SEL)perform with:(id)with;	// 0x31cf41cd
@end

