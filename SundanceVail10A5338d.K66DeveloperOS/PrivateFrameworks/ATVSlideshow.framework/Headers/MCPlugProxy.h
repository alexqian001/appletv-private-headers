/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCPlug;

@interface MCPlugProxy : MCObject {
	MCPlug *_plug;	// 12 = 0xc
}
@property(retain) MCPlug *plug;	// G=0x334d0079; S=0x334d008d; @synthesize=_plug
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x334d0051
- (void)dealloc;	// 0x334cff75
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x334cffc5
- (BOOL)isKindOfClass:(Class)aClass;	// 0x334cffd5
// declared property getter: - (id)plug;	// 0x334d0079
- (void)setContainer:(id)container;	// 0x334d004d
// declared property setter: - (void)setPlug:(id)plug;	// 0x334d008d
- (int)zIndex;	// 0x334d002d
@end
