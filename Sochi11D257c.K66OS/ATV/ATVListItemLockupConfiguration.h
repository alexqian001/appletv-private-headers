/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVImageConfiguration;

__attribute__((visibility("hidden")))
@interface ATVListItemLockupConfiguration : XXUnknownSuperclass {
	XXStruct_qlg9jA _boundingBoxHeight;	// 4 = 0x4
	XXStruct_qlg9jA _contentHeight;	// 8 = 0x8
	ATVImageConfiguration *_imageConfiguration;	// 12 = 0xc
}
@property(assign, nonatomic) XXStruct_qlg9jA boundingBoxHeight;	// G=0xbdb2d; S=0xbdb49; @synthesize=_boundingBoxHeight
@property(assign, nonatomic) XXStruct_qlg9jA contentHeight;	// G=0xbdb59; S=0xbdb75; @synthesize=_contentHeight
@property(readonly, assign, nonatomic) ATVImageConfiguration *imageConfiguration;	// G=0xbdb85; @synthesize=_imageConfiguration
- (id)init;	// 0xbdac1
- (void).cxx_destruct;	// 0xbdb95
// declared property getter: - (XXStruct_qlg9jA)boundingBoxHeight;	// 0xbdb2d
// declared property getter: - (XXStruct_qlg9jA)contentHeight;	// 0xbdb59
// declared property getter: - (id)imageConfiguration;	// 0xbdb85
// declared property setter: - (void)setBoundingBoxHeight:(XXStruct_qlg9jA)height;	// 0xbdb49
// declared property setter: - (void)setContentHeight:(XXStruct_qlg9jA)height;	// 0xbdb75
@end
