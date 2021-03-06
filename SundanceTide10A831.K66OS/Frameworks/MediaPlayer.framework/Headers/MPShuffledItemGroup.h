/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSMutableArray;

@interface MPShuffledItemGroup : NSObject <NSCoding> {
	long long _groupPersistentID;	// 4 = 0x4
	NSMutableArray *_mutableItems;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x36f570ed
- (id)initWithGroupPersistentID:(long long)groupPersistentID;	// 0x36f56f9d
- (void)dealloc;	// 0x36f57021
- (id)description;	// 0x36f5706d
- (void)encodeWithCoder:(id)coder;	// 0x36f571a5
@end

