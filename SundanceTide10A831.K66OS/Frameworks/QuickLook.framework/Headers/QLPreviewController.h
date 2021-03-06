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
	QLPreviewControllerReserved *_reserved;	// 196 = 0xc4
}
@property(assign) int barStyle;	// G=0x332b172d; S=0x332b1729; converted property
@property(assign) BOOL blockRemoteImages;	// G=0x332b15e1; S=0x332b159d; converted property
@property(readonly, assign) id<QLPreviewItem> currentPreviewItem;	// G=0x332b19dd; 
@property(assign) int currentPreviewItemIndex;	// G=0x332b1a99; S=0x332b1a21; 
@property(assign) id<QLPreviewControllerDataSource> dataSource;	// G=0x332b19bd; S=0x332b18fd; 
@property(assign) id<QLPreviewControllerDelegate> delegate;	// G=0x332b157d; S=0x332b155d; 
@property(assign) BOOL showActionAsDefaultButton;	// G=0x332b1681; S=0x332b1651; converted property
@property(assign) BOOL translucent;	// G=0x332b1751; S=0x332b174d; converted property
@property(assign) BOOL useCustomActionButton;	// G=0x332b1631; S=0x332b1601; converted property
+ (id)_passThroughDocumentTypes;	// 0x332b0ded
+ (BOOL)_shouldPassThroughDocumentType:(id)type;	// 0x332b0f01
+ (BOOL)canPreviewDocumentType:(id)type;	// 0x332b0f5d
+ (BOOL)canPreviewItem:(id)item;	// 0x332b0f8d
+ (BOOL)canPreviewMIMEType:(id)type;	// 0x332b0fbd
+ (id)contentTypeForPreviewItem:(id)previewItem;	// 0x332b0d69
+ (BOOL)copyPreviewItemToPasteboard:(id)pasteboard;	// 0x332b1e19
+ (void)presentPreviewItem:(id)item onViewController:(id)controller withDelegate:(id)delegate animated:(BOOL)animated;	// 0x332b1215
+ (id)titleForPreviewItem:(id)previewItem;	// 0x332b1d89
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x332b10e5
- (void)_addFadeAnimationToView:(id)view fromAlpha:(float)alpha toAlpha:(float)alpha3 duration:(double)duration withCurve:(int)curve;	// 0x332bf499
- (void)_applicationDidEnterBackground:(id)_application;	// 0x332b3405
- (void)_applicationWillEnterForeground:(id)_application;	// 0x332b3471
- (BOOL)_canPrint;	// 0x332b50fd
- (void)_cancelOverlayTimer;	// 0x332c40ad
- (void)_commonInit;	// 0x332b0ff9
- (void)_configurePreviewContentController;	// 0x332b3a35
- (CGRect)_contentFrameForRemoteView;	// 0x332b38c1
- (void)_contentWasTapped;	// 0x332c3731
- (void)_createControls;	// 0x332c1b59
- (id)_currentNavigationController;	// 0x332c39e1
- (id)_currentPreviewItemURL;	// 0x332b17ed
- (void)_dismissFromFullScreenWithDuration:(double)duration;	// 0x332c0bf1
- (id)_documentProxyForPreviewItem:(id)previewItem;	// 0x332b1f05
- (void)_ensurePreviewContentController;	// 0x332b3f89
- (void)_ensurePreviewItemIndex;	// 0x332b180d
- (void)_finishZoomingIn:(BOOL)anIn;	// 0x332c0f11
- (void)_finishZoomingOut:(BOOL)anOut;	// 0x332c105d
- (void)_fireOverlayIdleTimer;	// 0x332c3fc9
- (id)_fixedSpaceItemWithWidth:(float)width;	// 0x332c1191
- (id)_flexibleSpaceItem;	// 0x332c1141
- (void)_hideBackgroundImage;	// 0x332c2661
- (void)_hideOverlayWithStatusBar:(BOOL)statusBar duration:(double)duration;	// 0x332c3ce5
- (void)_hideProgressiveUI;	// 0x332b5cb9
- (void)_hideScrubInstructions;	// 0x332c45b1
- (void)_hideSliderInNavigationBar;	// 0x332c32b1
- (id)_indexFormatter;	// 0x332c1fd9
- (id)_interactionController;	// 0x332b14d9
- (void)_loadInternalViews;	// 0x332b4371
- (BOOL)_needsAVControls;	// 0x332c1e95
- (id)_newSegmentedArrowControl;	// 0x332c11fd
- (void)_openURL:(id)url withApplicationProxy:(id)applicationProxy;	// 0x332b2021
- (id)_popOverState;	// 0x332b51c1
- (void)_prepareDelayedAppearance;	// 0x332b1ab9
- (void)_prepareForFullScreenZoomIn;	// 0x332c0039
- (void)_prepareForFullScreenZoomOut;	// 0x332c08c9
- (void)_prepareTransitionImageForZoomingIn:(BOOL)anIn;	// 0x332bf8c1
- (void)_removeChildPreviewContentControllerIfNeeded;	// 0x332b27a1
- (void)_removeFadingFilters;	// 0x332bf74d
- (void)_removeProgressiveUIAnimation:(id)animation finished:(id)finished context:(void *)context;	// 0x332b5de1
- (void)_resumeDelayedTransition;	// 0x332b577d
- (void)_scheduleDelayedTransitionIfNeeded;	// 0x332b57b1
- (void)_setClippingViewActive:(BOOL)active;	// 0x332bfc09
- (void)_setControlsOverlayVisible:(BOOL)visible withStatusBar:(BOOL)statusBar duration:(double)duration;	// 0x332c3f89
- (void)_setCurrentPreviewItemURL:(id)url;	// 0x332b1791
- (void)_setupOverlayTimer;	// 0x332c401d
- (void)_showBackgroundImage;	// 0x332c2785
- (void)_showGenericDisplayBundle;	// 0x332b5e31
- (void)_showOverlayWithStatusBar:(BOOL)statusBar duration:(double)duration;	// 0x332c3a19
- (void)_showProgressUI;	// 0x332b5975
- (void)_showScrubInstructions;	// 0x332c4399
- (void)_showSliderInNavigationBar;	// 0x332c28a9
- (void)_startPresentCustomTransitionWithDuration:(double)duration;	// 0x332bf3c9
- (void)_tryAddingPreviewControllerToViewHierarchy;	// 0x332b35e9
- (void)_unloadInternalViews;	// 0x332b49c9
- (void)_updateAVState;	// 0x332c4101
- (void)_updateActionItem;	// 0x332c24d9
- (void)_updateNavigationBar:(BOOL)bar;	// 0x332c3361
- (void)_updateRouteImages;	// 0x332c139d
- (void)_updateToolbar:(BOOL)toolbar;	// 0x332c20b5
- (void)_updateToolbarVisibility:(BOOL)visibility;	// 0x332c1ef9
- (void)_viewWillStartPresentWithTransition;	// 0x332bf399
- (void)_zoomToFullScreenWithDuration:(double)duration;	// 0x332c0549
- (void)actionButtonTapped:(id)tapped;	// 0x332b4d19
- (id)activityItemForDocumentInteractionControllerInPopOverState:(id)popOverState;	// 0x332b52c5
- (id)activityViewController:(id)controller itemForActivityType:(id)activityType;	// 0x332b5455
- (id)activityViewControllerPlaceholderItems:(id)items;	// 0x332b52c9
- (void)arrowsAction:(id)action;	// 0x332b5049
// converted property getter: - (int)barStyle;	// 0x332b172d
// converted property getter: - (BOOL)blockRemoteImages;	// 0x332b15e1
- (BOOL)canPrint;	// 0x332b50d1
- (CGRect)contentFrameWithoutOverlay;	// 0x332c383d
- (void)contentWasTappedInPreviewContentController:(id)previewContentController;	// 0x332b267d
// declared property getter: - (id)currentPreviewItem;	// 0x332b19dd
// declared property getter: - (int)currentPreviewItemIndex;	// 0x332b1a99
- (void)customActionButtonTapped:(id)tapped;	// 0x332b4e71
// declared property getter: - (id)dataSource;	// 0x332b19bd
- (void)dealloc;	// 0x332b112d
// declared property getter: - (id)delegate;	// 0x332b157d
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x332c4a3d
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x332c49f9
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x332c48d5
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x332c4999
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x332c4939
- (void)didReceiveMemoryWarning;	// 0x332b11b9
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x332b4c75
- (void)doneButtonTapped:(id)tapped;	// 0x332b4f01
- (BOOL)inZoomAnimation;	// 0x332bf39d
- (void)leftArrowAction:(id)action;	// 0x332b4f69
- (void)loadView;	// 0x332b34a5
- (int)modalPresentationStyle;	// 0x332bf395
- (int)modalTransitionStyle;	// 0x332bf331
- (int)mode;	// 0x332b1771
- (int)numberOfPreviewItemsInPreviewContentController:(id)previewContentController;	// 0x332b2189
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x332b2101
- (BOOL)overlayIsVisible;	// 0x332c3811
- (void)overlayWasTappedInPreviewContentController:(id)previewContentController;	// 0x332b26bd
- (void)playButtonAction:(id)action;	// 0x332b50a5
- (id)popOverStateViewControllerForPreview:(id)preview;	// 0x332b524d
- (void)prepareForPrinting;	// 0x332b50e9
- (void)presentPreviewItem:(id)item onViewController:(id)controller withDelegate:(id)delegate animated:(BOOL)animated;	// 0x332b1285
- (void)previewContentController:(id)controller didFailWithError:(id)error;	// 0x332b246d
- (void)previewContentController:(id)controller didLoadItem:(id)item atIndex:(int)index withError:(id)error;	// 0x332b22c1
- (void)previewContentController:(id)controller didMoveToItem:(id)item atIndex:(int)index;	// 0x332b2231
- (void)previewContentController:(id)controller didUnloadItem:(id)item;	// 0x332b243d
- (id)previewContentController:(id)controller previewItemAtIndex:(int)index;	// 0x332b21a9
- (void)previewContentController:(id)controller receivedTapOnURL:(id)url;	// 0x332b26fd
- (void)previewContentController:(id)controller setAVState:(id)state forPreviewItem:(id)previewItem;	// 0x332c4a99
- (void)previewContentController:(id)controller willHideOverlayWithDuration:(double)duration;	// 0x332b25c1
- (void)previewContentController:(id)controller willMoveToItemAtIndex:(int)index;	// 0x332b21bd
- (void)previewContentController:(id)controller willShowOverlayWithDuration:(double)duration;	// 0x332b2509
- (id)previewItemAtIndex:(int)index;	// 0x332b1ca5
- (id)printInfoForDocumentInteractionControllerInPopOverState:(id)popOverState;	// 0x332b561d
- (void)progressViewWasTapped:(id)tapped;	// 0x332b5c75
- (void)refreshCurrentPreviewItem;	// 0x332b1c45
- (void)reloadData;	// 0x332b1af9
- (void)rightArrowAction:(id)action;	// 0x332b4fd1
// converted property setter: - (void)setBarStyle:(int)style;	// 0x332b1729
// converted property setter: - (void)setBlockRemoteImages:(BOOL)images;	// 0x332b159d
// declared property setter: - (void)setCurrentPreviewItemIndex:(int)index;	// 0x332b1a21
// declared property setter: - (void)setDataSource:(id)source;	// 0x332b18fd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x332b155d
- (void)setLoadingTextForMissingFiles:(id)missingFiles;	// 0x332b16a1
// converted property setter: - (void)setShowActionAsDefaultButton:(BOOL)button;	// 0x332b1651
// converted property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x332b174d
// converted property setter: - (void)setUseCustomActionButton:(BOOL)button;	// 0x332b1601
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;	// 0x332b35e1
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x332b4bc9
// converted property getter: - (BOOL)showActionAsDefaultButton;	// 0x332b1681
// converted property getter: - (BOOL)translucent;	// 0x332b1751
// converted property getter: - (BOOL)useCustomActionButton;	// 0x332b1631
- (void)viewDidAppear:(BOOL)view;	// 0x332b2e29
- (void)viewDidDisappear:(BOOL)view;	// 0x332b3191
- (void)viewWillAppear:(BOOL)view;	// 0x332b288d
- (void)viewWillDisappear:(BOOL)view;	// 0x332b2ec9
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x332b4c1d
@end

