/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDText;

__attribute__((visibility("hidden")))
@interface WMSectionContentMapper : CMMapper {
@private
	WDText *wdText;	// 8 = 0x8
}
- (id)initWithWDText:(id)wdtext parent:(id)parent;	// 0x34414085
- (void)mapAt:(id)at withState:(id)state;	// 0x344140c9
- (void)mapTextFrameAt:(id)at withState:(id)state;	// 0x344b7871
- (void)mapTextFrameStyleTo:(id)to withState:(id)state;	// 0x344b7a95
- (id)paragraphAtIndex:(int)index;	// 0x34406501
- (void)updateTextFrameState:(id)state atIndex:(int)index;	// 0x344063d1
@end

