/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface _MZRemoveTransactionItem : NSObject {
	NSString *_version;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *key;	// G=0x364dfb11; S=0x364dfb25; @synthesize=_key
@property(copy, nonatomic) NSString *version;	// G=0x364dfaed; S=0x364dfb01; @synthesize=_version
- (void)dealloc;	// 0x364df91d
- (id)description;	// 0x364df975
- (unsigned)hash;	// 0x364dfa15
- (BOOL)isEqual:(id)equal;	// 0x364dfa3d
// declared property getter: - (id)key;	// 0x364dfb11
// declared property setter: - (void)setKey:(id)key;	// 0x364dfb25
// declared property setter: - (void)setVersion:(id)version;	// 0x364dfb01
// declared property getter: - (id)version;	// 0x364dfaed
@end

