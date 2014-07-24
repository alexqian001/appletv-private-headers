/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"
#import "BRControlFactory.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMediatorProvider : XXUnknownSuperclass <BRControlFactory, BRProvider> {
	NSMutableArray *_activeMediators;	// 4 = 0x4
	NSMutableArray *_mediators;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediators;	// G=0x4230cd; converted property
+ (id)provider;	// 0x422cc5
+ (id)providerWithControl:(id)control identifier:(id)identifier;	// 0x422e35
+ (id)providerWithControlArray:(id)controlArray;	// 0x422fe9
+ (id)providerWithControls:(id)controls;	// 0x422f39
+ (id)providerWithControlsAndIdentifiers:(id)controlsAndIdentifiers;	// 0x422e81
+ (id)providerWithMediator:(id)mediator;	// 0x422d11
+ (id)providerWithMediatorArray:(id)mediatorArray;	// 0x422de9
+ (id)providerWithMediators:(id)mediators;	// 0x422d5d
- (id)init;	// 0x422c21
- (id)initWithMediators:(id)mediators;	// 0x422af9
- (long)_activeInsertIndexForMediator:(id)mediator;	// 0x42367d
- (void)_activeStateChanged:(id)changed;	// 0x4234f9
- (void)_controlChanged:(id)changed;	// 0x423601
- (void)_insertMediator:(id)mediator atIndex:(long)index;	// 0x423711
- (void)_subscribeToNotificationsForMediator:(id)mediator;	// 0x4233b1
- (void)_unsubscribeToNotificationsForMediator:(id)mediator;	// 0x423469
- (void)addMediator:(id)mediator;	// 0x4230dd
- (id)controlFactory;	// 0x423321
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x42339d
- (id)dataAtIndex:(long)index;	// 0x423345
- (long)dataCount;	// 0x423325
- (void)dealloc;	// 0x422c35
- (id)hashForDataAtIndex:(long)index;	// 0x423365
- (void)insertMediator:(id)mediator after:(id)after;	// 0x4231f9
- (void)insertMediator:(id)mediator before:(id)before;	// 0x423259
- (id)mediatorWithIdentifier:(id)identifier;	// 0x4232a5
// converted property getter: - (id)mediators;	// 0x4230cd
- (void)removeMediator:(id)mediator;	// 0x42311d
@end
