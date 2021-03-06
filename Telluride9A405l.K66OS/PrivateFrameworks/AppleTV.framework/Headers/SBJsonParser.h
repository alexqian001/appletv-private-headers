/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBJsonParser : NSObject {
@private
	NSString *error;	// 4 = 0x4
	unsigned depth;	// 8 = 0x8
	unsigned maxDepth;	// 12 = 0xc
}
@property(copy) NSString *error;	// G=0x36085afc; S=0x36085ac8; @synthesize
@property(assign) unsigned maxDepth;	// G=0x36085a38; S=0x36085a4c; @synthesize
- (id)init;	// 0x36085a60
- (void)dealloc;	// 0x36085e18
// declared property getter: - (id)error;	// 0x36085afc
// declared property getter: - (unsigned)maxDepth;	// 0x36085a38
- (id)objectWithData:(id)data;	// 0x36085c20
- (id)objectWithString:(id)string;	// 0x36085bdc
- (id)objectWithString:(id)string error:(id *)error;	// 0x36085b1c
// declared property setter: - (void)setError:(id)error;	// 0x36085ac8
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x36085a4c
@end

