/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRStateMachine, NSTimer, ATVPhotoMetadataViewConfigurator, ATVCarouselView;
@protocol ATVCarouselViewUIDelegate;

__attribute__((visibility("hidden")))
@interface ATVPhotoDetailView : BRControl {
	BOOL _isTransitioning;	// 84 = 0x54
	int _carouselType;	// 88 = 0x58
	ATVCarouselView *_carousel;	// 92 = 0x5c
	ATVPhotoMetadataViewConfigurator *_metadataView;	// 96 = 0x60
	id _carouselUIViewDelegateHandler;	// 100 = 0x64
	id _transitionBeginHandler;	// 104 = 0x68
	id _transitionEndHandler;	// 108 = 0x6c
	id<ATVCarouselViewUIDelegate> __carouselUIDelegate;	// 112 = 0x70
	BRStateMachine *__transitionStateMachine;	// 116 = 0x74
	NSTimer *__stateMachineEventTimer;	// 120 = 0x78
	double _typeChangeFadeDuration;	// 124 = 0x7c
	double _typeChangeAnimationDuration;	// 132 = 0x84
}
@property(retain, nonatomic) id<ATVCarouselViewUIDelegate> _carouselUIDelegate;	// G=0xca6dd; S=0xca6ed; @synthesize=__carouselUIDelegate
@property(assign, nonatomic, setter=_setStateMachineEventTimer:) __weak NSTimer *_stateMachineEventTimer;	// G=0xca739; S=0xc801d; @synthesize=__stateMachineEventTimer
@property(retain, nonatomic) BRStateMachine *_transitionStateMachine;	// G=0xca701; S=0xca711; @synthesize=__transitionStateMachine
@property(retain, nonatomic) ATVCarouselView *carousel;	// G=0xca5f1; S=0xca601; @synthesize=_carousel
@property(assign, nonatomic) int carouselType;	// G=0xca5e1; S=0xc766d; @synthesize=_carouselType
@property(copy, nonatomic) id carouselUIViewDelegateHandler;	// G=0xca671; S=0xca685; @synthesize=_carouselUIViewDelegateHandler
@property(assign, nonatomic) BOOL isTransitioning;	// G=0xc758d; S=0xca661; @synthesize=_isTransitioning
@property(retain, nonatomic) ATVPhotoMetadataViewConfigurator *metadataView;	// G=0xca629; S=0xca639; @synthesize=_metadataView
@property(copy, nonatomic) id transitionBeginHandler;	// G=0xca695; S=0xca6a9; @synthesize=_transitionBeginHandler
@property(copy, nonatomic) id transitionEndHandler;	// G=0xca6b9; S=0xca6cd; @synthesize=_transitionEndHandler
@property(assign, nonatomic) double typeChangeAnimationDuration;	// G=0xca5b5; S=0xca5cd; @synthesize=_typeChangeAnimationDuration
@property(assign, nonatomic) double typeChangeFadeDuration;	// G=0xca589; S=0xca5a1; @synthesize=_typeChangeFadeDuration
- (id)init;	// 0xc71e9
- (void).cxx_destruct;	// 0xca759
// declared property getter: - (id)_carouselUIDelegate;	// 0xca6dd
- (CGPoint)_expectedMetadataCenter;	// 0xca3d1
- (void)_loadCarouselUIDelegateWithSetupAnimationDuration:(double)setupAnimationDuration;	// 0xca319
- (id)_makeTransitionStateMachine;	// 0xc80a1
- (void)_reloadCarouselHandler;	// 0xca289
- (void)_reloadCarouselUIDelegateHandler;	// 0xca2c1
// declared property setter: - (void)_setStateMachineEventTimer:(id)timer;	// 0xc801d
// declared property getter: - (id)_stateMachineEventTimer;	// 0xca739
- (void)_stateMachineEventTimerHandler:(id)handler;	// 0xca141
// declared property getter: - (id)_transitionStateMachine;	// 0xca701
- (void)_updatePhotosHandler;	// 0xca2e1
- (BOOL)brEventAction:(id)action;	// 0xc7e51
// declared property getter: - (id)carousel;	// 0xca5f1
// declared property getter: - (int)carouselType;	// 0xca5e1
// declared property getter: - (id)carouselUIViewDelegateHandler;	// 0xca671
- (void)controlWasDeactivated;	// 0xc7a01
// declared property getter: - (BOOL)isTransitioning;	// 0xc758d
- (void)layoutSubcontrols;	// 0xc7a71
// declared property getter: - (id)metadataView;	// 0xca629
- (void)reloadCarousel;	// 0xc7851
- (void)reloadCarouselUIDelegate;	// 0xc7899
// declared property setter: - (void)setCarousel:(id)carousel;	// 0xca601
// declared property setter: - (void)setCarouselType:(int)type;	// 0xc766d
// declared property setter: - (void)setCarouselUIViewDelegateHandler:(id)handler;	// 0xca685
// declared property setter: - (void)setIsTransitioning:(BOOL)transitioning;	// 0xca661
// declared property setter: - (void)setMetadataView:(id)view;	// 0xca639
// declared property setter: - (void)setTransitionBeginHandler:(id)handler;	// 0xca6a9
// declared property setter: - (void)setTransitionEndHandler:(id)handler;	// 0xca6cd
// declared property setter: - (void)setTypeChangeAnimationDuration:(double)duration;	// 0xca5cd
// declared property setter: - (void)setTypeChangeFadeDuration:(double)duration;	// 0xca5a1
// declared property setter: - (void)set_carouselUIDelegate:(id)delegate;	// 0xca6ed
// declared property setter: - (void)set_transitionStateMachine:(id)machine;	// 0xca711
// declared property getter: - (id)transitionBeginHandler;	// 0xca695
// declared property getter: - (id)transitionEndHandler;	// 0xca6b9
// declared property getter: - (double)typeChangeAnimationDuration;	// 0xca5b5
// declared property getter: - (double)typeChangeFadeDuration;	// 0xca589
- (void)updatePhotos;	// 0xc78e1
@end

