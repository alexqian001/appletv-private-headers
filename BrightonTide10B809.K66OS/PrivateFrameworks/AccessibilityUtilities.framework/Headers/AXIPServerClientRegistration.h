/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AXIPServerClientRegistration : NSObject {
	unsigned port;	// 4 = 0x4
	NSString *identifier;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *identifier;	// G=0x3338b555; S=0x3338b565; @synthesize
@property(assign, nonatomic) unsigned port;	// G=0x3338b535; S=0x3338b545; @synthesize
- (void)dealloc;	// 0x3338b481
// declared property getter: - (id)identifier;	// 0x3338b555
- (BOOL)isEqual:(id)equal;	// 0x3338b4c5
// declared property getter: - (unsigned)port;	// 0x3338b535
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3338b565
// declared property setter: - (void)setPort:(unsigned)port;	// 0x3338b545
@end

