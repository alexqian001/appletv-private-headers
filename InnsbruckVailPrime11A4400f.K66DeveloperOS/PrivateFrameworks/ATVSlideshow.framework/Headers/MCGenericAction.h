/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSDictionary, NSMutableDictionary;

@interface MCGenericAction : MCAction {
	NSMutableDictionary *_attributes;	// 12 = 0xc
}
@property(copy) NSDictionary *attributes;	// G=0x2fcba535; S=0x2fcba549; @synthesize=_attributes
+ (id)genericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes;	// 0x2fcba22d
- (id)initWithImprint:(id)imprint;	// 0x2fcba2a1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x2fcba3e5
// declared property getter: - (id)attributes;	// 0x2fcba535
- (void)demolish;	// 0x2fcba335
- (id)description;	// 0x2fcba4dd
- (id)imprint;	// 0x2fcba385
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x2fcba549
@end

