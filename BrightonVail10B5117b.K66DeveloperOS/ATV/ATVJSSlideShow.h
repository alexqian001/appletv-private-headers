/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface ATVJSSlideShow : XXUnknownSuperclass {
	id _ntCurrentAssetChanged;	// 4 = 0x4
	id _ntStateChanged;	// 8 = 0x8
	BRMediaPlayer *_player;	// 12 = 0xc
}
@property(retain, nonatomic) id ntCurrentAssetChanged;	// G=0x3e6829; S=0x3e6839; @synthesize=_ntCurrentAssetChanged
@property(retain, nonatomic) id ntStateChanged;	// G=0x3e6849; S=0x3e6859; @synthesize=_ntStateChanged
@property(retain, nonatomic) BRMediaPlayer *player;	// G=0x3e6869; S=0x3e6879; @synthesize=_player
- (void)dealloc;	// 0x3e61c1
// declared property getter: - (id)ntCurrentAssetChanged;	// 0x3e6829
// declared property getter: - (id)ntStateChanged;	// 0x3e6849
// declared property getter: - (id)player;	// 0x3e6869
- (void)runFromIndex:(int)index mediaAssets:(id)assets dataClient:(id)client couplingObject:(id)object completionCallback:(id)callback;	// 0x3e642d
// declared property setter: - (void)setNtCurrentAssetChanged:(id)changed;	// 0x3e6839
// declared property setter: - (void)setNtStateChanged:(id)changed;	// 0x3e6859
// declared property setter: - (void)setPlayer:(id)player;	// 0x3e6879
- (void)showSettingsWithMediaAssets:(id)mediaAssets dataClient:(id)client couplingObject:(id)object completionCallback:(id)callback;	// 0x3e622d
- (void)teardown;	// 0x3e67e9
@end

