/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRAsyncImageControlBadgeInfo : XXUnknownSuperclass {
	int _position;	// 4 = 0x4
	BRControl *_badge;	// 8 = 0x8
	XXStruct_40SSZC _inset;	// 12 = 0xc
}
@property(retain, nonatomic) BRControl *badge;	// G=0x35c3a1; S=0x35c3b1; @synthesize=_badge
@property(assign, nonatomic) XXStruct_40SSZC inset;	// G=0x35c3c1; S=0x35c3d9; @synthesize=_inset
@property(assign, nonatomic) int position;	// G=0x35c381; S=0x35c391; @synthesize=_position
// declared property getter: - (id)badge;	// 0x35c3a1
- (void)dealloc;	// 0x35c335
// declared property getter: - (XXStruct_40SSZC)inset;	// 0x35c3c1
// declared property getter: - (int)position;	// 0x35c381
// declared property setter: - (void)setBadge:(id)badge;	// 0x35c3b1
// declared property setter: - (void)setInset:(XXStruct_40SSZC)inset;	// 0x35c3d9
// declared property setter: - (void)setPosition:(int)position;	// 0x35c391
@end
