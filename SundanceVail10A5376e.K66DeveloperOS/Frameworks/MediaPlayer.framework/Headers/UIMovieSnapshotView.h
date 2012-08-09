/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIImageView.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class UITapGestureRecognizer;
@protocol UIMovieSnapshotViewDelegate;

@interface UIMovieSnapshotView : UIImageView <UIGestureRecognizerDelegate> {
	id<UIMovieSnapshotViewDelegate> _delegate;	// 96 = 0x60
	UITapGestureRecognizer *_tapGestureRecognizer;	// 100 = 0x64
}
@property(assign, nonatomic) id<UIMovieSnapshotViewDelegate> delegate;	// G=0x36c9655d; S=0x36c9656d; @synthesize=_delegate
- (id)initWithFrame:(CGRect)frame;	// 0x36c963f1
- (void)_viewWasTapped:(id)tapped;	// 0x36c96515
- (void)dealloc;	// 0x36c964b1
// declared property getter: - (id)delegate;	// 0x36c9655d
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x36c96511
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36c9656d
@end
