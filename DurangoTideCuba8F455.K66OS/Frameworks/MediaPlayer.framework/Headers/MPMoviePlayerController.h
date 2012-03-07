/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPlayback.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
@private
	void *_internal;	// 4 = 0x4
}
@property(assign) BOOL allowsAirPlay;	// G=0x335c77f1; S=0x335c77c1; converted property
@property(readonly, assign, nonatomic) UIView *backgroundView;	// G=0x335c7ad1; 
@property(copy, nonatomic) NSURL *contentURL;	// G=0x335c7b55; S=0x335c7b29; 
@property(assign, nonatomic) int controlStyle;	// G=0x335c7a4d; S=0x335c7a21; 
@property(assign, nonatomic) float currentPlaybackRate;	// G=0x335c73c9; S=0x335c739d; 
@property(assign, nonatomic) double currentPlaybackTime;	// G=0x335c7421; S=0x335c73f5; 
@property(assign) double endPlaybackTime;	// G=0x335c744d; S=0x335c7479; converted property
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x335c78d9; S=0x335c78a9; 
@property(assign) double initialPlaybackTime;	// G=0x335c74a5; S=0x335c74d1; converted property
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;	// G=0x335c7765; 
@property(readonly, assign, nonatomic) int loadState;	// G=0x335c7a79; 
@property(assign) int movieSourceType;	// G=0x335c7555; S=0x335c7581; converted property
@property(readonly, assign, nonatomic) int playbackState;	// G=0x335c7aa5; 
@property(assign, nonatomic) int repeatMode;	// G=0x335c79f5; S=0x335c79c9; 
@property(assign, nonatomic) int scalingMode;	// G=0x335c784d; S=0x335c7821; 
@property(assign, nonatomic) BOOL shouldAutoplay;	// G=0x335c7999; S=0x335c7969; 
@property(assign, nonatomic) BOOL useApplicationAudioSession;	// G=0x335c7939; S=0x335c7909; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x335c7afd; 
+ (void)allInstancesResignActive;	// 0x335c8881
- (id)init;	// 0x335c7c15
- (id)initWithContentURL:(id)contentURL;	// 0x335c848d
- (void)_resignActive;	// 0x335c7345
// converted property getter: - (BOOL)allowsAirPlay;	// 0x335c77f1
// declared property getter: - (id)backgroundView;	// 0x335c7ad1
- (void)beginSeekingBackward;	// 0x335c7689
- (void)beginSeekingForward;	// 0x335c76b5
// declared property getter: - (id)contentURL;	// 0x335c7b55
// declared property getter: - (int)controlStyle;	// 0x335c7a4d
// declared property getter: - (float)currentPlaybackRate;	// 0x335c73c9
// declared property getter: - (double)currentPlaybackTime;	// 0x335c7421
- (void)dealloc;	// 0x335c85f5
- (double)duration;	// 0x335c7529
// converted property getter: - (double)endPlaybackTime;	// 0x335c744d
- (void)endSeeking;	// 0x335c765d
- (void)forwardInvocation:(id)invocation;	// 0x335c7b81
// converted property getter: - (double)initialPlaybackTime;	// 0x335c74a5
// declared property getter: - (BOOL)isFullscreen;	// 0x335c78d9
// declared property getter: - (BOOL)isPreparedToPlay;	// 0x335c7765
// declared property getter: - (int)loadState;	// 0x335c7a79
- (id)methodSignatureForSelector:(SEL)selector;	// 0x335c7bc1
- (int)movieMediaTypes;	// 0x335c75ad
// converted property getter: - (int)movieSourceType;	// 0x335c7555
- (CGSize)naturalSize;	// 0x335c8851
- (void)pause;	// 0x335c770d
- (void)play;	// 0x335c7739
- (double)playableDuration;	// 0x335c74fd
// declared property getter: - (int)playbackState;	// 0x335c7aa5
- (void)prepareToPlay;	// 0x335c7795
// declared property getter: - (int)repeatMode;	// 0x335c79f5
// declared property getter: - (int)scalingMode;	// 0x335c784d
// converted property setter: - (void)setAllowsAirPlay:(BOOL)play;	// 0x335c77c1
// declared property setter: - (void)setContentURL:(id)url;	// 0x335c7b29
// declared property setter: - (void)setControlStyle:(int)style;	// 0x335c7a21
// declared property setter: - (void)setCurrentPlaybackRate:(float)rate;	// 0x335c739d
// declared property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x335c73f5
// converted property setter: - (void)setEndPlaybackTime:(double)time;	// 0x335c7479
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x335c78a9
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x335c7879
// converted property setter: - (void)setInitialPlaybackTime:(double)time;	// 0x335c74d1
// converted property setter: - (void)setMovieSourceType:(int)type;	// 0x335c7581
// declared property setter: - (void)setRepeatMode:(int)mode;	// 0x335c79c9
// declared property setter: - (void)setScalingMode:(int)mode;	// 0x335c7821
// declared property setter: - (void)setShouldAutoplay:(BOOL)autoplay;	// 0x335c7969
// declared property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x335c7909
// declared property getter: - (BOOL)shouldAutoplay;	// 0x335c7999
- (void)skipToBeginning;	// 0x335c7605
- (void)skipToNextItem;	// 0x335c7631
- (void)skipToPreviousItem;	// 0x335c75d9
- (void)stop;	// 0x335c76e1
// declared property getter: - (BOOL)useApplicationAudioSession;	// 0x335c7939
// declared property getter: - (id)view;	// 0x335c7afd
@end
