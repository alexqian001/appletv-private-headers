/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASStartSpeech.h"


@interface SASStartSpeechRequest : SASStartSpeech {
}
@property(assign, nonatomic) BOOL eyesFree;	// G=0x353d7629; S=0x353d76a1; 
@property(assign, nonatomic) BOOL handsFree;	// G=0x353d76e5; S=0x353d775d; 
+ (id)startSpeechRequest;	// 0x353d7599
+ (id)startSpeechRequestWithDictionary:(id)dictionary context:(id)context;	// 0x353d75dd
- (id)encodedClassName;	// 0x353d758d
// declared property getter: - (BOOL)eyesFree;	// 0x353d7629
- (id)groupIdentifier;	// 0x353d757d
// declared property getter: - (BOOL)handsFree;	// 0x353d76e5
// declared property setter: - (void)setEyesFree:(BOOL)free;	// 0x353d76a1
// declared property setter: - (void)setHandsFree:(BOOL)free;	// 0x353d775d
@end
