/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MPWeakRef : NSObject {
@private
	id _object;	// 4 = 0x4
	unsigned _objectAddress;	// 8 = 0x8
}
@property(readonly, retain) id object;	// G=0x303f6049; converted property
+ (id)weakRefWithObject:(id)object;	// 0x303f5fe9
- (void)dealloc;	// 0x303f5f41
- (unsigned)hash;	// 0x303f5f85
- (BOOL)isEqual:(id)equal;	// 0x303f5f95
// converted property getter: - (id)object;	// 0x303f6049
@end

