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
@property(retain, nonatomic) SASRecognition *recognition;	// G=0x3559b1ed; S=0x3559b241; 
@property(copy, nonatomic) NSString *sessionId;	// G=0x3559b27d; S=0x3559b299; 
+ (id)speechRecognized;	// 0x3559b15d
+ (id)speechRecognizedWithDictionary:(id)dictionary context:(id)context;	// 0x3559b1a1
- (id)encodedClassName;	// 0x3559b151
- (id)groupIdentifier;	// 0x3559b141
// declared property getter: - (id)recognition;	// 0x3559b1ed
- (BOOL)requiresResponse;	// 0x3559b2e9
// declared property getter: - (id)sessionId;	// 0x3559b27d
// declared property setter: - (void)setRecognition:(id)recognition;	// 0x3559b241
// declared property setter: - (void)setSessionId:(id)anId;	// 0x3559b299
@end
