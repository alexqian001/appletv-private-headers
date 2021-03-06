/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <UIViewController.h> // Unknown library

@class QLPreviewControllerReserved;
@protocol QLPreviewItem, QLPreviewControllerDataSource, QLPreviewControllerDelegate;

@interface QLPreviewController : UIViewController {
	QLPreviewControllerReserved *_reserved;	// 192 = 0xc0
}
@property(assign) int barStyle;	// G=0x341d930d; S=0x341d9309; converted property
@property(assign) BOOL blockRemoteImages;	// G=0x341d91c1; S=0x341d917d; converted property
@property(readonly, assign) id<QLPreviewItem> currentPreviewItem;	// G=0x341d95bd; 
@property(assign) int currentPreviewItemIndex;	// G=0x341d9679; S=0x341d9601; 
@property(assign) id<QLPreviewControllerDataSource> dataSource;	// G=0x341d959d; S=0x341d94dd; 
@property(assign) id<QLPreviewControllerDelegate> delegate;	// G=0x341d915d; S=0x341d913d; 
@property(assign) BOOL showActionAsDefaultButton;	// G=0x341d9261; S=0x341d9231; converted property
@property(assign) BOOL translucent;	// G=0x341d9331; S=0x341d932d; converted property
@property(assign) BOOL useCustomActionButton;	// G=0x341d9211; S=0x341d91e1; converted property
+ (id)_passThroughDocumentTypes;	// 0x341d89cd
+ (BOOL)_shouldPassThroughDocumentType:(id)type;	// 0x341d8ae1
+ (BOOL)canPreviewDocumentType:(id)type;	// 0x341d8b3d
+ (BOOL)canPreviewItem:(id)item;	// 0x341d8b6d
+ (BOOL)canPreviewMIMEType:(id)type;	// 0x341d8b9d
+ (id)contentTypeForPreviewItem:(id)previewItem;	// 0x341d8949
+ (BOOL)copyPreviewItemToPasteboard:(id)pasteboard;	// 0x341d99f9
+ (void)presentPreviewItem:(id)item onViewController:(id)controller withDelegate:(id)delegate animated:(BOOL)animated;	// 0x341d8df5
+ (id)titleForPreviewItem:(id)previewItem;	// 0x341d9969
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x341d8cc5
- (void)_addFadeAnimationToView:(id)view fromAlpha:(float)alpha toAlpha:(float)alpha3 duration:(double)duration withCurve:(int)curve;	// 0x341e6d81
- (void)_applicationDidEnterBackground:(id)_application;	// 0x341dafe5
- (void)_applicationWillEnterForeground:(id)_application;	// 0x341db051
- (BOOL)_canPrint;	// 0x341dcc81
- (void)_cancelOverlayTimer;	// 0x341eb075
- (void)_commonInit;	// 0x341d8bd9
- (void)_configurePreviewContentController;	// 0x341db615
- (CGRect)_contentFrameForRemoteView;	// 0x341db4a1
- (void)_contentWasTapped;	// 0x341ea6f9
- (void)_createControls;	// 0x341e8c7d
- (id)_currentNavigationController;	// 0x341ea9a9
- (id)_currentPreviewItemURL;	// 0x341d93cd
- (void)_dismissFromFullScreenWithDuration:(double)duration;	// 0x341e84d5
- (id)_documentProxyForPreviewItem:(id)previewItem;	// 0x341d9ae5
- (void)_ensurePreviewContentController;	// 0x341dbb21
- (void)_ensurePreviewItemIndex;	// 0x341d93ed
- (void)_finishZoomingIn:(BOOL)anIn;	// 0x341e87f5
- (void)_finishZoomingOut:(BOOL)anOut;	// 0x341e8941
- (void)_fireOverlayIdleTimer;	// 0x341eaf91
- (id)_fixedSpaceItemWithWidth:(float)width;	// 0x341e8a71
- (id)_flexibleSpaceItem;	// 0x341e8a21
- (void)_hideBackgroundImage;	// 0x341e9629
- (void)_hideOverlayWithStatusBar:(BOOL)statusBar duration:(double)duration;	// 0x341eacad
- (void)_hideProgressiveUI;	// 0x341dd651
- (void)_hideScrubInstructions;	// 0x341eb579
- (void)_hideSliderInNavigationBar;	// 0x341ea279
- (id)_interactionController;	// 0x341d90b9
- (void)_loadInternalViews;	// 0x341dbf09
- (BOOL)_needsAVControls;	// 0x341e8fa1
- (id)_newSegmentedArrowControl;	// 0x341e8add
- (void)_openURL:(id)url withApplicationProxy:(id)applicationProxy;	// 0x341d9c01
- (id)_popOverState;	// 0x341dcd45
- (void)_prepareDelayedAppearance;	// 0x341d9699
- (void)_prepareForFullScreenZoomIn;	// 0x341e7921
- (void)_prepareForFullScreenZoomOut;	// 0x341e81ad
- (void)_prepareTransitionImageForZoomingIn:(BOOL)anIn;	// 0x341e71a9
- (void)_removeChildPreviewContentControllerIfNeeded;	// 0x341da381
- (void)_removeFadingFilters;	// 0x341e7035
- (void)_removeProgressiveUIAnimation:(id)animation finished:(id)finished context:(void *)context;	// 0x341dd779
- (void)_resumeDelayedTransition;	// 0x341dd119
- (void)_scheduleDelayedTransitionIfNeeded;	// 0x341dd14d
- (void)_setClippingViewActive:(BOOL)active;	// 0x341e74f1
- (void)_setControlsOverlayVisible:(BOOL)visible withStatusBar:(BOOL)statusBar duration:(double)duration;	// 0x341eaf51
- (void)_setCurrentPreviewItemURL:(id)url;	// 0x341d9371
- (void)_setupOverlayTimer;	// 0x341eafe5
- (void)_showBackgroundImage;	// 0x341e974d
- (void)_showGenericDisplayBundle;	// 0x341dd7c9
- (void)_showOverlayWithStatusBar:(BOOL)statusBar duration:(double)duration;	// 0x341ea9e1
- (void)_showProgressUI;	// 0x341dd311
- (void)_showScrubInstructions;	// 0x341eb361
- (void)_showSliderInNavigationBar;	// 0x341e9871
- (void)_startPresentCustomTransitionWithDuration:(double)duration;	// 0x341e6cb1
- (void)_tryAddingPreviewControllerToViewHierarchy;	// 0x341db1c9
- (void)_unloadInternalViews;	// 0x341dc561
- (void)_updateAVState;	// 0x341eb0c9
- (void)_updateActionItem;	// 0x341e94a1
- (void)_updateNavigationBar:(BOOL)bar;	// 0x341ea329
- (void)_updateToolbar:(BOOL)toolbar;	// 0x341e90e5
- (void)_updateToolbarVisibility:(BOOL)visibility;	// 0x341e9005
- (void)_viewWillStartPresentWithTransition;	// 0x341e6c81
- (void)_zoomToFullScreenWithDuration:(double)duration;	// 0x341e7e2d
- (void)actionButtonTapped:(id)tapped;	// 0x341dc89d
- (id)activityItemForDocumentInteractionControllerInPopOverState:(id)popOverState;	// 0x341dce49
- (id)activityViewController:(id)controller itemForActivityType:(id)activityType;	// 0x341dce75
- (id)activityViewControllerPlaceholderItem:(id)item;	// 0x341dce4d
- (void)arrowsAction:(id)action;	// 0x341dcbcd
// converted property getter: - (int)barStyle;	// 0x341d930d
// converted property getter: - (BOOL)blockRemoteImages;	// 0x341d91c1
- (BOOL)canPrint;	// 0x341dcc55
- (CGRect)contentFrameWithoutOverlay;	// 0x341ea805
- (void)contentWasTappedInPreviewContentController:(id)previewContentController;	// 0x341da25d
// declared property getter: - (id)currentPreviewItem;	// 0x341d95bd
// declared property getter: - (int)currentPreviewItemIndex;	// 0x341d9679
- (void)customActionButtonTapped:(id)tapped;	// 0x341dc9f5
// declared property getter: - (id)dataSource;	// 0x341d959d
- (void)dealloc;	// 0x341d8d0d
// declared property getter: - (id)delegate;	// 0x341d915d
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x341eba05
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x341eb9c1
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x341eb89d
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x341eb961
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x341eb901
- (void)didReceiveMemoryWarning;	// 0x341d8d99
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x341dc7f9
- (void)doneButtonTapped:(id)tapped;	// 0x341dca85
- (BOOL)inZoomAnimation;	// 0x341e6c85
- (void)leftArrowAction:(id)action;	// 0x341dcaed
- (void)loadView;	// 0x341db085
- (int)modalPresentationStyle;	// 0x341e6c7d
- (int)modalTransitionStyle;	// 0x341e6c19
- (int)mode;	// 0x341d9351
- (int)numberOfPreviewItemsInPreviewContentController:(id)previewContentController;	// 0x341d9d69
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x341d9ce1
- (BOOL)overlayIsVisible;	// 0x341ea7d9
- (void)overlayWasTappedInPreviewContentController:(id)previewContentController;	// 0x341da29d
- (void)playButtonAction:(id)action;	// 0x341dcc29
- (id)popOverStateViewControllerForPreview:(id)preview;	// 0x341dcdd1
- (void)prepareForPrinting;	// 0x341dcc6d
- (void)presentPreviewItem:(id)item onViewController:(id)controller withDelegate:(id)delegate animated:(BOOL)animated;	// 0x341d8e65
- (void)previewContentController:(id)controller didFailWithError:(id)error;	// 0x341da04d
- (void)previewContentController:(id)controller didLoadItem:(id)item atIndex:(int)index withError:(id)error;	// 0x341d9ea1
- (void)previewContentController:(id)controller didMoveToItem:(id)item atIndex:(int)index;	// 0x341d9e11
- (void)previewContentController:(id)controller didUnloadItem:(id)item;	// 0x341da01d
- (id)previewContentController:(id)controller previewItemAtIndex:(int)index;	// 0x341d9d89
- (void)previewContentController:(id)controller receivedTapOnURL:(id)url;	// 0x341da2dd
- (void)previewContentController:(id)controller setAVState:(id)state forPreviewItem:(id)previewItem;	// 0x341eba61
- (void)previewContentController:(id)controller willHideOverlayWithDuration:(double)duration;	// 0x341da1a1
- (void)previewContentController:(id)controller willMoveToItemAtIndex:(int)index;	// 0x341d9d9d
- (void)previewContentController:(id)controller willShowOverlayWithDuration:(double)duration;	// 0x341da0e9
- (id)previewItemAtIndex:(int)index;	// 0x341d9885
- (id)printInfoForDocumentInteractionControllerInPopOverState:(id)popOverState;	// 0x341dcfb9
- (void)progressViewWasTapped:(id)tapped;	// 0x341dd611
- (void)refreshCurrentPreviewItem;	// 0x341d9825
- (void)reloadData;	// 0x341d96d9
- (void)rightArrowAction:(id)action;	// 0x341dcb55
// converted property setter: - (void)setBarStyle:(int)style;	// 0x341d9309
// converted property setter: - (void)setBlockRemoteImages:(BOOL)images;	// 0x341d917d
// declared property setter: - (void)setCurrentPreviewItemIndex:(int)index;	// 0x341d9601
// declared property setter: - (void)setDataSource:(id)source;	// 0x341d94dd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x341d913d
- (void)setLoadingTextForMissingFiles:(id)missingFiles;	// 0x341d9281
// converted property setter: - (void)setShowActionAsDefaultButton:(BOOL)button;	// 0x341d9231
// converted property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x341d932d
// converted property setter: - (void)setUseCustomActionButton:(BOOL)button;	// 0x341d91e1
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;	// 0x341db1c1
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x341dc761
// converted property getter: - (BOOL)showActionAsDefaultButton;	// 0x341d9261
// converted property getter: - (BOOL)translucent;	// 0x341d9331
// converted property getter: - (BOOL)useCustomActionButton;	// 0x341d9211
- (void)viewDidAppear:(BOOL)view;	// 0x341daa09
- (void)viewDidDisappear:(BOOL)view;	// 0x341dad71
- (void)viewWillAppear:(BOOL)view;	// 0x341da46d
- (void)viewWillDisappear:(BOOL)view;	// 0x341daaa9
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x341dc7b5
@end

