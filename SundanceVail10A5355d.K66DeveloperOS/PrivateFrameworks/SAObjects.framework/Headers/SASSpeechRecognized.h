/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SASRecognition, NSString;

@interface SASSpeechRecognized : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SASRecognition *recognition;	// G=0x366033dd; S=0x36603431; 
@property(copy, nonatomic) NSString *sessionId;	// G=0x3660346d; S=0x36603489; 
+ (id)speechRecognized;	// 0x3660334d
+ (id)speechRecognizedWithDictionary:(id)dictionary context:(id)context;	// 0x36603391
- (id)encodedClassName;	// 0x36603341
- (id)groupIdentifier;	// 0x36603331
// declared property getter: - (id)recognition;	// 0x366033dd
- (BOOL)requiresResponse;	// 0x366034d9
// declared property getter: - (id)sessionId;	// 0x3660346d
// declared property setter: - (void)setRecognition:(id)recognition;	// 0x36603431
// declared property setter: - (void)setSessionId:(id)anId;	// 0x36603489
@end
