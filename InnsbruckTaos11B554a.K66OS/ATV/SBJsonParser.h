/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SBJsonParser : XXUnknownSuperclass {
	NSString *error;	// 4 = 0x4
	unsigned depth;	// 8 = 0x8
	unsigned maxDepth;	// 12 = 0xc
}
@property(copy) NSString *error;	// G=0x56813d; S=0x568151; @synthesize
@property(assign) unsigned maxDepth;	// G=0x568111; S=0x568125; @synthesize
- (id)init;	// 0x567e35
- (void)dealloc;	// 0x567e7d
// declared property getter: - (id)error;	// 0x56813d
// declared property getter: - (unsigned)maxDepth;	// 0x568111
- (id)objectWithData:(id)data;	// 0x567ec9
- (id)objectWithString:(id)string;	// 0x568049
- (id)objectWithString:(id)string error:(id *)error;	// 0x56807d
// declared property setter: - (void)setError:(id)error;	// 0x568151
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x568125
@end

