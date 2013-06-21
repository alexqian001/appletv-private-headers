/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPSwipableView.h"
#import "MediaPlayer-Structs.h"

@class UITextLabel, UIProgressIndicator, UIImage, NSMutableString, UIScrollView, NSString, MPWebDocumentView, UIImageView, UIView;

@interface MPTextView : MPSwipableView {
	UIImage *_albumArtwork;	// 112 = 0x70
	NSString *_rawText;	// 116 = 0x74
	NSMutableString *_text;	// 120 = 0x78
	UIImageView *_background;	// 124 = 0x7c
	UIImageView *_faderView;	// 128 = 0x80
	MPWebDocumentView *_webView;	// 132 = 0x84
	UIView *_headerView;	// 136 = 0x88
	UIScrollView *_scrollView;	// 140 = 0x8c
	UITextLabel *_loadingLabel;	// 144 = 0x90
	UIProgressIndicator *_loadingIndicator;	// 148 = 0x94
	BOOL _scrollIndicatorFlashDisabled;	// 152 = 0x98
	BOOL _needsLayout;	// 153 = 0x99
}
@property(retain, nonatomic) UIImage *artwork;	// G=0x31cef6c1; S=0x31cee601; @synthesize=_albumArtwork
@property(retain, nonatomic) UIView *headerView;	// G=0x31cef6d1; S=0x31ceea29; @synthesize=_headerView
- (id)initWithFrame:(CGRect)frame;	// 0x31cedf31
- (void)_addLoadingUI;	// 0x31ceeb05
- (void)_addTextUI;	// 0x31ceed9d
- (void)_createTextUIIfNeeded;	// 0x31ceefc9
- (CGImageRef)_newFaderImage:(BOOL)image;	// 0x31cef425
- (CGImageRef)_newFaderImageBackgroundWithSize:(CGSize)size;	// 0x31cef169
- (void)_removeLoadingUI;	// 0x31cef0c1
- (void)_removeTextUI;	// 0x31cef145
- (void)_updateFaderImage:(BOOL)image;	// 0x31cef5ad
- (void)_updateLoadingUIForWillLoad:(BOOL)_updateLoadingUIFor;	// 0x31cee755
// declared property getter: - (id)artwork;	// 0x31cef6c1
- (void)dealloc;	// 0x31cee0d9
- (void)didMoveToSuperview;	// 0x31cee4bd
- (BOOL)hasText;	// 0x31cee581
// declared property getter: - (id)headerView;	// 0x31cef6d1
- (void)layoutSubviews;	// 0x31cee231
- (id)newWebView;	// 0x31ceee35
- (void)noteDidSnapshot;	// 0x31cee5cd
- (void)noteWillSnapshot;	// 0x31cee599
// declared property setter: - (void)setArtwork:(id)artwork;	// 0x31cee601
// declared property setter: - (void)setHeaderView:(id)view;	// 0x31ceea29
- (void)setNeedsLayout;	// 0x31cee1f1
- (void)setScrollIndicatorFlashDisabled:(BOOL)disabled;	// 0x31cee571
- (void)setText:(id)text willLoad:(BOOL)load;	// 0x31cee819
- (void)webViewDidFinishLoading:(id)webView;	// 0x31ceea91
- (float)webViewWidth;	// 0x31cee7e1
@end
