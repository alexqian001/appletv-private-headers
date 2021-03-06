/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "NSObject.h"

@protocol QLPreviewContentDataSource, QLPreviewContentDelegate;

@protocol QLPreviewContentControllerProtocol <NSObject>
@property(assign) int currentPreviewItemIndex;	// converted property
@property(assign) id<QLPreviewContentDataSource> dataSource;
@property(assign) id<QLPreviewContentDelegate> delegate;
@property(assign) int previewMode;
- (void)becomeForeground;
- (void)beginScrubbing;
- (void)checkCurrentPreviewItem;
- (void)configureWithParameters:(id)parameters;
// converted property getter: - (int)currentPreviewItemIndex;
// declared property getter: - (id)dataSource;
// declared property getter: - (id)delegate;
- (void)endScrubbing;
- (void)enterBackground;
- (void)forceResignFirstResponder;
// declared property getter: - (int)previewMode;
- (id)printPageHelper;
- (id)printPageRenderer;
- (void)refreshCurrentPreviewItem;
- (void)scrubToValue:(double)value;
- (void)setBlockRemoteImages:(BOOL)images;
- (void)setContentFrame:(CGRect)frame;
// converted property setter: - (void)setCurrentPreviewItemIndex:(int)index;
// declared property setter: - (void)setDataSource:(id)source;
// declared property setter: - (void)setDelegate:(id)delegate;
- (void)setLoadingTextForMissingFiles:(id)missingFiles;
- (void)setOverlayHidden:(BOOL)hidden duration:(double)duration;
// declared property setter: - (void)setPreviewMode:(int)mode;
- (void)setTransitioning:(BOOL)transitioning synchronizedWithBlock:(id)block;
- (void)togglePlayState;
- (void)willChangeContentFrame;
@end

