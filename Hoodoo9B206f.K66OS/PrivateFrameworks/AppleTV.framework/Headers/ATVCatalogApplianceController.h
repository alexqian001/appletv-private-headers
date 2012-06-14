/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSecureResource.h"
#import "BRAsynchronousControllerViewLoading.h"
#import "BRController.h"

@class BRURLDocument, BRPanelControl, BRControl, BRMerchant, NSTimer;

@interface ATVCatalogApplianceController : BRController <BRSecureResource, BRAsynchronousControllerViewLoading> {
@private
	BRPanelControl *_contentContainer;	// 84 = 0x54
	id _storeObject;	// 88 = 0x58
	BRControl *_catalogControl;	// 92 = 0x5c
	BOOL _controllerToSwapOnActivate;	// 96 = 0x60
	long _state;	// 100 = 0x64
	NSTimer *_timer;	// 104 = 0x68
	BOOL _isDirty;	// 108 = 0x6c
	BOOL _isVolatile;	// 109 = 0x6d
	BOOL _autoPlay;	// 110 = 0x6e
	BRMerchant *_merchant;	// 112 = 0x70
	Class _catalogAgent;	// 116 = 0x74
	BRURLDocument *_document;	// 120 = 0x78
	BOOL requiresAuthentication;	// 124 = 0x7c
	BOOL _shouldStartWaitPromptTimerOnActivate;	// 125 = 0x7d
	int _viewAvailability;	// 128 = 0x80
}
@property(assign, nonatomic) BOOL autoPlay;	// G=0x3654dcf1; S=0x3654dd01; @synthesize=_autoPlay
@property(readonly, retain) BRControl *catalogControl;	// G=0x3654dd81; converted property
@property(readonly, retain) BRPanelControl *contentContainer;	// G=0x3654dd71; converted property
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x3654d91d; S=0x3654d88d; 
@property(assign, nonatomic) BOOL requiresAuthentication;	// G=0x3654dd11; S=0x3654dd21; @synthesize
@property(assign, nonatomic) BOOL shouldStartWaitPromptTimerOnActivate;	// G=0x3654dd31; S=0x3654dd41; @synthesize=_shouldStartWaitPromptTimerOnActivate
@property(retain) id storeObject;	// G=0x3654da89; S=0x3654da49; converted property
@property(assign, nonatomic) int viewAvailability;	// G=0x3654dd51; S=0x3654dd61; @synthesize=_viewAvailability
+ (id)control;	// 0x3654d3a9
+ (id)controlWithMerchantLikeControl:(id)merchantLikeControl;	// 0x3654d355
+ (void)initialize;	// 0x3654d2a9
- (id)init;	// 0x3654d3e1
- (void)_controlCreated:(id)created;	// 0x3654ebc9
- (void)_controlNeedsAuth:(id)auth;	// 0x3654f051
- (void)_enterCompleteState;	// 0x3654e665
- (void)_enterErrorState;	// 0x3654e47d
- (void)_enterWaitingForAuthState;	// 0x3654e4fd
- (void)_enterWaitingForControlState;	// 0x3654e511
- (void)_enterWaitingForInitialState;	// 0x3654e3f9
- (void)_handleWaitingForControlAction:(int)controlAction;	// 0x3654e8c5
- (void)_handleWindowMaxBoundsChanged;	// 0x3654d7b1
- (void)_setState:(int)state;	// 0x3654e38d
- (void)_showWaitTimer:(id)timer;	// 0x3654e875
- (void)_swapInNewController:(id)newController;	// 0x3654e971
- (void)_updateStateForAction:(int)action;	// 0x3654e909
- (id)accessibilityLabel;	// 0x3654db9d
- (void)addControls;	// 0x3654e0f1
// declared property getter: - (BOOL)autoPlay;	// 0x3654dcf1
// converted property getter: - (id)catalogControl;	// 0x3654dd81
// converted property getter: - (id)contentContainer;	// 0x3654dd71
- (void)controlWasActivated;	// 0x3654d5b1
- (void)controlWasDeactivated;	// 0x3654d75d
- (void)dealloc;	// 0x3654d4f9
- (void)didEnterErrorState;	// 0x3654e381
- (id)errorContent;	// 0x3654df8d
- (BOOL)isNetworkDependent;	// 0x3654d889
- (void)layoutSubcontrols;	// 0x3654dae5
- (void)markAsDirty;	// 0x3654dac1
// declared property getter: - (id)merchant;	// 0x3654d91d
- (BOOL)recreateOnReselect;	// 0x3654daa9
- (void)refreshDirtyPage;	// 0x3654e2bd
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x3654dc99
// declared property getter: - (BOOL)requiresAuthentication;	// 0x3654dd11
// declared property setter: - (void)setAutoPlay:(BOOL)play;	// 0x3654dd01
- (void)setCatalogAgent:(Class)agent;	// 0x3654dad5
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3654d88d
// declared property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x3654dd21
// declared property setter: - (void)setShouldStartWaitPromptTimerOnActivate:(BOOL)startWaitPromptTimerOnActivate;	// 0x3654dd41
// converted property setter: - (void)setStoreObject:(id)object;	// 0x3654da49
- (void)setStoreObject:(id)object changeState:(BOOL)state;	// 0x3654dd91
- (void)setStoreObject:(id)object fromMerchant:(id)merchant;	// 0x3654d92d
// declared property setter: - (void)setViewAvailability:(int)availability;	// 0x3654dd61
- (BOOL)shouldAllowControllerContent;	// 0x3654e389
- (BOOL)shouldAllowTransitionOnSwap;	// 0x3654e385
- (BOOL)shouldShowWaitContent;	// 0x3654df89
// declared property getter: - (BOOL)shouldStartWaitPromptTimerOnActivate;	// 0x3654dd31
- (id)storeMerchant;	// 0x3654da99
// converted property getter: - (id)storeObject;	// 0x3654da89
- (void)updateContent:(id)content;	// 0x3654e0f5
// declared property getter: - (int)viewAvailability;	// 0x3654dd51
- (id)waitContent;	// 0x3654deb1
- (void)wasPopped;	// 0x3654d821
- (void)willEnterCompleteState;	// 0x3654e37d
@end
