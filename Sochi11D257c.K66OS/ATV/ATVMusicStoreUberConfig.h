/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVMusicStoreUberArtworkConfig, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreUberConfig : XXUnknownSuperclass {
	NSDictionary *_dict;	// 4 = 0x4
	ATVMusicStoreUberArtworkConfig *_artworkConfig;	// 8 = 0x8
}
@property(copy, nonatomic) ATVMusicStoreUberArtworkConfig *artworkConfig;	// G=0x29f6c1; S=0x29f6d5; @synthesize=_artworkConfig
@property(copy, nonatomic) NSDictionary *dict;	// G=0x29f69d; S=0x29f6b1; @synthesize=_dict
+ (id)configWithItemDict:(id)itemDict;	// 0x29f129
+ (id)configWithPageDict:(id)pageDict;	// 0x29eee5
- (id)initWithDict:(id)dict bottomInsets:(XXStruct_qlg9jA)insets;	// 0x29f289
- (void).cxx_destruct;	// 0x29f6e5
- (id)_uiColorWithUberColor:(id)uberColor;	// 0x29f491
// declared property getter: - (id)artworkConfig;	// 0x29f6c1
// declared property getter: - (id)dict;	// 0x29f69d
- (id)primaryColor;	// 0x29f415
// declared property setter: - (void)setArtworkConfig:(id)config;	// 0x29f6d5
// declared property setter: - (void)setDict:(id)dict;	// 0x29f6b1
- (id)titleColor;	// 0x29f399
@end
