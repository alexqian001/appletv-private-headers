/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString;

@interface RUIYTSearchTermInfo : XXUnknownSuperclass <NSCoding> {
	NSString *_searchTerm;	// 4 = 0x4
	NSDate *_timestamp;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *searchTerm;	// G=0xecf5; S=0x104e1; @synthesize=_searchTerm
@property(retain, nonatomic) NSDate *timestamp;	// G=0xece5; S=0x10509; @synthesize=_timestamp
- (id)initWithCoder:(id)coder;	// 0xed61
- (void)dealloc;	// 0xed05
- (void)encodeWithCoder:(id)coder;	// 0xecd9
- (unsigned)hash;	// 0xece1
- (BOOL)isEqual:(id)equal;	// 0xecdd
// declared property getter: - (id)searchTerm;	// 0xecf5
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x104e1
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x10509
// declared property getter: - (id)timestamp;	// 0xece5
@end
