/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"


@interface MPPadFullScreenTransportControls : MPTransportControls {
}
- (id)initWithFrame:(CGRect)frame;	// 0x36cfc8c1
- (void)_itemTypeAvailableNotification:(id)notification;	// 0x36cfd595
- (id)buttonImageForPart:(unsigned long long)part;	// 0x36cfcc61
- (void)dealloc;	// 0x36cfc949
- (void)layoutSubviews;	// 0x36cfcf11
- (id)newVolumeSlider;	// 0x36cfcbd5
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x36cfc9b9
- (void)setDisabledParts:(unsigned long long)parts;	// 0x36cfce55
- (void)setItem:(id)item;	// 0x36cfce91
- (void)setVisibleParts:(unsigned long long)parts animated:(BOOL)animated;	// 0x36cfcdf1
@end

