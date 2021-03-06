/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface ML3OrderingTerm : NSObject <NSCopying, NSCoding> {
	NSString *_property;	// 4 = 0x4
	int _direction;	// 8 = 0x8
	NSString *_collation;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *collation;	// G=0x30b2dda9; @synthesize=_collation
@property(readonly, assign, nonatomic) int direction;	// G=0x30b2dd99; @synthesize=_direction
@property(readonly, assign, nonatomic) NSString *property;	// G=0x30b2dd85; @synthesize=_property
- (id)initWithCoder:(id)coder;	// 0x30b2db41
- (id)initWithProperty:(id)property;	// 0x30b2d8b1
- (id)initWithProperty:(id)property direction:(int)direction;	// 0x30b2d8e1
- (id)initWithProperty:(id)property direction:(int)direction collation:(id)collation;	// 0x30b2d90d
- (void).cxx_destruct;	// 0x30b2ddbd
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x30b2dcc5
// declared property getter: - (id)collation;	// 0x30b2dda9
- (id)copyWithZone:(NSZone *)zone;	// 0x30b2daa1
- (id)description;	// 0x30b2dbf9
// declared property getter: - (int)direction;	// 0x30b2dd99
- (void)encodeWithCoder:(id)coder;	// 0x30b2daa5
- (unsigned)hash;	// 0x30b2d9c9
- (BOOL)isEqual:(id)equal;	// 0x30b2d9e9
// declared property getter: - (id)property;	// 0x30b2dd85
@end

