/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVRelatedPlaybackViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRAsynchronousControllerViewLoading.h"

@class ATVStateMachine, BRKeyValueObservingRegistry, BRMediaPlayer, ATVRelatedPlaybackView;
@protocol ATVRelatedPlaybackViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ATVRelatedPlaybackViewController : XXUnknownSuperclass <ATVRelatedPlaybackViewDelegate, BRAsynchronousControllerViewLoading> {
	BRMediaPlayer *_player;	// 4 = 0x4
	int _viewAvailability;	// 8 = 0x8
	id<ATVRelatedPlaybackViewControllerDelegate> _delegate;	// 12 = 0xc
	ATVRelatedPlaybackView *_view;	// 16 = 0x10
	BRKeyValueObservingRegistry *_kvoRegistry;	// 20 = 0x14
	ATVStateMachine *_stateMachine;	// 24 = 0x18
	double _remainingPlaybackTime;	// 28 = 0x1c
}
@property(assign, nonatomic) __weak id<ATVRelatedPlaybackViewControllerDelegate> delegate;	// G=0x2200e5; S=0x220105; @synthesize=_delegate
@property(retain, nonatomic, setter=setKVORegistry:) BRKeyValueObservingRegistry *kvoRegistry;	// G=0x220169; S=0x220179; @synthesize=_kvoRegistry
@property(readonly, assign, nonatomic) BRMediaPlayer *player;	// G=0x2200b5; @synthesize=_player
@property(assign, nonatomic) double remainingPlaybackTime;	// G=0x220119; S=0x21e715; @synthesize=_remainingPlaybackTime
@property(retain, nonatomic) ATVStateMachine *stateMachine;	// G=0x2201a1; S=0x2201b1; @synthesize=_stateMachine
@property(retain, nonatomic) ATVRelatedPlaybackView *view;	// G=0x220131; S=0x220141; @synthesize=_view
@property(assign, nonatomic) int viewAvailability;	// G=0x2200c5; S=0x2200d5; @synthesize=_viewAvailability
- (id)initWithPlayer:(id)player;	// 0x21e3fd
- (void).cxx_destruct;	// 0x2201d9
- (void)_cancelPreparation;	// 0x21e79d
- (void)_cleanupView;	// 0x21e90d
- (void)_configureStateMachine;	// 0x21ea65
- (void)_didPrepareRelatedPlaybackWithView:(id)view;	// 0x21e739
- (id)_endRelatedPlayback;	// 0x21e971
- (void)_playerAssetChanged:(id)changed;	// 0x21e7ad
- (void)_playerProgressChanged:(id)changed;	// 0x21e7f1
- (void)_presentationDidBegin;	// 0x21e7a1
- (void)_presentationDidEnd;	// 0x21e7a9
- (void)_remainingPlaybackTimeDidChange;	// 0x21e7a5
- (double)_remainingPlayerTime;	// 0x21e835
- (void)dealloc;	// 0x21e541
// declared property getter: - (id)delegate;	// 0x2200e5
// declared property getter: - (id)kvoRegistry;	// 0x220169
// declared property getter: - (id)player;	// 0x2200b5
- (void)prepareRelatedPlayback;	// 0x21e5ad
- (void)relatedPlaybackView:(id)view didReceiveEvent:(id)event wasHandled:(BOOL *)handled;	// 0x21e651
// declared property getter: - (double)remainingPlaybackTime;	// 0x220119
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x220105
// declared property setter: - (void)setKVORegistry:(id)registry;	// 0x220179
// declared property setter: - (void)setRemainingPlaybackTime:(double)time;	// 0x21e715
// declared property setter: - (void)setStateMachine:(id)machine;	// 0x2201b1
// declared property setter: - (void)setView:(id)view;	// 0x220141
// declared property setter: - (void)setViewAvailability:(int)availability;	// 0x2200d5
// declared property getter: - (id)stateMachine;	// 0x2201a1
// declared property getter: - (id)view;	// 0x220131
// declared property getter: - (int)viewAvailability;	// 0x2200c5
- (id)viewWithPlayerView:(id)playerView;	// 0x21e5f1
@end
