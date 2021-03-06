/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "NSObject.h"
#import "TextInput-Structs.h"


@protocol TIKeyboardInputManager <NSObject>
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)forwardDirection keyboardState:(id)state continuation:(id)continuation;
- (void)candidateRejected:(id)rejected;
- (void)generateCandidatesWithKeyboardState:(id)keyboardState candidateRange:(NSRange)range continuation:(id)continuation;
- (void)generateReplacementsForString:(id)string keyLayout:(id)layout continuation:(id)continuation;
- (void)handleAcceptedCandidate:(id)candidate keyboardState:(id)state continuation:(id)continuation;
- (void)handleKeyboardInput:(id)input keyboardState:(id)state continuation:(id)continuation;
- (void)lastAcceptedCandidateCorrected;
- (void)performHitTestForTouchEvent:(id)touchEvent keyboardState:(id)state continuation:(id)continuation;
- (void)removeAllDynamicDictionaries;
- (void)setOriginalInput:(id)input;
- (void)skipHitTestForTouchEvent:(id)touchEvent keyboardState:(id)state;
- (void)syncToKeyboardState:(id)keyboardState continuation:(id)continuation;
- (void)textAccepted:(id)accepted;
@end

