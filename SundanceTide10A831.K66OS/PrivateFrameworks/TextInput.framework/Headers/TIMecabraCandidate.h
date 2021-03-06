/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface TIMecabraCandidate : XXUnknownSuperclass {
	void *_candidate;	// 12 = 0xc
	NSString *_displayReading;	// 16 = 0x10
	NSString *_firstSyllable;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *convertedInput;	// G=0x348f8209; 
@property(readonly, assign, nonatomic) NSString *displayReading;	// G=0x348f84ad; 
@property(readonly, assign, nonatomic) NSString *firstSyllable;	// G=0x348f821d; 
- (id)initConversionCandidateWithSurface:(id)surface andInput:(id)input;	// 0x348f8351
- (id)initWithMecabraCandidate:(const void *)mecabraCandidate;	// 0x348f839d
- (id)candidate;	// 0x348f81e1
// declared property getter: - (id)convertedInput;	// 0x348f8209
- (id)copyWithZone:(NSZone *)zone;	// 0x348f8459
- (void)dealloc;	// 0x348f83e5
// declared property getter: - (id)displayReading;	// 0x348f84ad
// declared property getter: - (id)firstSyllable;	// 0x348f821d
- (id)input;	// 0x348f81f5
- (BOOL)isExtensionCandidate;	// 0x348f8765
- (BOOL)isForShortcutConversion;	// 0x348f8781
- (void *)mecabraCandidate;	// 0x348f849d
@end

