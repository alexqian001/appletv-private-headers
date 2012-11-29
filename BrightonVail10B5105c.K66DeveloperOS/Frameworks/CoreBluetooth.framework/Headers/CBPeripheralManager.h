/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <NSObject.h> // Unknown library
#import "CoreBluetooth-Structs.h"

@protocol CBPeripheralManagerDelegate;

@interface CBPeripheralManager : NSObject {
	id<CBPeripheralManagerDelegate> _delegate;	// 4 = 0x4
	int _state;	// 8 = 0x8
	BOOL _advertising;	// 12 = 0xc
}
@property(assign, nonatomic) id<CBPeripheralManagerDelegate> delegate;	// G=0x305d7ab5; S=0x305d7ac5; @synthesize=_delegate
@property(assign) BOOL isAdvertising;	// G=0x305d7ae9; S=0x305d7b01; @synthesize=_advertising
@property(readonly, assign) int state;	// G=0x305d7ad5; @synthesize=_state
+ (id)allocWithZone:(NSZone *)zone;	// 0x305d79c1
- (id)initWithDelegate:(id)delegate queue:(id)queue;	// 0x305d79f1
- (void)addService:(id)service;	// 0x305d7a49
// declared property getter: - (id)delegate;	// 0x305d7ab5
// declared property getter: - (BOOL)isAdvertising;	// 0x305d7ae9
- (void)removeAllServices;	// 0x305d7a71
- (void)removeService:(id)service;	// 0x305d7a5d
- (void)respondToRequest:(id)request withResult:(int)result;	// 0x305d7a85
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x305d7ac5
- (void)setDesiredConnectionLatency:(int)latency forCentral:(id)central;	// 0x305d7a35
// declared property setter: - (void)setIsAdvertising:(BOOL)advertising;	// 0x305d7b01
- (void)startAdvertising:(id)advertising;	// 0x305d7a0d
// declared property getter: - (int)state;	// 0x305d7ad5
- (void)stopAdvertising;	// 0x305d7a21
- (BOOL)updateValue:(id)value forCharacteristic:(id)characteristic onSubscribedCentrals:(id)centrals;	// 0x305d7a99
@end
