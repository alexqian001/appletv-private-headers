/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewUIDelegate.h"
#import "ATVSubviewController.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVCarouselViewDataSource.h"

@class ATVCarouselView, NSArray;

__attribute__((visibility("hidden")))
@interface ATVOneupViewController : XXUnknownSuperclass <ATVSubviewController, ATVCarouselViewDataSource, ATVCarouselViewUIDelegate> {
	ATVCarouselView *_carouselView;	// 4 = 0x4
	NSArray *_items;	// 8 = 0x8
	unsigned _transitionMode;	// 12 = 0xc
}
@property(retain, nonatomic) ATVCarouselView *carouselView;	// G=0x2e927d; S=0x2e928d; @synthesize=_carouselView
@property(retain, nonatomic) NSArray *items;	// G=0x2e92b5; S=0x2e92c5; @synthesize=_items
@property(assign, nonatomic) unsigned transitionMode;	// G=0x2e92ed; S=0x2e92fd; @synthesize=_transitionMode
- (id)init;	// 0x2e7c81
- (void).cxx_destruct;	// 0x2e930d
- (id)_applyDissolvePositionMatrixToItem:(id)item forPositionAtIndex:(unsigned)index context:(id)context;	// 0x2e8a81
- (id)_applyPushPositionMatrixToItem:(id)item toPositionAtIndex:(unsigned)index context:(id)context;	// 0x2e8c81
- (void)_disposeImageForItem:(id)item;	// 0x2e90dd
- (void)_dissolvePositionMatrixAtIndex:(unsigned)index opacity:(float *)opacity;	// 0x2e9031
- (void)_pushPositionMatrixAtIndex:(unsigned)index transform:(CATransform3D *)transform;	// 0x2e9049
// declared property getter: - (id)carouselView;	// 0x2e927d
- (id)carouselView:(id)view configurePerspectiveForContext:(id)context;	// 0x2e8299
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x2e7e99
- (ATVCarouselViewItemsConfig)carouselView:(id)view itemsConfigForContext:(id)context;	// 0x2e8221
- (id)carouselView:(id)view setPositionOfItem:(id)item toPositionAtIndex:(unsigned)index context:(id)context;	// 0x2e82a1
// declared property getter: - (id)items;	// 0x2e92b5
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x2e7e5d
// declared property setter: - (void)setCarouselView:(id)view;	// 0x2e928d
// declared property setter: - (void)setItems:(id)items;	// 0x2e92c5
// declared property setter: - (void)setTransitionMode:(unsigned)mode;	// 0x2e92fd
// declared property getter: - (unsigned)transitionMode;	// 0x2e92ed
- (void)updateWithViewElement:(id)viewElement transitionMode:(unsigned)mode;	// 0x2e7d89
- (id)view;	// 0x2e7d79
@end
